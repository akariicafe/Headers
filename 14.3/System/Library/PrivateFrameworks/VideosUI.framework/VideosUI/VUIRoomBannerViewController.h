@class NSString, VUIRoomBannerView, IKViewElement;

@interface VUIRoomBannerViewController : UIViewController <VUIProductUberBackgroundInterface>

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUIRoomBannerView *bannerView;
@property (readonly, nonatomic) BOOL isUberLayoutActive;
@property (readonly, nonatomic) BOOL disableGradientBelowNavBar;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double topThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setUberImageOffset:(double)a0;
- (void)setBannerOpacity:(double)a0;
- (void)setWhiteBannerOpacity:(double)a0;

@end
