@class PXCuratedLibraryLayout, PXCuratedLibraryFooterController, PXCuratedLibraryViewModel, PXCuratedLibraryAssetsDataSourceManager, PXAssetsDataSourceCountsController, PXExtendedTraitCollection, PXSectionedObjectReference, NSString, PXZoomablePhotosInteraction, PXUIMediaProvider, PXCuratedLibraryVideoPlaybackController, PHPhotoLibrary, PXGView, PXAssetReference, PXSharedLibraryStatusProvider;
@protocol PXCuratedLibraryEventTracker, PXGAXResponder;

@interface PXCuratedLibraryViewProvider : NSObject <PXGViewDiagnosticsSource, PXZoomablePhotosInteractionDelegate, PXChangeObserver, PXGAXResponder> {
    PXSharedLibraryStatusProvider *_sharedLibraryStatusProvider;
}

@property (readonly, nonatomic) PXZoomablePhotosInteraction *zoomablePhotosInteraction;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (readonly, nonatomic) PXGView *gridView;
@property (readonly, nonatomic) PXCuratedLibraryLayout *layout;
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel;
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider;
@property (readonly, nonatomic) PXCuratedLibraryAssetsDataSourceManager *assetsDataSourceManager;
@property (readonly, nonatomic) PXCuratedLibraryVideoPlaybackController *videoPlaybackController;
@property (readonly, nonatomic) PXAssetsDataSourceCountsController *itemCountsController;
@property (readonly, nonatomic) PXCuratedLibraryFooterController *footerController;
@property (readonly, nonatomic) id<PXCuratedLibraryEventTracker> eventTracker;
@property (readonly, nonatomic) PXAssetReference *preferredAnchorAssetReference;
@property (readonly, nonatomic) PXSectionedObjectReference *preferredObjectReferenceToScrollToWhenRestoringState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXGAXResponder> axNextResponder;

- (void)axGroup:(id)a0 didChange:(unsigned long long)a1 userInfo:(id)a2;
- (id)axContainingScrollViewForAXGroup:(id)a0;
- (void)extendSelectionInDirection:(unsigned long long)a0;
- (void)prepareForNavigationToObjectReference:(id)a0;
- (void)_handleChangeToModifySelectionWithUserInfo:(id)a0;
- (struct CGPoint { double x0; double x1; })pointForPointReference:(id)a0 inCoordinateSpace:(id)a1;
- (void)performActionWithType:(id)a0;
- (void)toggleSelectMode;
- (id)discoverabilityTitleForActionType:(id)a0;
- (long long)selectionBasisForSelectionManager:(id)a0;
- (void)moveSelectionInDirection:(unsigned long long)a0;
- (BOOL)canSelectObjectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 inDataSource:(id)a1;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })selectionManager:(id)a0 indexPathClosestToIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1 inDirection:(unsigned long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })anchorPaddingForCurrentZoomLevel;
- (id)selectionContainerWithUndoManager:(id)a0;
- (id)selectionManager:(id)a0 indexPathsBetweenIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1 andIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2 inDirection:(unsigned long long)a3;
- (BOOL)axGroup:(id)a0 didRequestToPerformAction:(long long)a1 userInfo:(id)a2;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_indexPathClosestToIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 fromDataSource:(id)a1 inDirection:(unsigned long long)a2;
- (void)zoomablePhotosInteractionWillBegin:(id)a0;
- (id)indexPathsForItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;
- (BOOL)ensureSelectMode;
- (id)pointReferenceAtPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (id)additionalRectDiagnosticsProvidersForView:(id)a0;
- (void)scrollLibraryViewToAssetReference:(id)a0 scrollPosition:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)zoomOutAllPhotos;
- (id)_itemsGeometryForDataSource:(id)a0;
- (long long)_layoutVariantToUse:(BOOL)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })selectableIndexPathClosestToIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 fromDataSource:(id)a1 inDirection:(unsigned long long)a2;
- (void)zoomInAllPhotos;
- (id)indexPathsFromIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 toIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1 inDataSource:(id)a2;
- (id)zoomablePhotosInteraction:(id)a0 assetReferenceAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)init;
- (id)hitTestResultControlsForCurrentZoomLevel;
- (void)_logLibraryCountsIfNecessary;
- (void)scrollLibraryViewToObjectReference:(id)a0 scrollPosition:(unsigned long long)a1 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 completionHandler:(id /* block */)a3;
- (BOOL)zoomablePhotosInteractionShouldBegin:(id)a0;
- (id)initWithPhotoLibrary:(id)a0 extendedTraitCollection:(id)a1;
- (void).cxx_destruct;

@end
