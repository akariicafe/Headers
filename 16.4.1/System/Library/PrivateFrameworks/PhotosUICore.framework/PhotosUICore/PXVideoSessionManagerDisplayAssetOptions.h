@class NSArray, NSMutableArray, ISWrappedAVAudioSession;

@interface PXVideoSessionManagerDisplayAssetOptions : NSObject

@property (readonly, nonatomic) NSMutableArray *strategiesStore;
@property (nonatomic) BOOL shouldCreateUniqueVideoSession;
@property (readonly, nonatomic) NSArray *strategies;
@property (nonatomic) BOOL shouldStabilizeLivePhotosIfPossible;
@property (nonatomic) BOOL shouldCrossfadeLivePhotosWhenLooping;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } livePhotoLoopTimeRange;
@property (nonatomic) BOOL isAudioAllowed;
@property (retain, nonatomic) ISWrappedAVAudioSession *audioSession;

- (id)init;
- (void).cxx_destruct;
- (void)addContentDeliveryStrategyWithDeliveryQuality:(long long)a0 segmentTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 streamingAllowed:(BOOL)a2;
- (void)addContentDeliveryStrategyWithDeliveryQuality:(long long)a0 segmentTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 streamingAllowed:(BOOL)a2 networkAccessAllowed:(BOOL)a3;

@end
