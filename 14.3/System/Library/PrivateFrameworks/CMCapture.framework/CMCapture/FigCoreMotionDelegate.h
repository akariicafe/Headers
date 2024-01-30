@class CMMotionManager;

@interface FigCoreMotionDelegate : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } ringMutex;
    CMMotionManager *motionManager;
    BOOL manageFusedMotion;
    BOOL manageAccel;
    BOOL manageGravity;
    int accelRingIndex;
    float accelRingX[256];
    float accelRingY[256];
    float accelRingZ[256];
    double accelRingTime[256];
    int fusedRingIndex;
    double fusedRingTime[256];
    BOOL fusedRingDoingBiasEstimation[256];
    struct { float x; float y; float z; } fusedRingAccel[256];
    struct { double w; double x; double y; double z; } fusedRingQuaternion[256];
    struct { float x; float y; float z; } fusedRingPosition[256];
    struct OpaqueFigSemaphore { } *dataSemaphore;
    double latestMotionDataTime;
    double latestGravityDataTime;
    BOOL copyingAllData;
    double dLatestFusedMotionCopied;
    double dLatestTimestamp;
    double dGyroUpdateInterval;
    double timestampLatency;
    double dStartOfLogging;
    BOOL gettingAttitudeChange;
    struct { double w; double x; double y; double z; } previousQuaternion;
    struct { double w; double x; double y; double z; } currentQuaternion;
    BOOL computingPosition;
    struct { double timestamp; float x; float y; float z; } position;
    struct { double timestamp; float x; float y; float z; } velocity;
}

- (void)updateGyroInterval:(float)a0;
- (int)getLatestMotionDataTime:(double *)a0;
- (void)getCurrentDeltaAttitudeRoll:(double *)a0 pitch:(double *)a1 yaw:(double *)a2;
- (id)init;
- (void)getCurrentQuaternion:(struct { double x0; double x1; double x2; double x3; } *)a0;
- (void)dealloc;
- (int)getFusedVectorX:(float *)a0 y:(float *)a1 z:(float *)a2 forTimeStamp:(double)a3;
- (int)getGravityX:(float *)a0 y:(float *)a1 z:(float *)a2 forTimeStamp:(double)a3;
- (void)getCurrentDeltaQuaternion:(struct { double x0; double x1; double x2; double x3; } *)a0;
- (id)copyNewFusedMotionData;
- (BOOL)isCopyingAllData;
- (void)getPositionX:(float *)a0 y:(float *)a1 z:(float *)a2 forTimeStamp:(double)a3;
- (id)copyFusedMotionData:(double)a0 endTime:(double)a1 timeoutValue:(double)a2 errOut:(int *)a3;
- (void)didUpdatePositionWithAcceleration:(struct { float x0; float x1; float x2; } *)a0 forTimeStamp:(double)a1;
- (BOOL)managingGravity;
- (void)updateDeviceCallback:(BOOL)a0 fusedMotionUpdateInterval:(float)a1;
- (BOOL)managingFusedMotion;
- (void)getCurrentAttitudeRoll:(double *)a0 pitch:(double *)a1 yaw:(double *)a2;
- (int)updateCurrentQuaternionForTimeStamp:(double)a0;
- (id)initWithAccelerometer:(BOOL)a0 gravityZ:(BOOL)a1 fusedMotion:(BOOL)a2 accelUpdateInterval:(float)a3 fusedMotionUpdateInterval:(float)a4 motionCallbackThreadPriority:(id)a5;
- (int)updateCurrentQuaternionForTimeStamps:(double)a0 withEnd:(double)a1;
- (void)didUpdateVelocityWithAcceleration:(struct { float x0; float x1; float x2; } *)a0 forTimeStamp:(double)a1;
- (int)getVectorX:(float *)a0 y:(float *)a1 z:(float *)a2 forTimeStamp:(double)a3;
- (void)didUpdateFusedMotionWithDeviceMotion:(struct { struct { double x0; double x1; double x2; double x3; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct { float x0; float x1; float x2; } x3; int x4; BOOL x5; BOOL x6; BOOL x7; float x8; int x9; })a0 time:(double)a1 ifsync:(BOOL)a2;
- (BOOL)managingAccel;
- (void)didUpdatePositionWithTimeStamp:(double)a0;
- (id)copyAllFusedMotionData;
- (void)didUpdateGravity:(struct { float x0; float x1; float x2; })a0 time:(double)a1;
- (void)didUpdateAcceleration:(struct { float x0; float x1; float x2; })a0 time:(double)a1;

@end
