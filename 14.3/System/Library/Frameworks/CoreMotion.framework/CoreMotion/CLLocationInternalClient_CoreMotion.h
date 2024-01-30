@class NSXPCConnection;

@interface CLLocationInternalClient_CoreMotion : NSObject {
    NSXPCConnection *_connection;
}

+ (id)sharedServiceClient;

- (const struct __CFArray { } *)copyGnssBandsInUse;
- (void)setLocationServicesEnabled:(unsigned char)a0;
- (const struct __CFArray { } *)copyActivityAlarms;
- (unsigned char)shouldDisplayEEDUI;
- (unsigned char)getEmergencyLocationSettingsCompatibilityVersion:(int *)a0 andContentVersion:(int *)a1;
- (const struct __CFDictionary { } *)copyAppsUsingLocation;
- (id)setAuthorizationPromptMapDisplayEnabled:(unsigned char)a0;
- (unsigned char)getGyroCalibrationDatabaseNumTemperatures:(int *)a0;
- (const struct __CFArray { } *)copyTechnologiesInUse;
- (const struct __CFDictionary { } *)copyMonitoredRegionsForBundleIdentifier:(const struct __CFString { } *)a0 orBundlePath:(const struct __CFString { } *)a1;
- (unsigned char)timeSyncMachTimeStamp:(unsigned long long *)a0 oscarTimeStamp:(unsigned long long *)a1;
- (unsigned char)getGyroCalibrationDatabaseBiasFit:(struct { int x0; double x1; double x2; union { struct { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; } x0; struct { BOOL x0; char x1[282]; } x1; } x3; } *)a0 atTemperature:(float)a1;
- (void)setMapMatchingRouteHint:(struct { unsigned long long x0; double x1; double x2; double x3; double x4; } *)a0 count:(int)a1 routingType:(int)a2 stepType:(int)a3;
- (id)applyArchivedAuthorizationDecisions:(id)a0;
- (unsigned char)configure:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; unsigned char x6; float x7; char x8; unsigned short x9; })a0;
- (id)synchronousRemoteObject;
- (unsigned char)updateCorrectiveCompensationChoiceForOutstandingPrompt:(int)a0;
- (unsigned char)setTemporaryAuthorizationGranted:(unsigned char)a0 forBundleID:(const struct __CFString { } *)a1 orBundlePath:(const struct __CFString { } *)a2;
- (unsigned char)insertGyroCalibrationDatabaseBiasEstimateIfValid:(struct { float x0; float x1; float x2; })a0 temperature:(float)a1 variance:(struct { float x0; float x1; float x2; })a2 timestamp:(double)a3;
- (unsigned char)dumpLogs:(const struct __CFString { } *)a0;
- (const struct __CFDictionary { } *)copyNearbyAssetSettingsOfAccessoryFile:(const struct __CFString { } *)a0;
- (void)notifyWeatherForecast:(id)a0 airQualityConditions:(id)a1 hourlyForecasts:(id)a2 dailyForecasts:(id)a3 latitude:(double)a4 longitude:(double)a5;
- (unsigned char)shutdownDaemon;
- (id)getTemporaryAuthorizationStatusForBundleId:(id)a0 orBundlePath:(id)a1 error:(id *)a2;
- (int)getAccessoryTypeBitSet;
- (void)setGestureServiceEnabled:(unsigned char)a0;
- (BOOL)startStopAdvertisingBeacon:(id)a0 power:(id)a1;
- (id)triggerExpiredAuthorizationPurgeOnClientManager;
- (unsigned char)getAuthorizationStatus:(int *)a0 forBundleID:(const struct __CFString { } *)a1 orBundlePath:(const struct __CFString { } *)a2;
- (BOOL)checkAndExerciseAuthorizationForBundleID:(id)a0 orBundlePath:(id)a1 services:(unsigned long long)a2 error:(id *)a3;
- (unsigned char)getIncidentalUseMode:(int *)a0 forBundleID:(const struct __CFString { } *)a1 orBundlePath:(const struct __CFString { } *)a2;
- (unsigned char)getPrivateMode;
- (unsigned char)clearLocationAuthorizations;
- (id)timeZoneAtLocation:(id)a0;
- (unsigned char)compassCalibrationDatabaseGetBias:(struct { struct { float x0; float x1; float x2; } x0; int x1; } *)a0 magneticField:(struct { float x0; float x1; float x2; })a1 acceleration:(struct { float x0; float x1; float x2; })a2;
- (void)setLocationDefaultForKey:(const struct __CFString { } *)a0 value:(const void *)a1;
- (id)getArchivedAuthorizationDecisionsWithError:(id *)a0;
- (unsigned char)deleteCurrentEmergencyLocationAsset;
- (unsigned char)performMigration;
- (const void *)getLocationDefaultForKey:(const struct __CFString { } *)a0;
- (unsigned char)copyLastLog;
- (unsigned char)getAuthorizationPromptMapDisplayEnabled:(char *)a0;
- (unsigned char)compassCalibrationDatabaseSetBias:(struct { float x0; float x1; float x2; })a0 magneticField:(struct { float x0; float x1; float x2; })a1 level:(int)a2 magnitude:(float)a3 inclination:(float)a4;
- (unsigned char)setBackgroundIndicatorForBundleID:(const struct __CFString { } *)a0 orBundlePath:(const struct __CFString { } *)a1 enabled:(unsigned char)a2;
- (unsigned char)getControlPlaneStatusReportClear:(int)a0 startTime:(double *)a1 endTime:(double *)a2 latitude:(double *)a3 longitude:(double *)a4 altitude:(double *)a5 accuracy:(double *)a6 status:(unsigned int *)a7;
- (unsigned char)setStatusBarIconEnabled:(BOOL)a0 forEntityClass:(unsigned int)a1;
- (unsigned char)setAuthorizationStatus:(unsigned char)a0 withCorrectiveCompensation:(int)a1 forBundleID:(const struct __CFString { } *)a2 orBundlePath:(const struct __CFString { } *)a3;
- (unsigned char)pingDaemon;
- (unsigned char)gyroCalibrationDatabaseWipe;
- (unsigned char)getGestureServiceEnabled:(char *)a0;
- (unsigned char)gyroCalibrationDatabaseSupportsMiniCalibration:(int *)a0;
- (id)getMotionSensorLogs;
- (unsigned char)getGroundAltitudeForBundleID:(const struct __CFString { } *)a0 orBundlePath:(const struct __CFString { } *)a1 location:(id)a2 groundAltitude:(struct { double x0; double x1; double x2; int x3; } *)a3;
- (double)modifyOrSetAuthorizationTime:(double)a0 forBundleID:(id)a1 orBundlePath:(id)a2;
- (void)setPrivateMode:(unsigned char)a0;
- (void)notifyPassKitPayment:(id)a0 transaction:(id)a1 info:(id)a2;
- (unsigned char)displayStatistics;
- (unsigned char)setIncidentalUseMode:(int)a0 forBundleID:(const struct __CFString { } *)a1 orBundlePath:(const struct __CFString { } *)a2;
- (const struct __CFDictionary { } *)copyNearbyAssetSettings;
- (int)getStatusBarIconState;
- (id)getPipelinedCache;
- (unsigned char)getLocationForBundleID:(const struct __CFString { } *)a0 orBundlePath:(const struct __CFString { } *)a1 dynamicAccuracyReductionEnabled:(unsigned char)a2 allowsAlteredAccessoryLocations:(unsigned char)a3 location:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; } *)a4;
- (unsigned char)getLocationServicesEnabled:(char *)a0;
- (unsigned char)getStatusBarIconEnabled:(BOOL *)a0 forEntityClass:(unsigned int)a1;
- (unsigned char)setAuthorizationStatusByType:(int)a0 withCorrectiveCompensation:(int)a1 forBundleID:(const struct __CFString { } *)a2 orBundlePath:(const struct __CFString { } *)a3;
- (id)connection;
- (unsigned char)getPrecisionPermission:(char *)a0 forBundleID:(const struct __CFString { } *)a1 orBundlePath:(const struct __CFString { } *)a2;
- (id)getAccessoryMotionSensorLogs;
- (id)setTemporaryAuthorizationStatusForBundleId:(id)a0 orBundlePath:(id)a1 statusData:(id)a2;

@end
