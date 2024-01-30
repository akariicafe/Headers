@interface WLTelemetry : NSObject

+ (id)sharedInstance;

- (void)send:(id)a0 payload:(id)a1;
- (id)_telemetryDictionaryForPreparatoryDataDidComplete:(id)a0 contentType:(id)a1 duration:(double)a2 metadata:(id)a3;
- (id)_telemetryDictionaryForContentTypeDidComplete:(id)a0 statistics:(id)a1 metadata:(id)a2;
- (void)wifiDidFail;
- (void)deviceDidFailWithTimeout;
- (void)deviceDidFailWithAuthenticationError;
- (void)migratorDidFinish:(id)a0;
- (void)preparatoryDataDidComplete:(id)a0 contentType:(id)a1 duration:(double)a2 metadata:(id)a3;
- (void)contentTypeDidComplete:(id)a0 statistics:(id)a1 metadata:(id)a2;
- (void)importDidFailSilentlyForContentType:(id)a0;
- (void)didResolveTimeEstimate:(unsigned long long)a0 forDownloadTask:(id)a1 threshold:(unsigned long long)a2 actualTime:(unsigned long long)a3;
- (void)userDidChooseToInstallMigratableApps:(BOOL)a0;
- (void)didLookupAppsWithMatchedApps:(unsigned long long)a0 mismatchedApps:(unsigned long long)a1;
- (void)photoLibraryDidFailWithExtension:(id)a0;
- (void)didLoadAndroidStore:(id)a0 selected:(BOOL)a1 canceled:(BOOL)a2 inAttempts:(unsigned long long)a3;

@end
