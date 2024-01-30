@class PLXPCListenerOperatorComposition, PLCFNotificationOperatorComposition;

@interface PLConfigAgent : PLAgent

@property (readonly) PLCFNotificationOperatorComposition *notificationKeyboardClicks;
@property (readonly) PLCFNotificationOperatorComposition *notificationKeyboardHaptics;
@property (retain) PLXPCListenerOperatorComposition *photoSharingListener;
@property (readonly) PLXPCListenerOperatorComposition *continuityCameraNotification;

+ (id)entryEventForwardDefinitions;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionKeyboardClicks;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitionKeyboardHaptics;
+ (id)defaults;
+ (void)load;
+ (id)entryEventForwardDefinitionContinuityCamera;
+ (id)entryEventNoneDefinitionConfig;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventNoneDefinitionPairedDeviceConfig;
+ (id)entryEventForwardDefintionRinger;
+ (long long)getOSVersionNumber;
+ (void)removeFilesFromPath:(id)a0 withMaxFiles:(long long)a1;
+ (id)entryEventForwardDefinitionPhotoSharing;
+ (id)entryEventNoneDefinitionAdapterInformation;
+ (id)getVersionDirectory:(long long)a0;
+ (void)resetRAPIDTaskingConfig;

- (void)initOperatorDependancies;
- (id)deviceShutdownReasons;
- (id)baseband;
- (void)logEventForwardKeyboardClicks;
- (id)hwConfig;
- (id)hwBoardRevision;
- (void)logEventForwardKeyboardHaptics;
- (id)bootArgs;
- (id)seedGroup;
- (void)copyPowerlogsForPreUpgradeOSVersion:(long long)a0;
- (id)deviceName;
- (void)logEventForwardRingerState;
- (BOOL)getMDMStatus;
- (id)logIcloudAccountType;
- (void)log;
- (void)logEventForwardPhotoSharing:(id)a0;
- (unsigned long long)volumeFreespace:(id)a0;
- (id)logAndUpdateLastBuild:(id)a0;
- (void)logEventNoneConfig;
- (unsigned long long)getEnclosureMaterial;
- (id)logLastBackupTime;
- (void)fileSizeSafeguards;
- (void)logToPPTBuild:(id)a0 atDate:(id)a1;
- (double)logDeviceDiskSize;
- (void)logEventForwardContinuityCamera:(id)a0;
- (void)cleanupOldPowerlogs;
- (void)logEventNonePairedDeviceConfig;
- (int)getDeviceType;
- (BOOL)noWatchdogs;
- (void)logEntryToCA:(id)a0;
- (void)maintainPreUpgradePowerlogs;
- (void)dealloc;
- (int)getOSVariant;
- (void)pairStatusDidChange:(id)a0;
- (id)getSplatVersionString;
- (id)basebandFirmware;
- (long long)autolockTime;
- (id)init;
- (BOOL)disableCABlanking;
- (long long)checkAndUpdateOSVersion;
- (void)logConfigEntry:(id)a0;
- (id)crashReporterKey;
- (id)logAndUpdateLastUpgradeTime:(id)a0;
- (void).cxx_destruct;

@end
