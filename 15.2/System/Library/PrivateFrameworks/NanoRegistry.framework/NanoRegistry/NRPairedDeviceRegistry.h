@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NRPairedDeviceRegistry : NRRegistryClient <NRPairedDeviceRegistryXPCFrameworkDelegate> {
    BOOL _disconnected;
    unsigned short _lastCompatibilityState;
    NSMutableDictionary *_legacyDevices;
    NSObject<OS_dispatch_queue> *_pairedDeviceRegistryDeviceListQueue;
    NSObject<OS_dispatch_queue> *_pairedRegistryGetDevicesQueue;
    unsigned long long _lastStatus;
    NSMutableArray *_waitingForRegistryUpdateBlocks;
    unsigned long long _callCount;
}

@property (readonly, nonatomic) unsigned long long status;

+ (id)sharedInstance;
+ (id /* block */)activeDeviceSelectorBlock;
+ (BOOL)shouldBoostProcess;
+ (id /* block */)activePairedDeviceSelectorBlock;
+ (id /* block */)pairedDevicesSelectorBlock;
+ (Class)proxyClass;

- (id)devicesFromMigrationConsentRequestData:(id)a0;
- (id)_;
- (id)deviceForBluetoothID:(id)a0;
- (void)xpcHasNewOOBKey:(id)a0;
- (BOOL)supportsWatch;
- (unsigned int)switchIndex;
- (BOOL)watchNeedsGraduation;
- (void)userIsCheckingForUpdate;
- (id)getAllDevicesWithArchivedDevicesMatching:(id /* block */)a0;
- (void)retriggerUnpairInfoDialog;
- (BOOL)isPaired;
- (BOOL)isWatchSetupPushActive;
- (void)waitForWatchPairingExtendedMetadataForAdvertisedName:(id)a0 completion:(id /* block */)a1;
- (unsigned short)compatibilityState;
- (id)pairingID;
- (void)overrideSignalStrengthLimit:(long long)a0;
- (id)_getClientInfo;
- (void)setActivePairedDevice:(id)a0 operationHasCompleted:(id /* block */)a1;
- (void)beginDiscovery;
- (void)abortPairingWithReason:(id)a0;
- (id)pairingStorePath;
- (id)serverRequestReporterWithType:(id)a0;
- (void)startWatchSetupPush;
- (id)waitForActiveOrAltAccountDevice;
- (void)threadIsBlockedWaitingOn_nanoregistryd_syncGrabLegacyRegistryWithBlock:(id /* block */)a0;
- (id)deviceIDForIDSDevice:(id)a0;
- (void)putMigrationChallengeCharacteristicWriteData:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)applyDiff:(id)a0;
- (id)getAllDevicesWithArchivedDevices;
- (void)pairWithSimulator:(id)a0 withQueue:(id)a1 withCompletion:(id /* block */)a2;
- (id)waitForActivePairedDevice;
- (void)logCallFrequency;
- (id)getAllDevices;
- (id)deviceForBTDeviceID:(id)a0;
- (void)companionOOBDiscoverAndPairWithName:(id)a0 withOutOfBandPairingKey:(id)a1 withOptions:(id)a2 operationHasBegun:(id /* block */)a3;
- (id)initWithBoost:(BOOL)a0;
- (unsigned long long)_getStatusWithCollection:(id)a0;
- (void)_pingActiveGizmoWithPriority:(long long)a0 withMessageSize:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (void)setMigrationConsented:(BOOL)a0 forDevice:(id)a1 withBlock:(id /* block */)a2;
- (void)unpairWithDevice:(id)a0 withOptions:(id)a1 operationHasBegun:(id /* block */)a2;
- (void)keepPhoneUnlockedInternalTestSPI:(id /* block */)a0;
- (void)abortPairing;
- (unsigned long long)lastSyncSwitchIndex;
- (BOOL)pairedDeviceSupportQuickSwitch;
- (id)deviceForIDSDevice:(id)a0;
- (void)getMigrationPairingCharacteristicReadDataWithQueue:(id)a0 completion:(id /* block */)a1;
- (void)waitForPairingStorePathPairingID:(id /* block */)a0;
- (void)getSwitchEventsFromIndex:(unsigned int)a0 inlineCallback:(id /* block */)a1;
- (void)waitForAltAccountPairingStorePathPairingID:(id /* block */)a0;
- (void)switchToSimulator:(id)a0 withQueue:(id)a1 withCompletion:(id /* block */)a2;
- (long long)minPairingCompatibilityVersion;
- (id)lastMigrationRequestPhoneName;
- (void)endDiscovery;
- (id)waitForActiveDevice;
- (void)_getActiveDeviceAssertionsWithInlineBlock:(id /* block */)a0;
- (id)_getChangeHistory;
- (id)deviceForPairingID:(id)a0;
- (void)suspendPairingClientCrashMonitoring;
- (long long)minQuickSwitchCompatibilityVersion;
- (long long)pairingCompatibilityVersion;
- (void)pairingClientDidEnterPhase:(id)a0;
- (void).cxx_destruct;
- (void)xpcDeviceID:(id)a0 needsPasscode:(id)a1;
- (id)blockAndQueryVersions;
- (id)deviceIDForNRDevice:(id)a0;
- (void)unpairWithDevice:(id)a0 shouldObliterate:(BOOL)a1 operationHasBegun:(id /* block */)a2;
- (void)setWatchNeedsGraduation:(id /* block */)a0;
- (void)notifyActivationCompleted:(id)a0 withSuccess:(BOOL)a1;
- (id)init;
- (id)_getLocalDeviceCollection;
- (id)nonActiveDeviceForBTDeviceID:(id)a0;
- (void)completeRTCPairingMetricForMetricID:(id)a0 withSuccess:(id /* block */)a1;
- (void)getDevicesWithBlock:(id /* block */)a0;
- (void)pairingClientSetAltAccountName:(id)a0 forDevice:(id)a1 completion:(id /* block */)a2;
- (id)_deviceIDAtSwitchIndex:(unsigned int)a0 date:(id *)a1;
- (id)migrationConsentRequestData;
- (void)pairingStorePathPairingID:(id /* block */)a0;
- (long long)maxTinkerPairedDeviceCount;
- (void)notifyPasscode:(id)a0 forDevice:(id)a1;
- (long long)maxPairingCompatibilityVersion;
- (void)altAccountPairingStorePathPairingID:(id /* block */)a0;
- (BOOL)isKeychainEnabled;
- (id)getActivePairedDevice;
- (id)waitForActivePairedOrAltAccountDevice;
- (void)pairingClientSetAltAccountName:(id)a0 altDSID:(id)a1 forDevice:(id)a2 completion:(id /* block */)a3;
- (id)nonActiveDeviceForIDSDevice:(id)a0;
- (void)pairingClientSetPairingParentName:(id)a0 pairingParentAltDSID:(id)a1 forDevice:(id)a2 completion:(id /* block */)a3;
- (id)nonActiveDeviceForBluetoothID:(id)a0;
- (void)companionPasscodePairWithDevice:(id)a0 withOptions:(id)a1 operationHasBegun:(id /* block */)a2;
- (void)_invalidateActiveDeviceAssertionWithIdentifier:(id)a0;
- (void)sendDevicesUpdatedNotification;
- (void)notifyPairingShouldContinue;
- (void)clearWatchNeedsGraduation:(id /* block */)a0;
- (void)beginMigrationWithDevice:(id)a0 withCompletion:(id /* block */)a1;
- (void)setActivePairedDevice:(id)a0 withActiveDeviceAssertionHandler:(id /* block */)a1;
- (long long)maxPairedDeviceCount;
- (void)beginMigrationWithDevice:(id)a0 passcode:(id)a1 withBlock:(id /* block */)a2;
- (void)enterCompatibilityState:(unsigned short)a0 forDevice:(id)a1;
- (void)checkIfFlaggedForRecoveryWithCompletion:(id /* block */)a0;
- (id)getAllDevicesWithArchivedAltAccountDevicesMatching:(id /* block */)a0;
- (void)_submitServerRequestReportWithRequestType:(id)a0 duration:(double)a1 errorCode:(unsigned int)a2;
- (BOOL)supportsPairedDevice;
- (void)isPhoneReadyToMigrateDevice:(id)a0 withCompletion:(id /* block */)a1;
- (id)_getSecureProperties:(id)a0;
- (id)getPairedDevices;
- (void)clearRecoveryFlagWithCompletion:(id /* block */)a0;
- (void)resumePairingClientCrashMonitoring;
- (BOOL)pairedDeviceCountIsLessThanMaxTinkerPairedDevices;
- (void)unpairWithSimulator:(id)a0 withQueue:(id)a1 withCompletion:(id /* block */)a2;
- (void)gizmoOOBAdvertiseAndPairWithName:(id)a0 operationHasBegun:(id /* block */)a1;
- (id)initWithBoost:(BOOL)a0 disconnected:(BOOL)a1;
- (void)stopWatchSetupPush;
- (BOOL)isAssertionActive:(id)a0;
- (BOOL)hasCompletedInitialSyncForPairingID:(id)a0;
- (void)setActivePairedDevice:(id)a0 isMagicSwitch:(BOOL)a1 operationHasCompleted:(id /* block */)a2;
- (void)setMigrationConsented:(BOOL)a0 forDeviceID:(id)a1 withBlock:(id /* block */)a2;
- (id)deviceForNRDevice:(id)a0 fromIDSDevices:(id)a1;
- (void)gizmoPasscodeAdvertiseAndPairWithName:(id)a0 operationHasBegun:(id /* block */)a1;
- (id)getDevicesMatching:(id /* block */)a0;
- (void)_submitAlbertPairingReport;
- (BOOL)pairedDeviceCountIsLessThanMaxPairedDevices;
- (void)fakePairedSyncIsCompleteWithCompletion:(id /* block */)a0;
- (unsigned long long)migrationCountForPairingID:(id)a0;
- (id)getDevices;

@end
