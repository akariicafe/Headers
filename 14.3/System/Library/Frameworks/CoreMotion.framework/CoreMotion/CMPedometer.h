@class CMPedometerProxy;

@interface CMPedometer : NSObject

@property (readonly, nonatomic) CMPedometerProxy *pedometerProxy;

+ (BOOL)isPaceAvailable;
+ (long long)authorizationStatus;
+ (BOOL)isAllDayElevationAvailable;
+ (BOOL)isFloorCountingAvailable;
+ (BOOL)isStepCountingAvailable;
+ (BOOL)isDistanceAvailable;
+ (BOOL)isCadenceAvailable;
+ (BOOL)isPedometerEventTrackingAvailable;

- (id)init;
- (void)dealloc;
- (id)_pedometerDataWithRecordID:(long long)a0;
- (void)_queryPedometerDataSinceDataRecord:(id)a0 withHandler:(id /* block */)a1;
- (id)strideCalibrationDump;
- (void)queryPedometerDataFromDate:(id)a0 toDate:(id)a1 withHandler:(id /* block */)a2;
- (void)startPedometerUpdatesFromDate:(id)a0 withHandler:(id /* block */)a1;
- (void)stopPedometerUpdates;
- (void)queryPedometerDataSinceRecord:(long long)a0 withHandler:(id /* block */)a1;
- (void)queryPedometerDataSinceDataRecord:(id)a0 withHandler:(id /* block */)a1;
- (void)startPedometerEventUpdatesWithHandler:(id /* block */)a0;
- (void)stopPedometerEventUpdates;
- (BOOL)sendStrideCalibrationHistoryToFile:(id)a0;
- (void)queryRawSpeedToKValueBinsWithHandler:(id /* block */)a0;
- (void)queryRemoteRawSpeedToKValueBinsWithHandler:(id /* block */)a0;
- (void)queryStepCadenceToStrideLengthBinsWithHandler:(id /* block */)a0;
- (void)queryRemoteStepCadenceToStrideLengthBinsWithHandler:(id /* block */)a0;
- (void)_startPedometerUpdatesSinceDataRecord:(id)a0 withHandler:(id /* block */)a1;

@end
