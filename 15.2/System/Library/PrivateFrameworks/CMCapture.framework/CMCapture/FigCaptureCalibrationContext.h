@class NSString, NSDictionary, NSMutableDictionary, NSArray;

@interface FigCaptureCalibrationContext : NSObject {
    NSMutableDictionary *_lastSuccessfulCalibrationData;
    NSString *_preferenceString;
    NSString *_internalLogName;
    NSArray *_supportedDevices;
}

@property (retain, nonatomic) NSDictionary *lastSuccessfulCalibrationData;
@property (nonatomic) double lastSuccessfulCalibrationTimeStamp;
@property (nonatomic) struct { double x; double y; double z; } lastSuccessfulCalibrationMagneticField;
@property (readonly, nonatomic) NSString *activityName;
@property (readonly, nonatomic) NSString *propertyName;
@property (readonly, nonatomic) unsigned long long expectedDataSize;
@property (readonly, nonatomic) int interval;
@property (readonly, nonatomic) int minimumBatteryLevelToRun;

+ (void)initialize;
+ (void)printDebugInfoForRawStreamCalibrationData:(id)a0;
+ (unsigned int)calibrationStatusFromRawStreamCalibrationData:(id)a0;
+ (id)calibrationDataStringForInternalLogging:(id)a0;
+ (id)createRawStreamCalibrationDataWithFailureReasons:(int)a0;
+ (void)setStatusForCalibrationData:(id)a0 status:(int)a1;

- (id)initWithPreferenceString:(id)a0 withActivityName:(id)a1 withPropertyName:(id)a2 withExpectedDataSize:(unsigned long long)a3 withInterval:(int)a4 withMinimumBatteryLevel:(int)a5 withInternalLogName:(id)a6 supportedDeviceNames:(id)a7;
- (void)reportLoggingWithCalibrationData:(id)a0 isValid:(BOOL)a1 magneticFieldMagnitude:(double)a2;
- (id)initWithSupportedDeviceNames:(id)a0;
- (void)updateWithNewCalibrationData:(id)a0 orExternalErrors:(unsigned int)a1 magneticFieldAttempts:(int)a2 magneticField:(struct { double x0; double x1; double x2; })a3 isCalibrationValid:(BOOL *)a4 calibrationStatus:(unsigned int *)a5;
- (void)pushCalibrationDataToHistory:(id)a0 isRejected:(BOOL *)a1;
- (id)calibrationDataHistory;

@end
