@class AVAssetTrack, AVAsset, NSArray;

@interface CNAssetInfo : NSObject

@property (retain) AVAssetTrack *cinematicVideoTrack;
@property (retain) AVAssetTrack *cinematicDisparityTrack;
@property (retain) AVAssetTrack *cinematicMetadataTrack;
@property (readonly) AVAsset *asset;
@property (readonly) NSArray *allCinematicTracks;
@property (readonly) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly) struct CGSize { double x0; double x1; } naturalSize;
@property (readonly) struct CGSize { double x0; double x1; } preferredSize;
@property (readonly) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } preferredTransform;

+ (void)checkIfCinematic:(id)a0 completionHandler:(id /* block */)a1;
+ (void)loadFromAsset:(id)a0 completionHandler:(id /* block */)a1;
+ (void)loadFromCinematicVideoTrack:(id)a0 completionHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)sampleDataTrackIDs;
- (id)_initWithVideoTrack:(id)a0 disparityTrack:(id)a1 metadataTrack:(id)a2;
- (id)frameTimingTrack;
- (id)videoCompositionTrackIDs;
- (id)videoCompositionTracks;

@end
