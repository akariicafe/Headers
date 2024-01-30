@class PXCuratedLibraryViewModel, PXAssetCollectionReference, PXIndexPathSet;

@interface PXCuratedLibraryAssetCollectionSkimmingModel : NSObject {
    long long _zoomLevel;
    long long _skimmingZoomLevel;
    id _dataSourcePauseToken;
}

@property (readonly, nonatomic) PXAssetCollectionReference *containingAssetCollectionReference;
@property (readonly, nonatomic) BOOL isPlayingSlideshow;
@property (readonly, nonatomic) BOOL isInteractionInProgress;
@property (readonly, nonatomic) BOOL canStartSkimming;
@property (readonly, copy, nonatomic) PXIndexPathSet *indexPathSetForSkimming;
@property (readonly, nonatomic) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } initialIndexPath;
@property (nonatomic) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } skimmedIndexPath;
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel;

- (id)initWithViewModel:(id)a0;
- (void)_prepareIndexesForAssetCollectionReference:(id)a0 willStartSkimming:(BOOL)a1 willStartSlideshow:(BOOL)a2;
- (void)prepareForShowingHintsForAssetCollectionReference:(id)a0;
- (void)persistSkimmingState;
- (void)transitionToSkimming;
- (void).cxx_destruct;
- (void)prepareForSlideshowForAssetCollectionReference:(id)a0;
- (id)validatedAssetCollectionReference:(id)a0;
- (void)tearDownAfterSkimmingShowHints:(BOOL)a0 persistState:(BOOL)a1;
- (void)_updateViewModel;
- (void)transitionToSlideshow;
- (void)prepareForSkimmingInAssetCollectionReference:(id)a0;

@end
