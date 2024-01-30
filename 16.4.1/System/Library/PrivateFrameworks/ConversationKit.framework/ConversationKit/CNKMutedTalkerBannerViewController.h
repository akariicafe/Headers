@class NSString, UIViewController;

@interface CNKMutedTalkerBannerViewController : UIViewController <BNPresentable> {
    void /* unknown type, empty encoding */ currentRequestID;
    void /* unknown type, empty encoding */ pillView;
    void /* unknown type, empty encoding */ pillImageView;
    void /* unknown type, empty encoding */ pillViewSubtitle;
    void /* unknown type, empty encoding */ pillViewTitle;
    void /* unknown type, empty encoding */ bannerSource;
    void /* unknown type, empty encoding */ isMuted;
    void /* unknown type, empty encoding */ isBannerPresent;
}

@property (nonatomic, readonly) long long presentableType;
@property (nonatomic, readonly) NSString *requestIdentifier;
@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, readonly) NSString *requesterIdentifier;
@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } bannerContentOutsets;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (struct CGSize { double x0; double x1; })preferredContentSizeWithPresentationSize:(struct CGSize { double x0; double x1; })a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (void)presentableWillDisappearAsBanner:(id)a0 withReason:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)init;
- (void)presentableWillAppearAsBanner:(id)a0;
- (void).cxx_destruct;
- (void)handleTap:(id)a0;
- (void)dismissBanner;
- (void)showBanner;
- (void)playBannerSound;
- (void)updatePillViewWithIsMuted:(BOOL)a0;

@end
