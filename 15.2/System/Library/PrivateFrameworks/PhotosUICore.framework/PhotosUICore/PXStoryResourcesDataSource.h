@protocol PXDisplayAssetFetchResult, PXDisplayAssetCollection, PXStoryColorResource, PXStoryDisplayAssetCroppingContext, PXStoryMovieHighlightsCollection, PXAudioAssetFetchResult, PXStoryTextResource, PXStoryDisplayAssetResource, PXDisplayAsset;

@interface PXStoryResourcesDataSource : NSObject

@property (readonly, nonatomic) id<PXDisplayAsset> keyAsset;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> displayAssets;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> availableDisplayAssets;
@property (readonly, nonatomic) id<PXStoryMovieHighlightsCollection> movieHighlights;
@property (readonly, nonatomic) id<PXAudioAssetFetchResult> audioAssets;
@property (readonly, nonatomic) id<PXStoryTextResource> titleResource;
@property (readonly, nonatomic) id<PXStoryTextResource> subtitleResource;
@property (readonly, nonatomic) id<PXStoryColorResource> backgroundColorResource;
@property (readonly, nonatomic) id<PXStoryDisplayAssetResource> keyAssetResource;
@property (readonly, nonatomic) long long numberOfTextResources;
@property (readonly, nonatomic) long long numberOfDisplayAssetResources;
@property (readonly, nonatomic) long long numberOfSongResources;
@property (readonly, nonatomic) long long numberOfColorResources;
@property (readonly, nonatomic) long long numberOfFrameFillingEffectResources;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (readonly, nonatomic) struct { long long kind; struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } preferredDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumDuration; } specificDurationInfo; } overallDurationInfo;
@property (readonly, nonatomic) id<PXStoryDisplayAssetCroppingContext> croppingContext;
@property (readonly, nonatomic) long long identifier;

- (void).cxx_destruct;
- (id)init;
- (id)initWithKeyAsset:(id)a0 displayAssets:(id)a1 availableDisplayAssets:(id)a2 movieHighlights:(id)a3 audioAssets:(id)a4 assetCollection:(id)a5 overallDurationInfo:(struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x1; })a6 configuration:(id)a7;
- (id)textResourceAtIndex:(long long)a0;
- (id)displayAssetResourceAtIndex:(long long)a0;
- (long long)indexForDisplayAssetReference:(id)a0;
- (id)movieHighlightsForDisplayAssetAtIndex:(long long)a0;
- (id)songResourceAtIndex:(long long)a0;
- (id)colorResourceAtIndex:(long long)a0;
- (id)frameFillingEffectResourceAtIndex:(long long)a0;
- (long long)numberOfResourcesWithKind:(long long)a0;
- (id)resourceWithKind:(long long)a0 atIndex:(long long)a1;
- (BOOL)hasSameResourcesOfKind:(long long)a0 as:(id)a1;

@end
