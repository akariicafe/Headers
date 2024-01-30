@class UIScene, NSString, _BNPanGestureServiceProxy, NSMutableArray;
@protocol BNBannerClientContainerDelegate, BSInvalidatable, BNPresentable;

@interface BNBannerClientContainerViewController : UIViewController <BNBannerClientContainer, BNPresentableContext> {
    id<BSInvalidatable> _deferringRule;
    NSMutableArray *_transitionContextStack;
    _BNPanGestureServiceProxy *_panGestureProxy;
}

@property (readonly, weak, nonatomic) UIScene *scene;
@property (readonly, nonatomic) id<BNPresentable> presentable;
@property (weak, nonatomic) id<BNBannerClientContainerDelegate> delegate;
@property (readonly, nonatomic, getter=isDeferringFocus) BOOL deferringFocus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewDidLoad;
- (id)keyWindowForScreen:(id)a0;
- (void)viewWillLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void)_performActionsForUIScene:(id)a0 withUpdatedFBSScene:(id)a1 settingsDiff:(id)a2 fromSettings:(id)a3 transitionContext:(id)a4 lifecycleActionType:(unsigned int)a5;
- (void).cxx_destruct;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (id)_respondToActions:(id)a0 forFBSScene:(id)a1 inUIScene:(id)a2 fromTransitionContext:(id)a3;
- (void)bs_traitCollectionDidChange:(id)a0 forManagedTraitEnvironment:(id)a1;
- (id)initWithScene:(id)a0 presentable:(id)a1;
- (void)_handlePanGestureProxyAction:(id)a0;
- (void)_setPreferredContentSize:(struct CGSize { double x0; double x1; })a0 shouldFence:(BOOL)a1;
- (void)_setPresentableViewControllerAppearState:(int)a0;
- (void)_setPresentableBannerAppearState:(int)a0 reason:(id)a1;
- (void)_setPresentableUserInteractionInProgress:(BOOL)a0;
- (void)_handleRejectionAction:(id)a0;
- (void)_acquireDeferringRuleIfNecessary;
- (void)_invalidateDeferringRule;
- (void)setHostNeedsUpdate;

@end
