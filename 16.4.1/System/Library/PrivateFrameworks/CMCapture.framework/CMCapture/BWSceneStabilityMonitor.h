@interface BWSceneStabilityMonitor : NSObject {
    struct { int *refRows; int *refCols; float qualityX; float qualityY; BOOL sceneStable; float stabilityMetric; } _aeMatrixStorage;
    struct { float offsetX; float offsetY; float qualityX; float qualityY; int height; int width; int *refRowSum; int *refColSum; BOOL sceneStable; float stabilityMetric; struct { long long value; int timescale; unsigned int flags; long long epoch; } lastPTS; } _pixelSumStorage;
    int _lastAFStatus;
}

@property (readonly, nonatomic, getter=isStable) BOOL stable;
@property (readonly, nonatomic) float stabilityMetric;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stableStartTime;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } unstableStartTime;
@property (readonly, nonatomic, getter=isAFCompleted) BOOL afCompleted;
@property (readonly, nonatomic) BOOL processedSceneMotion;
@property (readonly, nonatomic) float sceneMotionOffsetX;
@property (readonly, nonatomic) float sceneMotionOffsetY;

+ (void)initialize;

- (void)calculateStabilityWithPixelBuffer:(struct __CVBuffer { } *)a0 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 metadataDictionary:(id)a2 forceSceneMotion:(BOOL)a3;
- (void)dealloc;
- (id)init;
- (void)reset;

@end
