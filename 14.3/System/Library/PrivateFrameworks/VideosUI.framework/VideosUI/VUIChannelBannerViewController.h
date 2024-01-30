@class IKViewElement, NSString, VUIProductUberBackgroundView, VUIChannelBannerView;

@interface VUIChannelBannerViewController : UIViewController <VUIProductUberBackgroundInterface>

@property (readonly, nonatomic) VUIProductUberBackgroundView *uberBackgroundView;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (readonly, nonatomic) VUIChannelBannerView *bannerView;
@property (readonly, nonatomic) BOOL isUberLayoutActive;
@property (readonly, nonatomic) BOOL disableGradientBelowNavBar;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double topThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)_configureSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)setUberImageOffset:(double)a0;
- (void)setBannerOpacity:(double)a0;

@end
