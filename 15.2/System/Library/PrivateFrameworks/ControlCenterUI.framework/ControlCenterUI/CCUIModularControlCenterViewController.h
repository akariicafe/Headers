@class CCUIModuleCollectionViewController, NSString, CCUIStatusLabelViewController, CCUIModuleInstanceManager;
@protocol CCUIModularControlCenterViewControllerDelegate;

@interface CCUIModularControlCenterViewController : UIViewController <CCUIModuleCollectionViewControllerDelegate, CCUIContentModuleContextDelegate, CCUIModuleInstanceManagerObserver> {
    CCUIModuleInstanceManager *_moduleManager;
}

@property (readonly, nonatomic) CCUIModuleInstanceManager *moduleInstanceManager;
@property (readonly, nonatomic) CCUIStatusLabelViewController *statusLabelViewController;
@property (readonly, nonatomic) CCUIModuleCollectionViewController *moduleCollectionViewController;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isHostedInTestApp) BOOL hostedInTestApp;
@property (readonly, nonatomic, getter=isHomeGestureDismissalAllowed) BOOL homeGestureDismissalAllowed;
@property (readonly, nonatomic) unsigned long long moduleRowCount;
@property (weak, nonatomic) id<CCUIModularControlCenterViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedCollectionViewController;

- (void)dismissExpandedViewForContentModuleContext:(id)a0;
- (id)initWithSystemAgent:(id)a0;
- (void)dismissPresentedContent;
- (void)dismissExpandedModuleAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)expandModuleWithIdentifier:(id)a0;
- (void)moduleCollectionViewController:(id)a0 didAddModuleContainerViewController:(id)a1;
- (id)_safeStatusLabelViewContainerView;
- (id)_statusLabelViewContainerView;
- (void)moduleCollectionViewController:(id)a0 willPresentViewController:(id)a1;
- (void)dismissControlCenterForContentModuleContext:(id)a0;
- (long long)_interfaceOrientation;
- (id)contentModuleContext:(id)a0 requestsSensorActivityDataForActiveSensorType:(unsigned long long)a1;
- (long long)interfaceOrientationForModuleCollectionViewController:(id)a0;
- (void)moduleCollectionViewControllerDidUpdateModules:(id)a0;
- (void)requestExpandModuleForContentModuleContext:(id)a0;
- (struct CCUIModuleLayoutSize { unsigned long long x0; unsigned long long x1; })moduleLayoutSizeForContentModuleContext:(id)a0 forOrientation:(long long)a1;
- (void)moduleCollectionViewController:(id)a0 didBeginInteractionWithModule:(id)a1;
- (id)moduleCollectionViewController;
- (void)moduleCollectionViewController:(id)a0 willOpenExpandedModule:(id)a1;
- (id)_moduleCollectionViewContainerView;
- (id)_safeModuleCollectionViewContainerView;
- (void)displayWillTurnOff;
- (void)moduleCollectionViewController:(id)a0 willRemoveModuleContainerViewController:(id)a1;
- (BOOL)canDismissPresentedContent;
- (void)closeCurrentModuleWithCompletionHandler:(id /* block */)a0;
- (void)moduleCollectionViewController:(id)a0 didFinishInteractionWithModule:(id)a1;
- (void)moduleCollectionViewController:(id)a0 willDismissViewController:(id)a1;
- (void)requestModuleLayoutSizeUpdateForContentModuleContext:(id)a0;
- (void)moduleCollectionViewController:(id)a0 willCloseExpandedModule:(id)a1;
- (void)_reparentAndBecomeActive;
- (void)dismissPresentedContentAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_reparent;
- (void)moduleInstancesLayoutChangedForModuleInstanceManager:(id)a0;
- (void)viewDidLoad;
- (void)dismissPresentedContentWithCompletionHandler:(id /* block */)a0;
- (void)moduleInstancesChangedForModuleInstanceManager:(id)a0;
- (void)moduleCollectionViewController:(id)a0 didCloseExpandedModule:(id)a1;
- (void)moduleCollectionViewController:(id)a0 didUpdateHomeGestureDismissalAllowed:(BOOL)a1;
- (void)moduleCollectionViewController:(id)a0 didOpenExpandedModule:(id)a1;
- (unsigned long long)moduleRowCount;
- (void)contentModuleContext:(id)a0 enqueueStatusUpdate:(id)a1;
- (void)_reparentCollectionViewController;
- (void)_resignActive;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)contentModuleContext:(id)a0 didUpdateHomeGestureDismissalAllowed:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
