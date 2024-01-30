@class NSDictionary, PXStoryStyleConfigurationList;
@protocol PXDisplayAssetFetchResult, PXStoryMovieHighlightsCollection, PXStorySaliencyDataSource, PFStoryRecipe, PXStorySongResource, PXDisplayAssetCollection, PXStoryChapterCollection, PXDisplayAsset;

@interface PXStoryRecipe : NSObject <PXTapToRadarDiagnosticProvider>

@property (readonly, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (readonly, nonatomic) id<PXDisplayAsset> keyAsset;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> curatedAssets;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> untruncatedCuratedAssets;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> allAssets;
@property (readonly, nonatomic) id<PXStoryMovieHighlightsCollection> movieHighlights;
@property (readonly, nonatomic) id<PXStorySaliencyDataSource> detailedSaliency;
@property (readonly, nonatomic) id<PXStoryChapterCollection> chapterCollection;
@property (readonly, nonatomic) struct { long long kind; struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } preferredDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumDuration; } specificDurationInfo; } overallDurationInfo;
@property (readonly, nonatomic) PXStoryStyleConfigurationList *styleConfigurationList;
@property (readonly, nonatomic) id<PFStoryRecipe> sourcePersistableRecipe;
@property (readonly, nonatomic) id<PXStorySongResource> initialSongResource;
@property (readonly, nonatomic) NSDictionary *autoEditDecisionListsBySong;

- (id)init;
- (void).cxx_destruct;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (id)initWithAssetCollection:(id)a0 keyAsset:(id)a1 curatedAssets:(id)a2 untruncatedCuratedAssets:(id)a3 allAssets:(id)a4 movieHighlights:(id)a5 detailedSaliency:(id)a6 chapterCollection:(id)a7 overallDurationInfo:(struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x1; })a8 styleConfigurationList:(id)a9 sourcePersistableRecipe:(id)a10 initialSongResource:(id)a11 autoEditDecisionListsBySong:(id)a12;

@end
