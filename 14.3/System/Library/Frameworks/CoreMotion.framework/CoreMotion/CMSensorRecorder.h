@interface CMSensorRecorder : NSObject

+ (long long)authorizationStatus;
+ (BOOL)isRecordingAvailableForType:(int)a0;
+ (BOOL)isAccelerometerRecordingAvailable;
+ (BOOL)isGyroRecordingAvailable;
+ (BOOL)isAuthorizedForRecording;
+ (BOOL)isPressureRecordingAvailable;

- (BOOL)setSensorSampleRate:(unsigned int)a0 forType:(int)a1;
- (id)gyroDataSinceId:(unsigned long long)a0;
- (id)sensorDataFromDate:(id)a0 toDate:(id)a1 forType:(int)a2;
- (BOOL)validateTimesFromDate:(id *)a0 toDate:(id)a1;
- (BOOL)sendSensorDataToUrl:(id)a0 fromDate:(id)a1 toDate:(id)a2 forType:(int)a3;
- (void)recordDataType:(int)a0 forDuration:(double)a1;
- (id)accelerometerDataSinceId:(unsigned long long)a0;
- (id)pressureDataSinceId:(unsigned long long)a0;
- (id)accelerometerDataFromDate:(id)a0 toDate:(id)a1;
- (id)gyroDataFromDate:(id)a0 toDate:(id)a1;
- (id)pressureDataFromDate:(id)a0 toDate:(id)a1;
- (BOOL)sendAccelDataToUrl:(id)a0 fromDate:(id)a1 toDate:(id)a2;
- (void)recordGyroForDuration:(double)a0;
- (BOOL)sendGyroDataToUrl:(id)a0 fromDate:(id)a1 toDate:(id)a2;
- (BOOL)sendPressureDataToUrl:(id)a0 fromDate:(id)a1 toDate:(id)a2;
- (void)recordAccelerometerForDuration:(double)a0;
- (void)recordPressureForDuration:(double)a0;
- (id)accelerometerDataFrom:(id)a0 to:(id)a1;
- (void)recordAccelerometerFor:(double)a0;
- (id)accelerometerDataSince:(unsigned long long)a0;
- (BOOL)setAccelSampleRate:(unsigned int)a0;
- (BOOL)setGyroSampleRate:(unsigned int)a0;
- (BOOL)setPressureSampleRate:(unsigned int)a0;

@end
