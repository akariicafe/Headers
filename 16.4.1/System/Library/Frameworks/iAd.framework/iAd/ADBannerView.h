@interface ADBannerView : UIView

@property (readonly, nonatomic) long long adType;
@property (weak, nonatomic) id delegate;
@property (readonly, nonatomic, getter=isBannerLoaded) BOOL bannerLoaded;
@property (readonly, nonatomic, getter=isBannerViewActionInProgress) BOOL bannerViewActionInProgress;
@property (copy, nonatomic) id advertisingSection;
@property (copy, nonatomic) id requiredContentSizeIdentifiers;
@property (copy, nonatomic) id currentContentSizeIdentifier;

+ (struct CGSize { double x0; double x1; })sizeFromBannerContentSizeIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)initWithAdType:(long long)a0;
- (void)cancelBannerViewAction;

@end
