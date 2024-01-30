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
- (id)runAutoFocusPositionSensorCalibrationAndGetResultsForDeviceType:(int)a0 devicePosition:(int)a1;
- (id)autoFocusPositionSensorCalibrationData;
- (id)autoFocusCalibrationData;
- (id)apsSphereInteractionCalibrationData;
- (id)sphereCalibrationData;
- (id)sphereEndStopCalibrationData;

@end
