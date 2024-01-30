@interface BWSceneStabilityMonitor : NSObject {
    struct { int *refRows; int *refCols; float qualityX; float qualityY; BOOL sceneStable; } _aeMatrixStorage;
    struct { float offsetX; float offsetY; float qualityX; float qualityY; int height; int width; int *refRowSum; int *refColSum; BOOL sceneStable; struct { long long value; int timescale; unsigned int flags; long long epoch; } lastPTS; } _pixelSumStorage;
    int _lastAFStatus;
}

@property (readonly, nonatomic, getter=isStable) BOOL stable;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stableStartTime;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } unstableStartTime;
@property (readonly, nonatomic, getter=isAFCompleted) BOOL afCompleted;
@property (readonly, nonatomic) BOOL processedSceneMotion;
@property (readonly, nonatomic) float sceneMotionOffsetX;
@property (readonly, nonatomic) float sceneMotionOffsetY;

+ (void)initialize;

- (id)init;
- (void)reset;
- (void)dealloc;
- (void)_resetAEMatrixStorage;
- (void)calculateStabilityWithPixelBuffer:(struct __CVBuffer { } *)a0 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 metadataDictionary:(id)a2 forceSceneMotion:(BOOL)a3;
- (BOOL)_calculateStabilityWithAEMatrixFromMetadata:(id)a0;
- (BOOL)_calculateStabilityWithSceneMotionForPixelBuffer:(struct __CVBuffer { } *)a0 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)_updateAFStatusFromMetadata:(id)a0;
- (void)_resetPixelSumStorage;

@end
