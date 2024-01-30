@class UIView, PUPickerBannerView;

@interface PUPickerBanner : PUAbstractNavigationBanner {
    UIView *_view;
}

@property (readonly, nonatomic) PUPickerBannerView *bannerView;

- (id)view;
- (double)height;
- (void).cxx_destruct;

@end
