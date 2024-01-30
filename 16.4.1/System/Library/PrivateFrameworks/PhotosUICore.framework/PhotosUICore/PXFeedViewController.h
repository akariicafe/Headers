@class PXFeedViewModel, NSString, UIView, PXSectionedObjectReference, PXUpdater, PXExpectation, PXFeedGadget, PXFeedView, NSObject, PXProgrammaticNavigationDestination, PXFeedConfiguration;
@protocol PXAnonymousScrollView, PXFeedViewControllerTabBarTransitionDelegate, PXFeedChromeController, PXFeedActionPerformer;

@interface PXFeedViewController : UIViewController <PXFeedViewActionPerformer, PXAssetCollectionActionPerformerDelegate, PXStoryViewControllerTransitionEndPoint, PXChangeObserver, PXSectionedDataSourceManagerObserver, UIContextMenuInteractionDelegate, PXFeedTestElement, PXTapToRadarDiagnosticProvider, PXFeedViewController, PXProgrammaticNavigationParticipant> {
    struct { BOOL handlePrimaryActionOnItemAtIndexPathInDataSourceFromViewController; BOOL navigateToObjectReferenceFromViewControllerAnimatedWillPresentHandlerCompletionHandler; BOOL contextMenuForObjectReferenceInDataSourceSuggestedActions; BOOL deleteItemsInSelectionUndoManager; } _actionPerformerRespondsTo;
}

@property (readonly, nonatomic) PXFeedViewModel *viewModel;
@property (readonly, nonatomic) id<PXFeedChromeController> chromeController;
@property (readonly, nonatomic) PXUpdater *updater;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) id<PXFeedActionPerformer> actionPerformer;
@property (copy, nonatomic) id /* block */ onTransitionEnd;
@property (retain, nonatomic) PXExpectation *nextViewDidAppearExpectation;
@property (retain, nonatomic) PXSectionedObjectReference *navigatedObjectReference;
@property (retain, nonatomic) UIView *placeholderView;
@property (weak, nonatomic) id<PXFeedViewControllerTabBarTransitionDelegate> tabBarTransitionDelegate;
@property (weak, nonatomic) PXFeedGadget *feedGadget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXFeedView *feedView;
@property (readonly, nonatomic) PXFeedConfiguration *configuration;
@property (readonly, nonatomic) NSObject<PXAnonymousScrollView> *ppt_scrollView;
@property (readonly, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;

- (id)hostViewControllerForActionPerformer:(id)a0;
- (id)undoManagerForActionPerformer:(id)a0;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_setNeedsUpdate;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)viewDidLoad;
- (BOOL)actionPerformer:(id)a0 transitionToViewController:(id)a1 transitionType:(long long)a2;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (id)nextExistingParticipantOnRouteToDestination:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithConfiguration:(id)a0;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void).cxx_destruct;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updatePlaceholder;
- (id)_objectReferenceForDestination:(id)a0;
- (void)_checkCanNavigate:(BOOL *)a0 toDestination:(id)a1 iterator:(id)a2;
- (void)_handleCanNavigate:(BOOL)a0 toDestination:(id)a1 objectReference:(id)a2 completionHandler:(id /* block */)a3;
- (void)_handleScrollViewTap:(id)a0;
- (void)_ifDataSourceIsEmptyPopIfSpecAllows;
- (void)_invalidatePlaceholder;
- (id)_targetedPreviewForObjectReference:(id)a0;
- (void)a_customTapToRadar:(id)a0;
- (void)didEndTransition:(id)a0 withEndPoint:(id)a1 finished:(BOOL)a2;
- (BOOL)handlePrimaryActionOnItemAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 inDataSource:(id)a1;
- (BOOL)handleSelectActionOnItemAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 inDataSource:(id)a1;
- (id)itemPlacementControllerForItemReference:(id)a0;
- (void)ppt_transitionToFirstItemWithWillPresentHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)prepareForTransitionToSelectedTabBarItemSegmentWithCompletion:(id /* block */)a0;
- (void)willBeginTransition:(id)a0 withEndPoint:(id)a1 anchorItemReference:(id)a2;

@end
