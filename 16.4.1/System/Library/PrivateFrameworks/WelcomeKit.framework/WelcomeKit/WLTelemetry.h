@interface WLTelemetry : NSObject

+ (id)sharedInstance;

- (void)daemonDidGetInterrupted;
- (void)deviceDidFailWithTimeout;
- (void)didLoadAndroidStore:(id)a0 selected:(BOOL)a1 canceled:(BOOL)a2 inAttempts:(unsigned long long)a3;
- (void)didLoadQRCode:(BOOL)a0;
- (void)send:(id)a0 payload:(id)a1;
- (void)contentTypeDidComplete:(id)a0 statistics:(id)a1 metadata:(id)a2;
- (void)deviceDidFailWithAuthenticationError;
- (void)didLookupAppsWithMatchedApps:(unsigned long long)a0 mismatchedApps:(unsigned long long)a1;
- (void)didResolveTimeEstimate:(unsigned long long)a0 forDownloadTask:(id)a1 threshold:(unsigned long long)a2 actualTime:(unsigned long long)a3;
- (void)importDidFailSilentlyForContentType:(id)a0;
- (void)migratorDidFinish:(id)a0;
- (void)photoLibraryDidFailWithExtension:(id)a0;
- (void)preparatoryDataDidComplete:(id)a0 contentType:(id)a1 duration:(double)a2 metadata:(id)a3;
- (void)userDidChooseToInstallMigratableApps:(BOOL)a0;
- (void)wifiDidFail;
- (id)_telemetryDictionaryForContentTypeDidComplete:(id)a0 statistics:(id)a1 metadata:(id)a2;
- (id)_telemetryDictionaryForPreparatoryDataDidComplete:(id)a0 contentType:(id)a1 duration:(double)a2 metadata:(id)a3;

@end
