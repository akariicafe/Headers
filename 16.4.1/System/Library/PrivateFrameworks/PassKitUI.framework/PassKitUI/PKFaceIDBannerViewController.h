@class UIView, NSString, NSURL, LAUIPearlGlyphView, BSAction, PKFaceIDBannerHandleState, NSObject, PKBlurView, UIColor;
@protocol PKBannerViewControllerPresentable, OS_dispatch_source, SBUISystemApertureAccessoryView;

@interface PKFaceIDBannerViewController : UIViewController <PKBannerHandleViewController> {
    int _state;
    BOOL _revoked;
    unsigned long long _revokeBackgroundTask;
    NSObject<OS_dispatch_source> *_revokeTimer;
    BOOL _transitioning;
    BOOL _appearedOnce;
    BOOL _updatingPreferredContentSize;
    BOOL _elementNeedsUpdate;
    char _deferredGlyphState;
    long long _glyphState;
    NSObject<OS_dispatch_source> *_glyphLegibilityTimer;
    unsigned int _transitionAnimationCounter;
    unsigned int _glyphAnimationCounter;
    UIColor *_keyColor;
    UIColor *_successKeyColor;
    UIView *_containerView;
    PKBlurView *_glyphContainerView;
    LAUIPearlGlyphView *_glyphView;
}

@property (nonatomic, getter=isBannerDetached) BOOL bannerDetached;
@property (retain, nonatomic) PKFaceIDBannerHandleState *bannerState;
@property (weak, nonatomic) id<PKBannerViewControllerPresentable> presentable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long activeLayoutMode;
@property (readonly, nonatomic) long long contentRole;
@property (readonly, nonatomic) long long preferredLayoutMode;
@property (readonly, nonatomic) long long maximumLayoutMode;
@property (readonly, nonatomic) double preferredHeightForBottomSafeArea;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *associatedScenePersistenceIdentifier;
@property (readonly, copy, nonatomic) NSURL *launchURL;
@property (readonly, nonatomic) BSAction *launchAction;
@property (readonly, nonatomic) BOOL preventsInteractiveDismissal;
@property (readonly, nonatomic) BOOL preventsAutomaticDismissal;
@property (readonly, nonatomic) long long minimumLayoutMode;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *leadingView;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *trailingView;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *minimalView;
@property (readonly, nonatomic) unsigned long long statusBarStyleOverridesToSuppress;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredCustomAspectRatio;
@property (readonly, nonatomic) long long preferredCustomLayout;
@property (readonly, nonatomic) unsigned long long presentationBehaviors;
@property (readonly, copy, nonatomic) UIColor *keyColor;
@property (nonatomic) unsigned long long minimalViewLayoutAxis;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *detachedMinimalView;
@property (nonatomic) BOOL canRequestAlertingAssertion;
@property (readonly, nonatomic) BOOL attachedMinimalViewRequiresZeroPadding;

- (void)revoked;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (id)init;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillLayoutSubviewsWithTransitionCoordinator:(id)a0;

@end
