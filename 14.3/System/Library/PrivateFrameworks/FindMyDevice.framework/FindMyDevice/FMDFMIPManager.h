@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface FMDFMIPManager : NSObject

@property (retain, nonatomic) NSURL *managedLostModeFileURL;
@property (retain, nonatomic) NSURL *needsLocateAckLostModeFileURL;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)sharedInstance;

- (void)disableFMIPUsingToken:(id)a0 inContext:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)fmipStateWithCompletion:(id /* block */)a0;
- (void)userNotifiedOfActivationLockForAllPairedDevices;
- (void)_disableFMIPUsingToken:(id)a0 inContext:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)startPlayingSoundForAccessory:(id)a0 duration:(double)a1 rampUpDuration:(double)a2 channels:(id)a3 completion:(id /* block */)a4;
- (id)init;
- (id)enableFMIPInContext:(unsigned long long)a0;
- (void)playSoundWithMessage:(id)a0 completion:(id /* block */)a1;
- (void)userNotifiedOfActivationLockForPairedDevices:(id)a0;
- (void).cxx_destruct;
- (id)getManagedLostModeFileURL;
- (void)waitForRoutableAccessory:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (void)stopPlayingSoundForAccessory:(id)a0 rampDownDuration:(double)a1 completion:(id /* block */)a2;
- (void)signatureHeadersWithData:(id)a0 completion:(id /* block */)a1;
- (id)getNeedsLocateAckLostModeFileURL;
- (void)disableFMIPForAccount:(id)a0 pairedDeviceWithUDID:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)lostModeIsActive;
- (void)enableManagedLostModeWithInfo:(id)a0 completion:(id /* block */)a1;
- (void)activationLockVersionWithCompletion:(id /* block */)a0;
- (void)disableFMIPUsingToken:(id)a0 forPairedDeviceWithUDID:(id)a1 withCompletion:(id /* block */)a2;
- (void)isActivationLockAllowedWithCompletion:(id /* block */)a0;
- (void)markPairedDeviceWithUDID:(id)a0 asMissingUsingToken:(id)a1 withCompletion:(id /* block */)a2;
- (void)clearData:(unsigned long long)a0 completion:(id /* block */)a1;
- (BOOL)lockdownShouldDisableDeviceRestore;
- (void)initiateLostModeExitAuthWithCompletion:(id /* block */)a0;
- (unsigned long long)_managedLostModeType;
- (id)enableLostModeWithInfo:(id)a0;
- (void)disableBiometricIDForLostModeWithCompletion:(id /* block */)a0;
- (void)setDailyLocateReportEnabled:(BOOL)a0;
- (void)didChangeFMIPAccountInfo:(id)a0;
- (void)addNotificationRequest:(id)a0 completion:(id /* block */)a1;
- (void)setLowBatteryLocateEnabled:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)showDailyLocateReport;
- (void)initiateLostModeExitAuthForIDSDeviceID:(id)a0 withCompletion:(id /* block */)a1;
- (void)disableLostMode;
- (void)_updateManagedLostModeWithInfo:(id)a0 completion:(id /* block */)a1;
- (void)lowBatteryLocateEnabledWithCompletion:(id /* block */)a0;
- (BOOL)lockdownShouldDisableDevicePairing;
- (void)didReceiveLostModeExitAuthToken:(id)a0;
- (void)audioAccessorySerialNumbersWithCompletion:(id /* block */)a0;
- (void)getAccessoriesWithCompletion:(id /* block */)a0;
- (BOOL)_checkLostModeInSharedContainer;
- (void)fmipAccountWithCompletion:(id /* block */)a0;
- (void)markAsMissingSupportedForPairedDeviceWithUDID:(id)a0 withCompletion:(id /* block */)a1;
- (id)fmipAccount;
- (id)lostModeInfo;
- (void)_stopAlarm;
- (id)pathsToPreserveAcrossWipe;
- (id)_postWipePrefPath;
- (id)disableFMIPUsingToken:(id)a0 inContext:(unsigned long long)a1;
- (void)userDidAckManagedLostModeLocateWithCompletion:(id /* block */)a0;
- (void)_initiateLostModeExitAuthForIDSDeviceID:(id)a0 withCompletion:(id /* block */)a1;
- (void)deviceActivationDidSucceed;
- (void)_getAccessoriesWithFilter:(id /* block */)a0 completion:(id /* block */)a1;
- (BOOL)needsLostModeExitAuth;
- (void)stopSoundMessageWithCompletion:(id /* block */)a0;
- (void)_updateNeedsLocateAckLostModeWithInfo:(id)a0 completion:(id /* block */)a1;
- (void)soundStoppedForAccessoryIdentifier:(id)a0;
- (BOOL)isLostModeActive;
- (BOOL)isManagedLostModeActive;
- (void)isActivationLockedWithCompletion:(id /* block */)a0;
- (void)playSoundWithOptions:(id)a0 completion:(id /* block */)a1;
- (BOOL)_quickFetchFMIPEnabledstate;
- (void)_forceFMWUpgradeAlertWithCompletion:(id /* block */)a0;
- (void)isActivationLockEnabledWithCompletion:(id /* block */)a0;
- (void)disableManagedLostModeWithLocatedMessage:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isRunningAsMobileUser;
- (void)enableActivationLockWithCompletion:(id /* block */)a0;
- (unsigned long long)_needsAckLostModeType;
- (id)newErrorForCode:(int)a0 message:(id)a1;

@end
