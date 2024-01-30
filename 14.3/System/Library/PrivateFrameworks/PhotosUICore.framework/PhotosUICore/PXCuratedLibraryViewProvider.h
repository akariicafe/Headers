@class PXCuratedLibraryLayout, PXCuratedLibraryFooterController, PXCuratedLibraryViewModel, PXCuratedLibraryAssetsDataSourceManager, PXAssetsDataSourceCountsController, PXExtendedTraitCollection, PXSectionedObjectReference, NSString, PXZoomablePhotosInteraction, PXUIMediaProvider, PXCuratedLibraryVideoPlaybackController, PHPhotoLibrary, PXGView, PXAssetReference;
@protocol PXCuratedLibraryEventTracker, PXGAXResponder;

@interface PXCuratedLibraryViewProvider : NSObject <PXGViewDiagnosticsSource, PXZoomablePhotosInteractionDelegate, PXChangeObserver, PXGAXResponder>

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

- (BOOL)axGroup:(id)a0 didRequestToPerformAction:(long long)a1 userInfo:(id)a2;
- (void)prepareForNavigationToObjectReference:(id)a0;
- (void)selectionManager:(id)a0 revealObjectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a1;
- (id)indexPathsFromIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0 toIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a1 inDataSource:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id)axContainingViewForAXGroup:(id)a0;
- (id)initWithPhotoLibrary:(id)a0 extendedTraitCollection:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (BOOL)canSelectObjectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0 inDataSource:(id)a1;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })_indexPathClosestToIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0 fromDataSource:(id)a1 inDirection:(unsigned long long)a2;
- (id)indexPathsForItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })anchorPaddingForCurrentZoomLevel;
- (void)axGroup:(id)a0 didChange:(unsigned long long)a1 userInfo:(id)a2;
- (void)scrollLibraryViewToAssetReference:(id)a0 scrollPosition:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })selectableIndexPathClosestToIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0 fromDataSource:(id)a1 inDirection:(unsigned long long)a2;
- (id)selectionManager:(id)a0 indexPathsBetweenIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a1 andIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a2 inDirection:(unsigned long long)a3;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })selectionManager:(id)a0 indexPathClosestToIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a1 inDirection:(unsigned long long)a2;
- (id)_itemsGeometryForDataSource:(id)a0;
- (BOOL)zoomablePhotosInteractionShouldBegin:(id)a0;
- (id)additionalRectDiagnosticsProvidersForView:(id)a0;
- (void)scrollLibraryViewToObjectReference:(id)a0 scrollPosition:(unsigned long long)a1 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 completionHandler:(id /* block */)a3;
- (void)_logLibraryCountsIfNecessary;
- (void)_handleChangeToModifySelectionWithUserInfo:(id)a0;
- (long long)selectionBasisForSelectionManager:(id)a0;
- (id)zoomablePhotosInteraction:(id)a0 assetReferenceAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)hitTestResultControlsForCurrentZoomLevel;
- (void)zoomablePhotosInteractionWillBegin:(id)a0;

@end
