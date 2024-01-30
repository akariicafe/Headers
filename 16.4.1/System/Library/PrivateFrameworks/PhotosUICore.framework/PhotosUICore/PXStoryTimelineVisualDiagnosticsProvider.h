@class PXStoryModel, PXStoryConfiguration, PXStoryVisualDiagnosticsProviderHelper, PXStoryResourcesDataSource, PXStoryAutoEditMomentsProvider;
@protocol PXStoryTimeline;

@interface PXStoryTimelineVisualDiagnosticsProvider : NSObject <PXVisualDiagnosticsProvider>

@property (readonly, nonatomic) PXStoryVisualDiagnosticsProviderHelper *helper;
@property (readonly, nonatomic) PXStoryModel *model;
@property (readonly, nonatomic) id<PXStoryTimeline> timeline;
@property (readonly, nonatomic) PXStoryAutoEditMomentsProvider *momentsProvider;
@property (readonly, nonatomic) PXStoryResourcesDataSource *resourcesDataSource;
@property (readonly, nonatomic) PXStoryConfiguration *configuration;
@property (readonly, nonatomic) double screenScale;

- (id)init;
- (void).cxx_destruct;
- (void)_addAssetsDetailsTable:(id)a0;
- (void)_addCinematicDiagnostics:(id)a0;
- (void)_addCoverPage:(id)a0;
- (void)_addCropDiagnostics:(id)a0;
- (void)_addDetailedSaliencyDiagnostics:(id)a0;
- (void)_addMiscellaneousDiagnostics:(id)a0;
- (void)_addSegmentDiagnostics:(id)a0;
- (void)_addSegmentsAutoEditDebugInfoTables:(id)a0 debugInfoKeys:(id)a1;
- (void)_addSegmentsDetailsTable:(id)a0;
- (unsigned long long)_approxLinesInString:(id)a0 lineLength:(unsigned long long)a1;
- (id)_autoEditDebugInfoBySegmentInTimeline:(id)a0;
- (id)_descriptionForDurationInfo:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; })a0;
- (id)_descriptionForFaces:(id)a0 context:(id)a1;
- (id)_descriptionForMovementType:(long long)a0;
- (id)_displayStringForPrivateString:(id)a0 context:(id)a1;
- (void)_drawAsset:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(id)a2;
- (void)_drawSegmentAtIndex:(long long)a0 timeline:(id)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 options:(unsigned long long)a3 context:(id)a4;
- (void)_drawVerticalInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundColor:(id)a1 context:(id)a2 configuration:(id /* block */)a3;
- (id)_moduleDescriptionsBySegmentInTimeline:(id)a0;
- (id)_moduleStartSegmentIndexesInTimeline:(id)a0;
- (id)_momentEndSegmentIndexesInTimeline:(id)a0;
- (id)_movementDescriptionForSegmentAtIndex:(long long)a0 inTimeline:(id)a1;
- (id)_segmentIndexesWithInvalidOrderOutTransitionInTimeline:(id)a0;
- (id)_tvPreviewRankByAssetUUIDForMemory:(id)a0;
- (void)addVisualDiagnosticsToContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithModel:(id)a0 screenScale:(double)a1;

@end
