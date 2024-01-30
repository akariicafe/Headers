@class FigCaptureAPSSphereInteractionCalibrationContext, FigCaptureAutoFocusCalibrationContext, FigCaptureSphereCalibrationContext, FigCaptureSphereEndStopCalibrationContext, FigCaptureAutoFocusPositionSensorCalibrationContext, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface FigCaptureCalibrationMonitor : NSObject {
    NSMutableArray *_streamCalibrationInformation;
    NSObject<OS_dispatch_queue> *_calibrationRunQueue;
    struct OpaqueFigSimpleMutex { } *_calibrationPipelineMutex;
    BOOL _calibrationShouldAbort;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _calibrationLock;
    struct { double x; double y; double z; } _coreMotionMagneticField;
    double _coreMotionMagneticFieldMagnitude;
    int _magneticFieldAttempt;
    int _magneticFieldAccuracyAttemptCount;
    struct { int attemptCount; double threshold; } _magneticFieldMagnitudeTiers[1];
    FigCaptureAutoFocusPositionSensorCalibrationContext *_autoFocusPositionSensorCalibrationContext;
    FigCaptureAutoFocusCalibrationContext *_autoFocusCalibrationContext;
    FigCaptureAPSSphereInteractionCalibrationContext *_apsSphereInteractionCalibrationContext;
    FigCaptureSphereCalibrationContext *_sphereCalibrationContext;
    FigCaptureSphereEndStopCalibrationContext *_sphereEndStopCalibrationContext;
}

+ (id)sharedInstance;
+ (void)initialize;
+ (void)initializeSharedInstance;

- (id)init;
- (void)_setupDuetTriggersAndScheduling;
- (void)_setupCalibrationForContext:(id)a0;
- (void)_attemptToRunCalibrationForCalibrationContext:(id)a0 deviceType:(int)a1 devicePosition:(int)a2 disableHistoryChecking:(BOOL)a3 resultsBlock:(id /* block */)a4;
- (id)_createDefaultXPCSchedulingParametersWithInterval:(int)a0 batteryLevel:(int)a1;
- (void)_setupActivityAndTriggers:(const char *)a0 interval:(int)a1 batteryLevel:(int)a2 calibrationBlock:(id /* block */)a3 isRepeating:(BOOL)a4;
- (void)_setCalibrationShouldAbort:(BOOL)a0;
- (void)_notifyOfDeviceMotion;
- (double)_getMagneticThresholdFromAttempt;
- (id)_runAndCreateDictionaryForCalibrationContext:(id)a0 deviceType:(int)a1 devicePosition:(int)a2 errors:(unsigned int *)a3;
- (BOOL)_calibrationShouldAbort;
- (void)_setupRepeatingCalibrationScheduling:(id)a0 withCalibrationBlock:(id /* block */)a1;
- (id)autoFocusPositionSensorCalibrationData;
- (id)runAutoFocusPositionSensorCalibrationAndGetResultsForDeviceType:(int)a0 devicePosition:(int)a1;
- (id)autoFocusCalibrationData;
- (id)apsSphereInteractionCalibrationData;
- (id)sphereCalibrationData;
- (id)sphereEndStopCalibrationData;

@end
