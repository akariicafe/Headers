@class NSDictionary, PXStoryStyleConfigurationList;
@protocol PXDisplayAsset, PXStorySongResource, PXDisplayAssetCollection, PXStoryMovieHighlightsCollection, PFStoryRecipe, PXDisplayAssetFetchResult;

@interface PXStoryRecipe : NSObject

@property (readonly, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (readonly, nonatomic) id<PXDisplayAsset> keyAsset;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> curatedAssets;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> allAssets;
@property (readonly, nonatomic) id<PXStoryMovieHighlightsCollection> movieHighlights;
@property (readonly, nonatomic) struct { long long kind; struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } preferredDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumDuration; } specificDurationInfo; } overallDurationInfo;
@property (readonly, nonatomic) PXStoryStyleConfigurationList *styleConfigurationList;
@property (readonly, nonatomic) id<PFStoryRecipe> sourcePersistableRecipe;
@property (readonly, nonatomic) id<PXStorySongResource> initialSongResource;
@property (readonly, nonatomic) NSDictionary *autoEditDecisionListsBySong;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAssetCollection:(id)a0 keyAsset:(id)a1 curatedAssets:(id)a2 allAssets:(id)a3 movieHighlights:(id)a4 overallDurationInfo:(struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x1; })a5 styleConfigurationList:(id)a6 sourcePersistableRecipe:(id)a7 initialSongResource:(id)a8 autoEditDecisionListsBySong:(id)a9;

@end
