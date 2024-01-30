@class NSString, NSUserDefaults, NSObject;
@protocol OS_dispatch_queue, SFAutoUnlockManagerDelegate;

@interface SFAutoUnlockManager : NSObject <SFUnlockClientProtocol>

@property (class, readonly, nonatomic) NSUserDefaults *userDefaults;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (weak, nonatomic) id<SFAutoUnlockManagerDelegate> delegate;
@property (readonly, nonatomic) double spinnerDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)autoUnlockSupported;
+ (BOOL)mockedPhoneAutoUnlockSimulateMagnetBreak;
+ (float)mockedPhoneAutoUnlockSimulateManualReLock;
+ (BOOL)mockedPhoneAutoUnlockEnabled;
+ (BOOL)mockedPhoneAutoUnlockWiFiOff;
+ (BOOL)mockedPhoneAutoUnlockWatchHasWeakPasscode;
+ (BOOL)mockedPhoneAutoUnlockWatchWiFiOff;
+ (BOOL)mockedPhoneAutoUnlockFaceIDDisabled;
+ (BOOL)mockedPhoneAutoUnlockNoWatch;
+ (BOOL)bluetoothAndWiFiEnabled;
+ (long long)mockedPhoneAutoUnlockSimulateErrorCode;
+ (BOOL)mockedPhoneAutoUnlockWatchOffWrist;
+ (BOOL)mockedPhoneAutoUnlockAWDLUnavailable;
+ (BOOL)mockedAutoUnlockEnabled;
+ (BOOL)mockedPhoneAutoUnlockWatchNoMotion;
+ (BOOL)mockedPhoneAutoUnlockNoMask;
+ (BOOL)mockedPhoneAutoUnlockWatchAWDLUnavailable;
+ (BOOL)mockedPhoneAutoUnlockNoPairedWatch;
+ (BOOL)mockedPhoneAutoUnlockNeverUnlocked;
+ (BOOL)mockedPhoneAutoUnlockSimulateDevicesOutOfRange;
+ (BOOL)mockedPhoneAutoUnlockWatchSleepModeOn;
+ (void)enableBluetoothAndWiFi;
+ (void)mockedEnableBluetoothAndWiFi;
+ (BOOL)mockedPhoneAutoUnlockMaskUnlikely;
+ (BOOL)autoUnlockEnabled:(unsigned int)a0;
+ (BOOL)mockedPhoneAutoUnlockWatchWristDetectionDisabled;
+ (BOOL)mockedPhoneAutoUnlockInBioLockout;
+ (BOOL)mockedPhoneAutoUnlockSimulatePhoneMissedFinalConfirmationToUnlock;
+ (float)mockedPhoneAutoUnlockSimulateLatency;
+ (BOOL)autoUnlockEnabled;
+ (BOOL)mockedPhoneAutoUnlockWatchLocked;
+ (BOOL)mockedBluetoothAndWiFiEnabled;

- (void)enabledDevice:(id)a0;
- (void)cancelAutoUnlock;
- (void)repairCloudPairing;
- (void)mockedEligibleAutoUnlockDevicesWithCompletionHandler:(id /* block */)a0;
- (void)eligibleAutoUnlockDevicesWithCompletionHandler:(id /* block */)a0;
- (void)onDelegateQueue_notifyDelegateOfEnableError:(id)a0 device:(id)a1;
- (void)mockedEnableAutoUnlockWithDevice:(id)a0;
- (void)cancelEnablingAutoUnlockForDevice:(id)a0;
- (void)mockedDisableAutoUnlockForDevice:(id /* block */)a0;
- (void)beganAttemptWithDevice:(id)a0;
- (void)disableAutoUnlockForDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)onDelegateQueue_notifyDelegateOfAttemptError:(id)a0;
- (void)completedUnlockWithDevice:(id)a0;
- (void)deviceRequestedRelock:(id)a0;
- (void)prewarmAutoUnlock;
- (void)completeAutoUnlockWithNotification:(BOOL)a0;
- (void)donateDeviceUnlockedWithMask:(BOOL)a0;
- (void)mockedAttemptAutoUnlock;
- (void)failedUnlockWithError:(id)a0;
- (void)mockedCancelUnlock;
- (void)autoUnlockStateWithCompletionHandler:(id /* block */)a0;
- (void)authPromptInfoWithCompletionHandler:(id /* block */)a0;
- (void)keyDeviceLocked:(id)a0;
- (void)failedToEnableDevice:(id)a0 error:(id)a1;
- (void)enableAutoUnlockWithDevice:(id)a0 passcode:(id)a1;
- (void)declinedToEnablePhoneAutoUnlock;
- (void)attemptAutoUnlock;
- (void)clearPhoneAutoUnlockBehaviorChangeNotification;
- (void)attemptAutoUnlockWithoutNotifyingWatch;
- (void)attemptAutoUnlockForSiri;
- (void)requestRelock;
- (void).cxx_destruct;
- (id)init;

@end
