@interface PLConfigAgent : PLAgent

+ (id)entryEventBackwardDefinitions;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (long long)getOSVersionNumber;
+ (id)entryEventNoneDefinitionConfig;
+ (id)getVersionDirectory:(long long)a0;
+ (id)entryEventNoneDefinitionPairedDeviceConfig;
+ (id)accountingGroupDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)entryEventNoneDefinitionAdapterInformation;
+ (id)railDefinitions;
+ (void)removeFilesFromPath:(id)a0 withMaxFiles:(long long)a1;

- (id)deviceShutdownReasons;
- (double)logDeviceDiskSize;
- (id)deviceName;
- (void)logEventNoneConfig;
- (BOOL)noWatchdogs;
- (id)logLastBackupTime;
- (int)getOSVariant;
- (void)copyPowerlogsForPreUpgradeOSVersion:(long long)a0;
- (id)hardwareModelConfig;
- (id)buildVersion;
- (unsigned long long)volumeFreespace:(id)a0;
- (id)seedGroup;
- (id)bootArgs;
- (long long)autolockTime;
- (id)logIcloudAccountType;
- (id)hwConfig;
- (BOOL)disableCABlanking;
- (id)hwBoardRevision;
- (id)logAndUpdateLastUpgradeTime:(id)a0;
- (void)log;
- (long long)checkAndUpdateOSVersion;
- (unsigned long long)getEnclosureMaterial;
- (id)init;
- (void)cleanupOldPowerlogs;
- (int)getDeviceType;
- (void)fileSizeSafeguards;
- (id)crashReporterKey;
- (id)basebandFirmware;
- (void)logEntryToAggD:(id)a0;
- (void)logEventNonePairedDeviceConfig;
- (void)dealloc;
- (void)maintainPreUpgradePowerlogs;
- (void)pairStatusDidChange:(id)a0;
- (void)initOperatorDependancies;
- (id)logAndUpdateLastBuild:(id)a0;
- (id)baseband;

@end
