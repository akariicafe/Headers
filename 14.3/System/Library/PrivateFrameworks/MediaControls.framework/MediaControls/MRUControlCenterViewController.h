@class NSString, MediaControlsEndpointsManager, UIViewPropertyAnimator, NSMutableDictionary, MRUControlCenterView, UICollectionViewDiffableDataSource, UIViewController, FBSDisplayLayoutMonitor, MRUNowPlayingViewController;

@interface MRUControlCenterViewController : UIViewController <MediaControlsEndpointsManagerDelegate, MRUNowPlayingViewControllerDelegate, MRUEndpointMetadataControllerObserver, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UIGestureRecognizerDelegate, MRUModuleViewController>

@property (retain, nonatomic) MRUControlCenterView *view;
@property (retain, nonatomic) MRUControlCenterView *viewIfLoaded;
@property (retain, nonatomic) MediaControlsEndpointsManager *endpointsManager;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) NSMutableDictionary *viewControllers;
@property (retain, nonatomic) MRUNowPlayingViewController *selectedViewController;
@property (copy, nonatomic) id /* block */ replaceRoutes;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;
@property (retain, nonatomic) UIViewController *alertViewController;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *displayMonitor;
@property (nonatomic) long long pendingNowPlayingExpandedLayout;
@property (copy, nonatomic) id /* block */ dismissalBlock;
@property (copy, nonatomic) id /* block */ routingCornerViewTappedBlock;
@property (copy, nonatomic) id /* block */ homeGestureDismissalAllowedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double preferredExpandedContentHeight;
@property (readonly, nonatomic) double preferredExpandedContentWidth;
@property (readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;

- (BOOL)canDismissPresentedContent;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldExpandModuleOnTouch:(id)a0;
- (void)transitionToState:(long long)a0 completion:(id /* block */)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)endpointsManager:(id)a0 defersRoutesReplacement:(id /* block */)a1;
- (void)updateViewControllers;
- (void)dismissPresentedContentAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)setState:(long long)a0;
- (BOOL)_canShowWhileLocked;
- (void)dismiss;
- (void)endpointsManager:(id)a0 activeSystemRouteDidChange:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)nowPlayingViewController:(id)a0 didChangeSizeWithAnimations:(id /* block */)a1 completion:(id /* block */)a2;
- (void)nowPlayingViewController:(id)a0 applyLayout:(long long)a1;
- (void)nowPlayingViewController:(id)a0 showViewController:(id)a1;
- (id)selectedIdentifier;
- (void)didSelectListState:(id)a0;
- (void)updateCell:(id)a0 forIdentifier:(id)a1;
- (void)updateDiscoveryMode;
- (void)updateLockedState;
- (void)updateSelectedViewControllerLayout;
- (void)updateMetadataControllers;
- (void)updateCellForIdentifier:(id)a0;
- (void)updateMoreButtonVisibility;
- (void)didSelectQuickActionButton:(id)a0;
- (void)updateVisibilityForActiveCell:(BOOL)a0 inActiveCells:(BOOL)a1;
- (BOOL)metadataControllerShouldAutomaticallyUpdateReponse:(id)a0;
- (void)metadataController:(id)a0 didLoadNewResponse:(id)a1;
- (void)metadataController:(id)a0 didUpdateApplicationIcon:(id)a1;
- (void)metadataControllerDidChangeState:(id)a0;
- (void)metadataControllerDidUpdateRoutingAvailability:(id)a0;
- (void)metadataControllerRouteDidUpdate:(id)a0;

@end
