@class BSAnimationSettings, NSString, NSUUID, NSHashTable, UIView, FBScene, UIViewController;
@protocol BNPresentableContext, UIScenePresenter, BNPanGestureProxy;

@interface BNBannerSourceListenerPresentableViewController : UIViewController <BNBannerSourceListenerPresentableViewControllerViewDelegate, BNBannerSourceListenerPresentable> {
    id<UIScenePresenter> _scenePresenter;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _bannerContentOutsets;
    NSHashTable *_observers;
    BSAnimationSettings *_bannerSizeTransitionAnimationSettings;
    id /* block */ _readyCompletion;
    id<BNPanGestureProxy> _panGestureProxy;
}

@property (readonly, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic, getter=isContentHosted) BOOL contentHosted;
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (readonly, nonatomic) int bannerAppearState;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableType;
@property (weak, nonatomic) id<BNPresentableContext> presentableContext;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;

- (void)presentableWillAppearAsBanner:(id)a0;
- (void)sceneContentStateDidChange:(id)a0;
- (void)userInteractionWillBeginForBannerForPresentable:(id)a0;
- (void)viewDidLoad;
- (void)sceneDidInvalidate:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_enumerateObserversRespondingToSelector:(SEL)a0 usingBlock:(id /* block */)a1;
- (void)viewWillLayoutSubviews;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)viewWillDisappear:(BOOL)a0;
- (void)userInteractionDidEndForBannerForPresentable:(id)a0;
- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)presentableWillDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)presentableWillNotAppearAsBanner:(id)a0 withReason:(id)a1;
- (void)loadView;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)invalidate;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)presentableDidAppearAsBanner:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)draggingDidBeginWithGestureProxy:(id)a0;
- (id)presentableDescription;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bannerContentOutsets;
- (void)addPresentableObserver:(id)a0;
- (void)removePresentableObserver:(id)a0;
- (id)initWithWithSpecification:(id)a0 scene:(id)a1 readyCompletion:(id /* block */)a2;
- (id)bannerSizeTransitionAnimationSettings;
- (void)_setReadyCompletion:(id /* block */)a0;
- (void)_updatePreferredContentSizeWithScene:(id)a0 transitionContext:(id)a1;
- (void)_updateBannerContentOutsetsWithScene:(id)a0;
- (void)_tearDownSceneInfrastructureIfNecessary;
- (void)_makeReadyIfPossibleWithScene:(id)a0;
- (void)_tearDownScenePresenterIfNecessary;
- (id /* block */)_tearDownSceneBlock:(id)a0;
- (void)_tearDownSceneIfNecessary;
- (void)bannerHostSceneViewControllerViewDidChangeSize:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForBannerHostSceneViewControllerView:(id)a0;

@end
