@class NSMutableDictionary, NSMutableArray;

@interface FigCaptureAutoFocusPositionSensorCalibrationContext : FigCaptureCalibrationContext {
    BOOL _shouldDeleteOldVersion;
    NSMutableDictionary *_iStopZEstimateDeltaHistory;
    double _previousAngleDelta;
    double _currentAngleDelta;
    NSMutableArray *_calibrationDataHistoryQueue;
    int _maxHistoryBuffer;
    BOOL _lastSuccessfulCalibrationWasDiscarded;
    BOOL _supportsHistoryChecking;
    int _maxIStopZEstimateDifference;
    int _minCompassHeadingChange;
}

@property (nonatomic) BOOL disableHistoryChecking;

+ (void)initialize;
+ (void)setStatusForCalibrationData:(id)a0 status:(int)a1;
+ (void)printDebugInfoForRawStreamCalibrationData:(id)a0;
+ (unsigned int)calibrationStatusFromRawStreamCalibrationData:(id)a0;
+ (id)calibrationDataStringForInternalLogging:(id)a0;
+ (id)createRawStreamCalibrationDataWithFailureReasons:(int)a0;

- (void)setLastSuccessfulCalibrationData:(id)a0;
- (BOOL)_shouldRejectCalibrationData:(id)a0;
- (void)_pushToCalibrationHistoryQueue:(id)a0;
- (void)_updateIStopZEstimateDelta:(id)a0;
- (void)_ensureIStopZEstimateDeltasForKey:(id)a0;
- (BOOL)_calibrationDataIsWithinIStopZEstimateLimits:(id)a0 basedOnCalibrationHistory:(id)a1;
- (BOOL)_calibrationDataCompassHeadingHasMovedPastMinimum:(id)a0 basedOnCalibrationHistory:(id)a1;
- (void)pushCalibrationDataToHistory:(id)a0 isRejected:(BOOL *)a1;
- (id)calibrationDataHistory;
- (id)_initForUnitTestsSupportsHistoryChecking:(BOOL)a0;
- (int)passingIStopZEstimateDeltaForPosition:(id)a0;
- (int)previousIStopZEstimateDeltaForPosition:(id)a0;
- (int)currentIStopZEstimateDeltaForPosition:(id)a0;
- (double)previousAngleDelta;
- (double)currentAngleDelta;
- (void)reportForAggdLoggingWithCalibrationData:(id)a0 isValid:(BOOL)a1 magneticFieldMagnitude:(double)a2;
- (id)initWithSupportedDeviceNames:(id)a0;

@end
