@interface CKBehaviorOptions : NSObject {
    BOOL _isAppleInternalInstall;
}

+ (id)sharedOptions;

- (id)productName;
- (void)setProductName:(id)a0;
- (void)setUseEncryption:(BOOL)a0;
- (void)setBuildVersion:(id)a0;
- (void)setUseStingray:(BOOL)a0;
- (double)shareAcceptorRetrievingDialogMinPeriod;
- (double)sqlBatchTime;
- (id)deviceCountOverride;
- (void)setSqlBatchTime:(double)a0;
- (BOOL)disableCaching;
- (unsigned long long)maxBatchSize;
- (id)buildVersion;
- (id)containerIdentifierToEmailOverrides;
- (id)productVersion;
- (id)transcoderFunctionName;
- (void)setContainerIdentifierToForceFatalManateeZoneDecryptionFailure:(id)a0;
- (BOOL)fakeManateeEnabled;
- (void)setRollRecordPCSMasterKeys:(BOOL)a0;
- (int)defaultRetryAfter;
- (unsigned long long)recordCacheSizeLimit;
- (BOOL)enableMMCSMetricsWithDefaultValue:(BOOL)a0;
- (long long)releaseType;
- (void)resetMaximumMergeableDeltaRequestSize;
- (void)setUseEnhancedPCSEncryptionContext:(BOOL)a0;
- (void)setModTimeInAssetCacheEviction:(BOOL)a0;
- (BOOL)CDPWalrusEnabled;
- (void)setTranscoderServiceName:(id)a0;
- (id)initInternal;
- (BOOL)evictRecentAssets;
- (void)setCustomShareServiceBaseURL:(id)a0;
- (BOOL)useModTimeInAssetCacheEviction;
- (int)cachedRecordExpiryTime;
- (double)packageGCPeriod;
- (void)setOperationTimeout:(double)a0;
- (BOOL)rollRecordMasterKeysOnUnshare;
- (void)setRollZoneSharingKeys:(BOOL)a0;
- (BOOL)shouldStreamTrafficLogs;
- (double)minTTRPromptInterval;
- (BOOL)isAppleInternalInstall;
- (void)setCompressRequests:(BOOL)a0;
- (void)setIsCurrentAppleAccountSuspended:(BOOL)a0;
- (id)customCodeServiceBaseURL;
- (void)setFakeManateeOverride:(BOOL)a0;
- (BOOL)CFNetworkLogging;
- (int)backgroundSessionConnectionPoolLimitWithDefaultValue:(int)a0;
- (BOOL)usePreauth;
- (void)setTestRunIDHeader:(id)a0;
- (unsigned long long)recordCacheEntryCountLimit;
- (unsigned long long)maximumMergeableDeltaRequestSize;
- (BOOL)shouldProfileSQL;
- (void)setAllowZoneAndRecordKeyRollingInZoneishPCSZonesForAllContainers:(BOOL)a0;
- (BOOL)allowZoneKeyRollingInPerRecordPCSZonesForAllContainers;
- (void)setCDPWalrusOverride:(BOOL)a0;
- (void)setPCSCacheValidTime:(long long)a0;
- (BOOL)rollZonePCSIdentities;
- (const char *)CKCtlPrompt;
- (void)setAllowZoneKeyRollingInPerRecordPCSZonesForAllContainers:(BOOL)a0;
- (int)longlivedOperationMaxRetryCount;
- (BOOL)fakeWalrusEnabled;
- (void)setRecordNamesForFakingDecryptionFailure:(id)a0;
- (id)altDSIDsToWalrusAvailabilitiesOverrides;
- (void)setCDPWalrusEnabled:(BOOL)a0;
- (void)setTrafficLogMaximumDataSize:(int)a0;
- (int)xpcConnectionTimeoutSecondsWithDefaultValue:(int)a0;
- (void)setTranscoderFunctionName:(id)a0;
- (double)maximumThrottleSeconds;
- (id)customDeviceServiceBaseURL;
- (void)setContainerIdentifierToEmailOverrides:(id)a0;
- (void)setCKCtlPrompt:(char *)a0;
- (long long)sqlBatchCount;
- (void)setCachedRecordExpiryTime:(int)a0;
- (BOOL)rollZoneSharingKeys;
- (BOOL)shouldDecryptRecordsBeforeSave;
- (id)vettedEmailsTestFormat;
- (double)publicIdentitiesExpirationTimeout;
- (void)setUsePreauth:(BOOL)a0;
- (double)maximumQueuedFetchWaitTime;
- (void)setCacheChildAccounts:(BOOL)a0;
- (id)configBaseURL;
- (void)setShouldStreamTrafficLogs:(BOOL)a0;
- (void)setConfigBaseURL:(id)a0;
- (BOOL)allowExpiredDNSBehavior;
- (BOOL)logTraffic;
- (void)setFakeWalrusEnabled:(BOOL)a0;
- (BOOL)rollRecordPCSMasterKeys;
- (void)setCustomCloudDBBaseURL:(id)a0;
- (BOOL)isCurrentAppleAccountSuspended;
- (void)setForceUploadRequestActivitiesToRunImmediately:(BOOL)a0;
- (BOOL)compressRequests;
- (void)setLogTraffic:(BOOL)a0;
- (BOOL)isDASRateLimitingDisabled;
- (void)setAllowRecordKeyRollingInPerRecordPCSZonesForAllContainers:(BOOL)a0;
- (BOOL)allowRecordKeyRollingInPerRecordPCSZonesForAllContainers;
- (unsigned long long)maxPackageDownloadsPerBatchWithDefaultValue:(unsigned long long)a0;
- (void)setRollRecordMasterKeysOnUnshare:(BOOL)a0;
- (void)setFakeManateeEnabled:(BOOL)a0;
- (BOOL)useEnhancedPCSEncryptionContext;
- (BOOL)fakeManateeOverride;
- (unsigned long long)savedErrorCount;
- (BOOL)fakeWalrusOverride;
- (void)setProductVersion:(id)a0;
- (id)testRunIDHeader;
- (void)setRollZonePCSIdentities:(BOOL)a0;
- (int)PCSRetryCount;
- (void)setShareURLToAccountIDSystemAcceptationOverrides:(id)a0;
- (BOOL)allowZoneAndRecordKeyRollingInZoneishPCSZonesForAllContainers;
- (BOOL)cacheChildAccounts;
- (id)recordNamesForFakingDecryptionFailure;
- (id)sharingOptionsSummaryString;
- (double)PCSCacheValidTime;
- (long long)maxRecordPCSMasterKeyRolls;
- (void)setSendDebugHeader:(BOOL)a0;
- (BOOL)pipelineFetchAllChangesRequests;
- (id)altDSIDsToManateeAvailabilitiesOverrides;
- (id)customMetricsServiceBaseURL;
- (void)setShouldProfileSQL:(BOOL)a0;
- (void)setCustomMetricsServiceBaseURL:(id)a0;
- (void)setCustomDeviceServiceBaseURL:(id)a0;
- (BOOL)CDPWalrusOverride;
- (int)clientThrottleQueueWidth;
- (void)_setArrayPref:(id)a0 forKey:(id)a1;
- (id)setupBaseURL;
- (id)_getDictionaryOptionForKey:(id)a0 defaultValue:(id)a1;
- (void)setTranscoderPermittedRemoteMeasurement:(id)a0;
- (void)setIsDASRateLimitingDisabled:(id)a0;
- (void)setMaximumMergeableDeltaRequestSize:(unsigned long long)a0;
- (id)customCloudDBBaseURL;
- (id)containerIdentifierToForceFatalManateeZoneDecryptionFailure;
- (double)PCSCacheMinTime;
- (void)setSqlBatchCount:(long long)a0;
- (void)setCFNetworkLogging:(BOOL)a0;
- (unsigned long long)maxPackageUploadsPerBatchWithDefaultValue:(unsigned long long)a0;
- (id)customShareServiceBaseURL;
- (id)shareURLToAccountIDSystemAcceptationOverrides;
- (void)setOptimisticPCS:(BOOL)a0;
- (void)setAltDSIDsToManateeAvailabilitiesOverrides:(id)a0;
- (void)setCustomCodeServiceBaseURL:(id)a0;
- (unsigned long long)assetEvictionGracePeriodWithDefaultValue:(unsigned long long)a0;
- (double)recordCacheExpireDelay;
- (void)setDisableCaching:(BOOL)a0;
- (void)setSharingOptionsSummaryString:(id)a0;
- (void)setFakeWalrusOverride:(BOOL)a0;
- (unsigned long long)assetEvictionGracePeriodOnHighWatermarkWithDefaultValue:(unsigned long long)a0;
- (unsigned long long)PCSCacheSize;
- (void)setDeviceCountOverride:(id)a0;
- (BOOL)useEncryption;
- (void)setSetupBaseURL:(id)a0;
- (void)_setPref:(id)a0 forKey:(id)a1;
- (id)transcoderServiceName;
- (double)shareAcceptorRetrievingDialogDelay;
- (void)setAltDSIDsToWalrusAvailabilitiesOverrides:(id)a0;
- (BOOL)sendDebugHeader;
- (id)transcoderPermittedRemoteMeasurement;
- (BOOL)sandboxCloudD;

@end
