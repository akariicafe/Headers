@class PXPhotosDetailsContext, PXGestureProvider, UIContextMenuInteraction, PXAssetsDataSourceManager, NSString, PXUIMediaProvider, UITargetedPreview, PXAssetReference, UIViewController, PXAssetActionManager, NSMapTable, UIScrollView;
@protocol PXOneUpPresentationDelegate, PXAssetImportStatusManager, PXOneUpPresentationImplementationDelegate;

@interface PXOneUpPresentation : NSObject <UIContextMenuInteractionDelegate> {
    struct { BOOL respondsToPhotosDetailsContext; BOOL respondsToInitialAssetReference; BOOL respondsToCanStartPreviewingForContextMenuInteraction; BOOL respondsToAllowsActionsForContextMenuInteraction; BOOL respondsToAllowsPreviewCommitingForContextMenuInteraction; BOOL respondsToCommitPreviewForContextMenuInteraction; BOOL respondsToWillStartPreviewingForContextMenuInteraction; BOOL respondsToDidEndPreviewingForContextMenuInteraction; BOOL respondsToCurrentImageForAssetReference; BOOL respondsToRegionOfInterestForAssetReference; BOOL respondsToScrollAssetReferenceToVisible; BOOL respondsToSetHiddenAssetReferences; BOOL respondsToShouldAutoPlay; BOOL respondsToPreventShowInAllPhotos; BOOL respondsToActionManager; BOOL respondsToActionManagerForPreviewing; BOOL respondsToActionContext; BOOL respondsToGestureProvider; BOOL respondsToImportStatusManager; BOOL respondsToOrigin; BOOL respondsToScrollView; } _delegateFlags;
    struct { BOOL respondsToPresentingViewControllerViewWillAppear; BOOL respondsToPresentingViewControllerViewDidAppear; BOOL respondsToPresentingViewControllerViewWillDisappear; BOOL respondsToPresentingViewControllerViewDidDisappear; BOOL respondsToCanStart; BOOL respondsToCanStop; BOOL respondsToInvalidatePresentingGeometry; BOOL respondsToHandlePresentingPinchGestureRecognizer; } _implementationDelegateFlags;
}

@property (retain, nonatomic) UIViewController *currentPreviewViewController;
@property (retain, nonatomic) UITargetedPreview *interactionTargetedPreview;
@property (retain, nonatomic) NSMapTable *contextMenuStateByConfiguration;
@property (weak, nonatomic, setter=_setImplementationDelegate:) id<PXOneUpPresentationImplementationDelegate> _implementationDelegate;
@property (readonly, weak, nonatomic) UIViewController *presentingViewController;
@property (readonly, nonatomic) long long origin;
@property (weak, nonatomic) UIViewController *originalPresentingViewController;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (weak, nonatomic) id<PXOneUpPresentationImplementationDelegate> implementationDelegate;
@property (readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider;
@property (readonly, nonatomic) PXGestureProvider *gestureProvider;
@property (readonly, nonatomic) PXPhotosDetailsContext *photosDetailsContext;
@property (readonly, nonatomic) PXAssetReference *initialAssetReference;
@property (readonly, nonatomic) PXAssetActionManager *actionManager;
@property (readonly, nonatomic) PXAssetActionManager *actionManagerForPreviewing;
@property (readonly, nonatomic) long long actionContext;
@property (readonly, nonatomic) id<PXAssetImportStatusManager> importStatusManager;
@property (readonly, nonatomic) BOOL shouldAutoPlay;
@property (readonly, nonatomic) BOOL preventShowInAllPhotosAction;
@property (readonly, nonatomic) BOOL wantsShowInLibraryButton;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<PXOneUpPresentationDelegate> delegate;
@property (readonly, nonatomic) BOOL canStart;
@property (readonly, nonatomic) BOOL canStop;
@property (readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (readonly, nonatomic) BOOL isContextMenuInteractionActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commitPreviewViewController:(id)a0;
- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)handlePresentingPinchGestureRecognizer:(id)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateImplementationDelegate;
- (id)initWithPresentingViewController:(id)a0;
- (void)setHiddenAssetReferences:(id)a0;
- (void)scrollAssetReferenceToVisible:(id)a0;
- (id)currentImageForAssetReference:(id)a0;
- (void)presentingViewControllerViewDidDisappear:(BOOL)a0;
- (void)presentingViewControllerViewWillDisappear:(BOOL)a0;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)presentingViewControllerViewWillAppear:(BOOL)a0;
- (void)didDismissPreviewViewController:(id)a0 committing:(BOOL)a1;
- (id)previewViewControllerAllowingActions:(BOOL)a0;
- (void)stopAnimated:(BOOL)a0;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)invalidatePresentingGeometry;
- (id)regionOfInterestForAssetReference:(id)a0;
- (void)waitUntilPresentationCanStartWithCompletionHandler:(id /* block */)a0;
- (void)presentingViewControllerViewDidAppear:(BOOL)a0;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (BOOL)startAnimated:(BOOL)a0 interactiveMode:(long long)a1;

@end
