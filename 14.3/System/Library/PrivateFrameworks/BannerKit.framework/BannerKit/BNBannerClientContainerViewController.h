@class UIScene, NSString, _BNPanGestureServiceProxy, NSMutableArray;
@protocol BNBannerClientContainerDelegate, BSInvalidatable, BNPresentable;

@interface BNBannerClientContainerViewController : UIViewController <BNBannerClientContainer> {
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

- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (void)_performActionsForUIScene:(id)a0 withUpdatedFBSScene:(id)a1 settingsDiff:(id)a2 fromSettings:(id)a3 transitionContext:(id)a4 lifecycleActionType:(unsigned int)a5;
- (id)keyWindowForScreen:(id)a0;
- (id)_respondToActions:(id)a0 forFBSScene:(id)a1 inUIScene:(id)a2 fromTransitionContext:(id)a3;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)initWithScene:(id)a0 presentable:(id)a1;
- (void)viewDidLoad;
- (void)bs_traitCollectionDidChange:(id)a0 forManagedTraitEnvironment:(id)a1;
- (void)viewWillLayoutSubviews;
- (void)_handlePanGestureProxyAction:(id)a0;
- (void)_setPreferredContentSize:(struct CGSize { double x0; double x1; })a0 shouldFence:(BOOL)a1;
- (void)_setPresentableViewControllerAppearState:(int)a0;
- (void)_setPresentableBannerAppearState:(int)a0 reason:(id)a1;
- (void)_setPresentableUserInteractionInProgress:(BOOL)a0;
- (void)_handleViewWillTransitionToSizeAction:(id)a0 shouldFence:(BOOL)a1;
- (void)_handleSizeTransitionCompleteAction:(id)a0;
- (void)_acquireDeferringRuleIfNecessary;
- (void)_invalidateDeferringRule;

@end
