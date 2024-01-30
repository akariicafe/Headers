@class NSMutableDictionary;
@protocol PXDisplayAssetFetchResult, PXStoryDisplayAssetResource, PXStoryColorResource, PXStoryDisplayAssetCroppingContext, PXStoryMovieHighlightsCollection, PXStorySaliencyDataSource, PXAudioAssetFetchResult, PXDisplayAssetCollection, PXStoryChapterCollection, PXDisplayAsset;

@interface PXStoryResourcesDataSource : NSObject {
    long long _initialDisplayAssetIndex;
    struct _NSRange { unsigned long long location; unsigned long long length; } _chapterTitleTextResourceIndexes;
    struct _NSRange { unsigned long long location; unsigned long long length; } _chapterSubtitleTextResourceIndexes;
    NSMutableDictionary *_cachedTextResources;
}

@property (readonly, nonatomic) id<PXDisplayAsset> keyAsset;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> displayAssets;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> availableDisplayAssets;
@property (readonly, nonatomic) id<PXStoryMovieHighlightsCollection> movieHighlights;
@property (readonly, nonatomic) id<PXStorySaliencyDataSource> detailedSaliency;
@property (readonly, nonatomic) id<PXStoryChapterCollection> chapterCollection;
@property (readonly, nonatomic) id<PXAudioAssetFetchResult> audioAssets;
@property (readonly, nonatomic) id<PXStoryColorResource> backgroundColorResource;
@property (readonly, nonatomic) long long initialTitleTextResourceIndex;
@property (readonly, nonatomic) long long initialSubtitleTextResourceIndex;
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

- (id)init;
- (void).cxx_destruct;
- (id)_createTextResourceAtIndex:(long long)a0;
- (id)colorResourceAtIndex:(long long)a0;
- (id)displayAssetResourceAtIndex:(long long)a0;
- (void)enumerateTitleTextResourcesForDisplayAssetResourceAtIndex:(long long)a0 usingBlock:(id /* block */)a1;
- (id)frameFillingEffectResourceAtIndex:(long long)a0;
- (BOOL)hasSameResourcesOfKind:(long long)a0 as:(id)a1;
- (long long)indexForDisplayAssetReference:(id)a0;
- (id)initWithKeyAsset:(id)a0 displayAssets:(id)a1 availableDisplayAssets:(id)a2 movieHighlights:(id)a3 detailedSaliency:(id)a4 chapterCollection:(id)a5 audioAssets:(id)a6 assetCollection:(id)a7 overallDurationInfo:(struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x1; })a8 configuration:(id)a9;
- (id)movieHighlightsForDisplayAssetAtIndex:(long long)a0;
- (long long)numberOfResourcesWithKind:(long long)a0;
- (id)resourceWithKind:(long long)a0 atIndex:(long long)a1;
- (id)songResourceAtIndex:(long long)a0;
- (id)textResourceAtIndex:(long long)a0;

@end
