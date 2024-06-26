@class NSString, NSUserDefaults;

@interface CKBehaviorOptions : NSObject {
    NSUserDefaults *_automatedDeviceGroupDefaults;
}

@property BOOL didReadAutomatedDeviceGroup;
@property (retain, nonatomic) NSString *automatedDeviceGroup;

+ (id)sharedOptions;

- (id)customMetricsServiceBaseURL;
- (BOOL)evictRecentAssets;
- (unsigned long long)assetEvictionGracePeriodWithDefaultValue:(unsigned long long)a0;
- (id)productName;
- (unsigned long long)maxBatchSize;
- (double)sqlBatchTime;
- (double)packageGCPeriod;
- (BOOL)logTraffic;
- (int)PCSRetryCount;
- (long long)maxRecordPCSMasterKeyRolls;
- (id)shareURLToAccountIDSystemAcceptationOverrides;
- (BOOL)pipelineFetchAllChangesRequests;
- (double)flowControlRegenerationOverride;
- (id)productVersion;
- (BOOL)compressRequests;
- (id)buildVersion;
- (BOOL)useEnhancedPCSEncryptionContext;
- (int)backgroundSessionConnectionPoolLimitWithDefaultValue:(int)a0;
- (void)setContainerIdentifierToForceFatalManateeZoneDecryptionFailure:(id)a0;
- (id)containerIdentifierToForceFatalManateeZoneDecryptionFailure;
- (id)customCloudDBBaseURL;
- (BOOL)useModTimeInAssetCacheEviction;
- (void)setPCSCacheValidTime:(long long)a0;
- (id)vettedEmailsTestFormat;
- (void)setDeviceCountOverride:(id)a0;
- (int)cachedRecordExpiryTime;
- (double)minTTRPromptInterval;
- (BOOL)shouldProfileSQL;
- (void)setShareURLToAccountIDSystemAcceptationOverrides:(id)a0;
- (int)xpcConnectionTimeoutSecondsWithDefaultValue:(int)a0;
- (id)_getDictionaryOptionForKey:(id)a0 defaultValue:(id)a1;
- (long long)flowControlBudget;
- (void)setUsePreauth:(BOOL)a0;
- (double)flowControlRegeneration;
- (BOOL)isAppleInternalInstall;
- (BOOL)fakeManateeOverride;
- (unsigned long long)maxPackageDownloadsPerBatchWithDefaultValue:(unsigned long long)a0;
- (BOOL)fakeManateeEnabled;
- (void)setRecordNamesForFakingDecryptionFailure:(id)a0;
- (BOOL)sendDebugHeader;
- (id)transcoderServiceName;
- (int)longlivedOperationMaxRetryCount;
- (void).cxx_destruct;
- (double)maximumQueuedFetchWaitTime;
- (BOOL)sandboxCloudD;
- (id)customShareServiceBaseURL;
- (BOOL)enableMMCSMetricsWithDefaultValue:(BOOL)a0;
- (BOOL)rollZonePCSIdentities;
- (BOOL)shouldDecryptRecordsBeforeSave;
- (id)customDeviceServiceBaseURL;
- (void)_setPref:(id)a0 forKey:(id)a1;
- (id)_init;
- (BOOL)allowKeyRollingInAllContainers;
- (long long)flowControlBudgetOverride;
- (BOOL)rollZoneSharingKeys;
- (double)shareAcceptorRetrievingDialogDelay;
- (double)maximumThrottleSeconds;
- (void)setForceUploadRequestActivitiesToRunImmediately:(BOOL)a0;
- (unsigned long long)assetEvictionGracePeriodOnHighWatermarkWithDefaultValue:(unsigned long long)a0;
- (void)setAllowKeyRollingInAllContainers:(BOOL)a0;
- (BOOL)allowExpiredDNSBehavior;
- (int)clientThrottleQueueWidth;
- (void)_setArrayPref:(id)a0 forKey:(id)a1;
- (BOOL)disableCaching;
- (const char *)CKCtlPrompt;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)configBaseURL;
- (unsigned long long)savedErrorCount;
- (unsigned long long)recordCacheSizeLimit;
- (double)PCSCacheMinTime;
- (BOOL)rollRecordPCSMasterKeys;
- (void)setIgnoreUploadRequestPushNotifications:(BOOL)a0;
- (unsigned long long)maxPackageUploadsPerBatchWithDefaultValue:(unsigned long long)a0;
- (double)publicIdentitiesExpirationTimeout;
- (BOOL)usePreauth;
- (BOOL)rollRecordMasterKeysOnUnshare;
- (void)dealloc;
- (BOOL)useEncryption;
- (id)customCodeServiceBaseURL;
- (id)recordNamesForFakingDecryptionFailure;
- (double)PCSCacheValidTime;
- (long long)sqlBatchCount;
- (unsigned long long)PCSCacheSize;
- (id)transcoderPermittedRemoteMeasurement;
- (id)testRunIDHeader;
- (id)transcoderFunctionName;
- (id)deviceCountOverride;
- (BOOL)CFNetworkLogging;
- (id)setupBaseURL;
- (int)defaultRetryAfter;
- (double)shareAcceptorRetrievingDialogMinPeriod;

@end
