@class PFVideoAdjustments, AVAsset, AVAudioMix, PFSlowMotionTimeRangeMapper, AVVideoComposition;

@interface PFVideoAVObjectBuilder : NSObject

@property (readonly, nonatomic) PFSlowMotionTimeRangeMapper *_timeRangeMapperForPlayback;
@property (readonly, nonatomic) PFSlowMotionTimeRangeMapper *_timeRangeMapperForExport;
@property (readonly, nonatomic) AVAsset *_finalAsset;
@property (readonly, nonatomic) AVAudioMix *_finalAudioMix;
@property (readonly, nonatomic) AVVideoComposition *_finalVideoComposition;
@property (readonly, nonatomic) AVAsset *videoAsset;
@property (readonly, nonatomic) PFVideoAdjustments *videoAdjustments;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;

- (id)description;
- (void).cxx_destruct;
- (void)requestPlayerItemWithResultHandler:(id /* block */)a0;
- (id)initWithVideoAsset:(id)a0 videoAdjustments:(id)a1;
- (void)requestExportSessionWithExportPreset:(id)a0 resultHandler:(id /* block */)a1;
- (void)requestAVAssetWithResultHandler:(id /* block */)a0;
- (void)requestAsynchronousPlayerItemWithResultHandler:(id /* block */)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })convertToScaledTimeFromOriginalTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forExport:(BOOL)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })convertToOriginalTimeFromScaledTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forExport:(BOOL)a1;
- (id)initWithAsset:(id)a0 audioMix:(id)a1 videoComposition:(id)a2;
- (void)requestAsynchronousExportSessionWithExportPreset:(id)a0 resultHandler:(id /* block */)a1;
- (void)requestAsynchronousAVAssetWithResultHandler:(id /* block */)a0;
- (void)requestAVAssetForExport:(BOOL)a0 withResultHandler:(id /* block */)a1;
- (void)_synchronouslyLoadSlowMotionPropertiesFromAsset:(id)a0;
- (id)_trimAssetIfNecessary:(id)a0 error:(id *)a1;
- (id)_getOrCreateTimeRangeMapperForExport:(BOOL)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })slowMotionRampInRangeForExport:(BOOL)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })slowMotionRampOutRangeForExport:(BOOL)a0;

@end
