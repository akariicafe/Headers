@class NSString, NSObject;
@protocol OS_dispatch_queue, SFAutoUnlockManagerDelegate;

@interface SFAutoUnlockManager : NSObject <SFUnlockClientProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic) id<SFAutoUnlockManagerDelegate> delegate;
@property (readonly, nonatomic) double spinnerDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)autoUnlockSupported;
+ (BOOL)autoUnlockEnabled:(unsigned int)a0;
+ (BOOL)bluetoothAndWiFiEnabled;
+ (void)enableBluetoothAndWiFi;

- (id)init;
- (void).cxx_destruct;
- (void)repairCloudPairing;
- (void)eligibleAutoUnlockDevicesWithCompletionHandler:(id /* block */)a0;
- (void)onDelegateQueue_notifyDelegateOfEnableError:(id)a0 device:(id)a1;
- (void)cancelEnablingAutoUnlockForDevice:(id)a0;
- (void)disableAutoUnlockForDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)onDelegateQueue_notifyDelegateOfAttemptError:(id)a0;
- (void)cancelAutoUnlock;
- (void)autoUnlockStateWithCompletionHandler:(id /* block */)a0;
- (void)authPromptInfoWithCompletionHandler:(id /* block */)a0;
- (void)keyDeviceLocked:(id)a0;
- (void)enabledDevice:(id)a0;
- (void)failedToEnableDevice:(id)a0 error:(id)a1;
- (void)beganAttemptWithDevice:(id)a0;
- (void)completedUnlockWithDevice:(id)a0;
- (void)failedUnlockWithError:(id)a0;
- (void)enableAutoUnlockWithDevice:(id)a0 passcode:(id)a1;
- (void)attemptAutoUnlock;

@end
