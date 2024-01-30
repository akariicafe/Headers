@class NSString, HKHealthStore;

@interface RTHealthKitManager : RTService <RTDiagnosticProvider>

@property (retain, nonatomic) HKHealthStore *healthKitStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringFromTimeInterval:(double)a0;
+ (id)stringFromWorkoutActivityType:(unsigned long long)a0;
+ (id)stringFromDate:(id)a0 dateFormat:(id)a1;

- (void)_setup;
- (void)sendDiagnosticsToURL:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_generateDiagnosticFilesAtURL:(id)a0 error:(id *)a1;
- (id)_getWorkoutsWithStartDate:(id)a0 limit:(long long)a1 error:(id *)a2;
- (id)_getWorkoutRouteUsingWorkout:(id)a0 error:(id *)a1;
- (void)_fetchWorkoutRouteLocationsUsingWorkoutRoute:(id)a0 handler:(id /* block */)a1;
- (id)_getOdometerReadingUsingWorkout:(id)a0 samplingIntervalComponents:(id)a1 error:(id *)a2;
- (id)_getHealthKitDataWithStartDate:(id)a0 limit:(long long)a1 includeLocations:(BOOL)a2 includeOdometerReadings:(BOOL)a3 odometerSamplingIntervalComponents:(id)a4 error:(id *)a5;
- (BOOL)_saveEntireHealthKitDataToURL:(id)a0 outAbsoluteURL:(id *)a1 includeLocations:(BOOL)a2 includeOdometerReadings:(BOOL)a3 odometerSamplingIntervalComponents:(id)a4 error:(id *)a5;
- (void)_updateHealthKitStartDatesUsingData:(id)a0 currentStartDate:(id *)a1 nextStartDate:(id *)a2;
- (BOOL)_dumpHealthKitMetaData:(id)a0 dir:(id)a1 stats:(id)a2 error:(id *)a3;
- (BOOL)_dumpWorkoutLocationsUsingData:(id)a0 dir:(id)a1 stats:(id)a2 error:(id *)a3;
- (BOOL)_writeToJSONAtURL:(id)a0 data:(id)a1 error:(id *)a2;
- (id)_convertHealthKitDataToJSONCompatibleType:(id)a0 stats:(id)a1;
- (BOOL)_writeLocations:(id)a0 csvFileURL:(id)a1 error:(id *)a2;
- (BOOL)_writeToFileAtURL:(id)a0 contentString:(id)a1 error:(id *)a2;
- (id)getWorkoutsWithStartDate:(id)a0 limit:(long long)a1 error:(id *)a2;
- (id)getWorkoutRouteUsingWorkout:(id)a0 error:(id *)a1;
- (void)fetchWorkoutRouteLocationsUsingWorkoutRoute:(id)a0 handler:(id /* block */)a1;
- (id)getOdometerReadingUsingWorkout:(id)a0 samplingIntervalComponents:(id)a1 error:(id *)a2;
- (id)getHealthKitDataWithStartDate:(id)a0 limit:(long long)a1 includeLocations:(BOOL)a2 includeOdometerReadings:(BOOL)a3 odometerSamplingIntervalComponents:(id)a4 error:(id *)a5;
- (BOOL)saveEntireHealthKitDataToURL:(id)a0 outAbsoluteURL:(id *)a1 includeLocations:(BOOL)a2 includeOdometerReadings:(BOOL)a3 odometerSamplingIntervalComponents:(id)a4 error:(id *)a5;

@end
