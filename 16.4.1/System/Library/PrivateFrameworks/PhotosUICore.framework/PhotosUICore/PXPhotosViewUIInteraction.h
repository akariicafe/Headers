@class NSString, PXAssetsDataSourceManager, UITapGestureRecognizer, UIPinchGestureRecognizer, UIViewController, UIContextMenuInteraction, UIScrollView, UILongPressGestureRecognizer, NSUndoManager, UIHoverGestureRecognizer, UIScreenEdgePanGestureRecognizer, PXSwipeSelectionManager, PXPhotosLayout, NSSet, PXOneUpPresentation, PXAssetReference, NSArray, PXPhotosDragController;
@protocol UIViewControllerInteractiveTransitioning, PXPhotosViewUIInteractionDelegate;

@interface PXPhotosViewUIInteraction : PXPhotosViewInteraction <UIGestureRecognizerDelegate, UIContextMenuInteractionDelegate, PXOneUpPresentationDelegate, PXScrollViewControllerObserver, PXAssetCollectionActionPerformerDelegate, PXAssetsDataSourceManagerObserver, PXSwipeSelectionManagerDelegate, PXPhotosDragControllerDelegate>

@property (readonly, weak, nonatomic) PXPhotosLayout *layout;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) UIHoverGestureRecognizer *hoverGesture;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGesture;
@property (readonly, nonatomic) UITapGestureRecognizer *doubleTapGesture;
@property (readonly, nonatomic) UITapGestureRecognizer *pressGesture;
@property (readonly, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGesture;
@property (readonly, nonatomic) UILongPressGestureRecognizer *touchGesture;
@property (readonly, nonatomic) UIScreenEdgePanGestureRecognizer *edgeSwipeGesture;
@property (readonly, nonatomic) PXSwipeSelectionManager *swipeSelectionManager;
@property (readonly, nonatomic) PXPhotosDragController *dragController;
@property (readonly, weak, nonatomic) UIViewController *presentingViewController;
@property (readonly, nonatomic) NSUndoManager *undoManager;
@property (retain, nonatomic) PXAssetsDataSourceManager *navigatedAssetSectionDataSourceManager;
@property (weak, nonatomic) id<PXPhotosViewUIInteractionDelegate> uiInteractionDelegate;
@property (retain, nonatomic) PXOneUpPresentation *oneUpPresentation;
@property (retain, nonatomic) PXAssetReference *navigatedAssetReference;
@property (readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (readonly, nonatomic) id<UIViewControllerInteractiveTransitioning> edgeSwipeDismissalInteraction;
@property (copy, nonatomic) NSSet *hiddenAssetReferences;
@property (readonly, nonatomic) BOOL canToggleSelectMode;
@property (readonly, nonatomic) NSArray *keyCommandsForSelectionExtension;
@property (readonly, nonatomic) id targetForKeyCommands;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContextMenuInteraction:(id)a0;
- (void)_handlePinch:(id)a0;
- (BOOL)oneUpPresentation:(id)a0 allowsPreviewCommitingForContextMenuInteraction:(id)a1;
- (void)_handleTap:(id)a0;
- (id)presentationEnvironmentForActionPerformer:(id)a0;
- (id)oneUpPresentationDataSourceManager:(id)a0;
- (id)hostViewControllerForActionPerformer:(id)a0;
- (void)scrollViewControllerDidScroll:(id)a0;
- (id)undoManagerForActionPerformer:(id)a0;
- (BOOL)_commitPreviewForContextMenuInteraction:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)_setupGestures;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)_handleDoubleTap:(id)a0;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleLongPress:(id)a0;
- (void)performActionWithType:(id)a0;
- (void)toggleSelectMode;
- (long long)oneUpPresentationOrigin:(id)a0;
- (id)dragControllerUndoManager:(id)a0;
- (BOOL)oneUpPresentation:(id)a0 commitPreviewForContextMenuInteraction:(id)a1;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })swipeSelectionManager:(id)a0 itemIndexPathClosestLeadingLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (id)discoverabilityTitleForActionType:(id)a0;
- (BOOL)oneUpPresentation:(id)a0 allowsMultiSelectMenuForInteraction:(id)a1;
- (id)_createContextMenuActionManagerForSelection;
- (id)progressToastViewControllerForActionPerformer:(id)a0;
- (BOOL)_handleHoverWithHitTestResult:(id)a0;
- (void)oneUpPresentation:(id)a0 setHiddenAssetReferences:(id)a1;
- (id)oneUpPresentation:(id)a0 previewForHighlightingSecondaryItemWithIdentifier:(id)a1 configuration:(id)a2;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_indexPathForAssetAtLocation:(struct CGPoint { double x0; double x1; })a0 withPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 forSwipeSelectionManager:(id)a2;
- (void)_tearDownGestures;
- (id)regionOfInterestForAssetReference:(id)a0;
- (void)oneUpPresentation:(id)a0 scrollAssetReferenceToVisible:(id)a1;
- (BOOL)ensureSelectMode;
- (BOOL)_pickNavigatedAssetReference;
- (void)_handlePress:(id)a0;
- (id)oneUpPresentation:(id)a0 secondaryIdentifiersForConfiguration:(id)a1;
- (long long)oneUpPresentationActionContext:(id)a0;
- (void)_handleHoverWithHitTestResults:(id)a0 hoverGesture:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (BOOL)oneUpPresentation:(id)a0 allowsActionsForContextMenuInteraction:(id)a1;
- (id)regionOfInterestForAssetReference:(id)a0 image:(id *)a1;
- (id)dragController:(id)a0 scrollViewForAssetReference:(id)a1;
- (void)_updateContextMenuInteraction;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)swipeSelectionManager:(id)a0 indexPathSetFromIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1 toIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })swipeSelectionManager:(id)a0 itemIndexPathAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)allowsPreviewCommitingForContextMenuInteraction:(id)a0;
- (id)oneUpPresentation:(id)a0 regionOfInterestForAssetReference:(id)a1;
- (id)oneUpPresentationInitialAssetReference:(id)a0;
- (id)oneUpPresentationMatchedQueryStrings:(id)a0;
- (void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)a0;
- (id)_createActionManagerForNavigatedAssetReferenceUsingSectionDataSource:(BOOL)a0;
- (void)swipeSelectionManager:(id)a0 extendSelectionInDirection:(unsigned long long)a1;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (id)dragControllerAssetReferenceForBeginningSession:(id)a0;
- (id)oneUpPresentationAssetUUIDsAllowedToHighlightText:(id)a0;
- (id)_contextMenuInteraction:(id)a0 accessoriesForMenuWithConfiguration:(id)a1;
- (BOOL)oneUpPresentation:(id)a0 canStartPreviewingForContextMenuInteraction:(id)a1;
- (id)dragController:(id)a0 itemProviderForAssetReference:(id)a1;
- (void)dragController:(id)a0 draggedAssetReferencesDidChange:(id)a1;
- (BOOL)dragController:(id)a0 shouldResizeCancelledPreviewForAssetReference:(id)a1;
- (id)oneUpPresentationActionManagerForPreviewing:(id)a0;
- (BOOL)swipeSelectionManagerIsInMultiSelectMode:(id)a0;
- (BOOL)_handleTapWithHitTestResult:(id)a0 keyModifierFlags:(long long)a1;
- (BOOL)oneUpPresentationWantsShowInLibraryButton:(id)a0;
- (BOOL)presentOneUpForAssetReference:(id)a0 configurationHandler:(id /* block */)a1;
- (void)willEndPreviewingForContextMenuInteraction:(id)a0;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (void)dragController:(id)a0 dropTargetAssetReferenceDidChange:(id)a1;
- (id)dragControllerViewControllerForPresentation:(id)a0;
- (void)dragController:(id)a0 isDragSessionActiveDidChange:(BOOL)a1;
- (void)swipeSelectionManagerDidAutoScroll:(id)a0;
- (void)_handleHover:(id)a0;
- (id)oneUpPresentation:(id)a0 currentImageForAssetReference:(id)a1;
- (BOOL)allowsActionsForContextMenuInteraction:(id)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })swipeSelectionManager:(id)a0 itemIndexPathClosestAboveLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)dragController:(id)a0 regionOfInterestForAssetReference:(id)a1 image:(id *)a2;
- (id)oneUpPresentation:(id)a0 styleForContextMenuInteraction:(id)a1 configuration:(id)a2;
- (id)oneUpPresentation:(id)a0 previewForDismissingToSecondaryItemWithIdentifier:(id)a1 configuration:(id)a2;
- (void)scrollViewControllerDidChange;
- (void)_handleTouch:(id)a0;
- (void)oneUpPresentation:(id)a0 willEndPreviewingForContextMenuInteraction:(id)a1 configuration:(id)a2;
- (id)_createSelectionManagerForNavigatedAssetSection;
- (id)oneUpPresentationActionManager:(id)a0;
- (void)viewDidChange;
- (void)ensureSwipeDismissalInteraction;
- (id)dragController:(id)a0 dropTargetAssetReferenceForLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)_targetedPreviewForSecondaryAssetReference:(id)a0;
- (id)oneUpPresentationHelperScrollView:(id)a0;
- (BOOL)dragController:(id)a0 shouldSelectRearrangedAssetReferences:(id)a1;
- (id)regionOfInterestForAssetReference:(id)a0 image:(struct CGImage **)a1 fallbackMediaProvider:(id)a2 shouldSnapshot:(BOOL)a3;
- (id)dragController:(id)a0 draggableAssetReferenceAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (BOOL)canStartContextMenuInteraction:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (id)oneUpPresentationPrivacyController:(id)a0;
- (id)targetedPreviewForAssetReference:(id)a0;
- (void)actionPerformer:(id)a0 didChangeState:(unsigned long long)a1;
- (BOOL)canPerformActionType:(id)a0;
- (id)_createContextMenuActionManagerForNavigatedPreviewAssetReference;
- (double)progressToastPaddingForActionPerformer:(id)a0;
- (id)oneUpPresentation:(id)a0 accessoriesForContextMenuInteraction:(id)a1 configuration:(id)a2;
- (BOOL)swipeSelectionManager:(id)a0 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint { double x0; double x1; })a1;

@end
