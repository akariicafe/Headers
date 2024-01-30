@interface PLConfigAgent : PLAgent

+ (void)load;
+ (id)defaults;
+ (id)railDefinitions;
+ (id)getVersionDirectory:(long long)a0;
+ (long long)getOSVersionNumber;
+ (id)accountingGroupDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventNoneDefinitionConfig;
+ (id)entryEventBackwardDefinitions;
+ (void)removeFilesFromPath:(id)a0 withMaxFiles:(long long)a1;
+ (id)entryEventNoneDefinitionPairedDeviceConfig;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;

- (id)baseband;
- (id)deviceName;
- (id)init;
- (void)copyPowerlogsForPreUpgradeOSVersion:(long long)a0;
- (unsigned long long)getEnclosureMaterial;
- (void)dealloc;
- (id)logAutomatedDeviceGroup;
- (void)fileSizeSafeguards;
- (void)logEntryToAggD:(id)a0;
- (void)log;
- (long long)autolockTime;
- (id)seedGroup;
- (id)bootArgs;
- (id)hardwareModelConfig;
- (void)logEventNonePairedDeviceConfig;
- (id)crashReporterKey;
- (int)getDeviceType;
- (id)logIcloudAccountType;
- (BOOL)disableCABlanking;
- (double)logDeviceDiskSize;
- (id)basebandFirmware;
- (long long)checkAndUpdateOSVersion;
- (void)cleanupOldPowerlogs;
- (BOOL)noWatchdogs;
- (id)hwBoardRevision;
- (void)logEventNoneConfig;
- (id)deviceShutdownReasons;
- (id)logAndUpdateLastUpgradeTime:(id)a0;
- (void)maintainPreUpgradePowerlogs;
- (int)getOSVariant;
- (id)buildVersion;
- (void)initOperatorDependancies;
- (id)logLastBackupTime;
- (id)logAndUpdateLastBuild:(id)a0;
- (id)hwConfig;
- (void)pairStatusDidChange:(id)a0;

@end
