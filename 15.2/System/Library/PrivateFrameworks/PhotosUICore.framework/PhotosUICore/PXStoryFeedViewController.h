@class PXStoryFeedView, NSString, PXExpectation, PXStoryFeedViewModel, PXStoryFeedConfiguration, NSObject, PXProgrammaticNavigationDestination;
@protocol PXStoryFeedActionPerformer, PXStoryFeedChromeController, PXAnonymousScrollView;

@interface PXStoryFeedViewController : UIViewController <PXStoryFeedViewActionPerformer, PXAssetCollectionActionPerformerDelegate, PXStoryViewControllerTransitionEndPoint, PXStoryFeedTestElement, PXTapToRadarDiagnosticProvider, PXStoryFeedViewController, PXProgrammaticNavigationParticipant> {
    struct { BOOL handlePrimaryActionOnItemAtIndexPathInDataSourceFromViewController; BOOL navigateToObjectReferenceFromViewControllerAnimatedWillPresentHandlerCompletionHandler; } _actionPerformerRespondsTo;
}

@property (readonly, nonatomic) PXStoryFeedViewModel *viewModel;
@property (readonly, nonatomic) id<PXStoryFeedChromeController> chromeController;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) id<PXStoryFeedActionPerformer> actionPerformer;
@property (copy, nonatomic) id /* block */ onTransitionEnd;
@property (retain, nonatomic) PXExpectation *nextViewLayoutExpectation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXStoryFeedView *feedView;
@property (readonly, nonatomic) PXStoryFeedConfiguration *configuration;
@property (readonly, nonatomic) NSObject<PXAnonymousScrollView> *ppt_scrollView;
@property (readonly, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;

- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithConfiguration:(id)a0;
- (id)hostViewControllerForActionPerformer:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)actionPerformer:(id)a0 transitionToViewController:(id)a1 transitionType:(long long)a2;
- (id)nextExistingParticipantOnRouteToDestination:(id)a0;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void)didEndTransition:(id)a0 withEndPoint:(id)a1 finished:(BOOL)a2;
- (id)itemPlacementControllerForItemReference:(id)a0;
- (void)willBeginTransition:(id)a0 withEndPoint:(id)a1;
- (void)_handleScrollViewTap:(id)a0;
- (void)ppt_transitionToFirstItemWithWillPresentHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (BOOL)handlePrimaryActionOnItemAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 inDataSource:(id)a1;
- (void)a_customTapToRadar:(id)a0;
- (void)_checkCanNavigate:(BOOL *)a0 toDestination:(id)a1 iterator:(id)a2;
- (void)_handleCanNavigate:(BOOL)a0 toDestination:(id)a1 objectReference:(id)a2 completionHandler:(id /* block */)a3;
- (id)_objectReferenceForDestination:(id)a0;

@end
