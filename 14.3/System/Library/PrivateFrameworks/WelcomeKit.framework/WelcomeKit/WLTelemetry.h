@interface WLTelemetry : NSObject

+ (id)sharedInstance;

- (void)_connectionToAndroidDeviceDidCompleteWithResult:(unsigned long long)a0;
- (id)_telemetryDictionaryForPreparatoryDataDidComplete:(id)a0 contentType:(id)a1 duration:(double)a2 metadata:(id)a3;
- (id)_telemetryDictionaryForContentTypeDidComplete:(id)a0 statistics:(id)a1 metadata:(id)a2;
- (id)_telemetryForMigrationDidCompleteWithSuccess:(BOOL)a0 error:(id)a1 metadata:(id)a2;
- (void)wifiDidStartWithSuccess:(BOOL)a0;
- (void)connectionToAndroidDeviceDidSucceed;
- (void)connectionToAndroidDeviceDidFailWithTimeout;
- (void)connectionToAndroidDeviceDidFailWithAuthenticationError;
- (void)preparatoryDataDidComplete:(id)a0 contentType:(id)a1 duration:(double)a2 metadata:(id)a3;
- (void)contentTypeDidComplete:(id)a0 statistics:(id)a1 metadata:(id)a2;
- (void)migrationDidCompleteWithSuccess:(BOOL)a0 error:(id)a1 metadata:(id)a2;
- (void)importDidFailSilentlyForContentType:(id)a0;
- (void)didResolveTimeEstimate:(unsigned long long)a0 forDownloadTask:(id)a1 threshold:(unsigned long long)a2 actualTime:(unsigned long long)a3;
- (void)priorConnectionDidFailWithReason:(id)a0 androidOSAPIVersion:(id)a1;
- (void)userDidChooseToInstallMigratableApps:(BOOL)a0;

@end
