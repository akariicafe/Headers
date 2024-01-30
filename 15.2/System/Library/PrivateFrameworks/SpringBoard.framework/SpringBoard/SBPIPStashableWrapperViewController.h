@class UIView, NSString, SBPIPStashView, UITapGestureRecognizer, SBPIPStashVisualSettings, SBPIPShadowSettings, SBPIPStashedMaskView, UIViewController, SBPortalView;
@protocol SBPIPStashableWrapperViewControllerDelegate;

@interface SBPIPStashableWrapperViewController : UIViewController <PTSettingsKeyPathObserver> {
    SBPIPStashVisualSettings *_settings;
    SBPIPShadowSettings *_shadowSettings;
    UIView *_containerView;
    UIView *_shadowView;
    SBPIPStashView *_stashView;
    UIView *_tabShadowView;
    SBPIPStashedMaskView *_stashMaskView;
    SBPortalView *_leftSideContentPortalView;
    SBPortalView *_rightSideContentPortalView;
    BOOL _stashTabHidden;
    BOOL _stashTabShownLeft;
    unsigned long long _inFlightStashTabAnimationIdentifier;
    unsigned long long _inFlightStashProgressAnimationIdentifier;
    UITapGestureRecognizer *_stashedTapGestureRecognizer;
    UIViewController *_contentViewController;
    UIView *_contentView;
    double _cornerRadiusMetric;
}

@property (weak, nonatomic) id<SBPIPStashableWrapperViewControllerDelegate> delegate;
@property (readonly, nonatomic) UIView *contentContainerView;
@property (nonatomic, getter=isInteractivelyResizing) BOOL interactivelyResizing;
@property (nonatomic) struct CGSize { double width; double height; } minimumStashTabSize;
@property (nonatomic) BOOL stashed;
@property (readonly, nonatomic) BOOL isStashTabHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (void)viewDidLoad;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewWillLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)loadView;
- (void).cxx_destruct;
- (double)_continuousCornerRadius;
- (void)dealloc;
- (void)setStashProgress:(double)a0;
- (void)_handleTapWhileStashedGestureRecognizer:(id)a0;
- (void)_resetStashTabViewsIfPossible;
- (void)_setStashedTabHidden:(BOOL)a0 left:(BOOL)a1;
- (void)_addMaskViewSubviewIfNeeded;
- (void)_layoutStashTabViewsIfNeeded;
- (void)_setPortalActive:(BOOL)a0 left:(BOOL)a1;
- (void)_setStashMaskActive:(BOOL)a0;
- (void)_updateContentCornerRadiusForMaskActive:(BOOL)a0;
- (void)_setStashProgress:(double)a0 animated:(BOOL)a1;
- (void)setStashed:(BOOL)a0 animated:(BOOL)a1;
- (id)_newShadowViewWithSettings:(id)a0;
- (void)_applyDropShadowSettings:(id)a0 toView:(id)a1;
- (id)initWithContentViewController:(id)a0 cornerRadius:(double)a1 stashVisualSettings:(id)a2 shadowSettings:(id)a3;
- (void)setStashTabHidden:(BOOL)a0 left:(BOOL)a1 withSpringBehavior:(id)a2 completion:(id /* block */)a3;

@end
