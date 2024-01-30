@interface BRCCoreAnalyticsReporter : NSObject

+ (id)dictionaryForErrorsByZone:(id)a0 wantPrivateZone:(BOOL)a1;
+ (void)newAppTelemetryMetricEvent:(id)a0;
+ (void)sendTelemetryEvent:(id)a0 withReport:(id)a1;
+ (id)telemetryDictionaryToUploadForError:(id)a0 errorMessage:(id)a1 count:(id)a2 syncType:(id)a3 totalItemsCount:(id)a4 zoneType:(id)a5 zoneCountsOnly:(BOOL)a6 isFolderSharingEnabled:(BOOL)a7 dsid:(id)a8 rampNumber:(id)a9 lastFailureDate:(id)a10 pcsState:(id)a11;
+ (BOOL)uploadLoadErrorsAsIndividualEvents:(id)a0 syncType:(id)a1 totalItemsCount:(unsigned long long)a2 zoneCountsOnly:(BOOL)a3 isFolderSharingEnabled:(BOOL)a4 dsid:(id)a5 rampNumber:(id)a6;
+ (void)uploadMetricsReport:(id)a0;
+ (BOOL)uploadSyncErrorsAsIndividualEvents:(id)a0 syncType:(id)a1 totalItemsCount:(unsigned long long)a2 zoneType:(id)a3 zoneCountsOnly:(BOOL)a4 isFolderSharingEnabled:(BOOL)a5 dsid:(id)a6 rampNumber:(id)a7;

@end
