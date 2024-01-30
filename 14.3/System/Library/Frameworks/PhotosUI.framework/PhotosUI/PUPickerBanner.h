@class UIView, PUPickerBannerView;

@interface PUPickerBanner : PUAbstractNavigationBanner {
    UIView *_view;
}

@property (readonly, nonatomic) PUPickerBannerView *bannerView;

- (void).cxx_destruct;
- (id)view;
- (double)height;

@end
