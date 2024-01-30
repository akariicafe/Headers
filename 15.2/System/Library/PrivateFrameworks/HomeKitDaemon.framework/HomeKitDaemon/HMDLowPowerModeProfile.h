@class NSString, HMFTimer, HAPSuspendedAccessory;
@protocol HMDLowPowerModeProfileDelegate;

@interface HMDLowPowerModeProfile : HMDAccessoryProfile <HMFTimerDelegate>

@property (retain, nonatomic) NSString *clientIdentifier;
@property (nonatomic) unsigned long long internalState;
@property (nonatomic) unsigned long long internalOldState;
@property (nonatomic) unsigned long long retryCount;
@property (retain, nonatomic) HMFTimer *backoffTimer;
@property (weak, nonatomic) id<HMDLowPowerModeProfileDelegate> delegate;
@property (retain, nonatomic) HAPSuspendedAccessory *suspendedAccessory;
@property (retain, nonatomic) HMFTimer *waitForWakeTimer;
@property (copy, nonatomic) id /* block */ pendingWakeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)WoWLANInfoForSupportedSleepConfiguration:(id)a0;

- (void)timerDidFire:(id)a0;
- (void)enterState:(unsigned long long)a0;
- (void)_enterState:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)unconfigure;
- (unsigned long long)suspendedState;
- (void)registerForMessages;
- (id)hapAccessory;
- (id)connectivityInfo;
- (id)initWithAccessory:(id)a0 powerManagementservice:(id)a1 workQueue:(id)a2;
- (void)handleInitialState;
- (void)wakeSuspendedAccessoryWithCompletion:(id /* block */)a0;
- (void)wakeSuspendedAccessoryWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_wakeSuspendedAccessory:(id)a0 activity:(id)a1 completion:(id /* block */)a2;
- (void)_runStateMachine;
- (void)_resetStateMachine;
- (BOOL)_canEnterNewState:(unsigned long long)a0;
- (void)_stateMachine_backoffOperation;
- (void)_stateMachine_Idle;
- (void)_stateMachine_readAccessoryConfiguration;
- (void)_stateMachine_configureAccessory;
- (void)_stateMachine_unconfigureAccessory;
- (void)_readAccessorySelectedConfigWithCompletion:(id /* block */)a0;
- (void)_configureAccessoryWithCompletion:(id /* block */)a0;
- (void)_unconfigureAccessoryWithCompletion:(id /* block */)a0;
- (void)_queryAccessoryWithOperation:(long long)a0 completion:(id /* block */)a1;
- (void)_processSupportedSleepConfigurationParametersWithCharacteristic:(id)a0;
- (void)_processSelectedSleepConfigurationParametersWithCharacteristic:(id)a0;
- (void)_writeToCharacteristic:(id)a0 value:(id)a1 completion:(id /* block */)a2;
- (void)_readFromCharacteristic:(id)a0 completion:(id /* block */)a1;
- (void)_readInitialRequiredCharacteristics;
- (void)_updateCharacteristicsNotifications:(BOOL)a0;
- (BOOL)_shouldManageAccessoryLPM;
- (void)handleAccessoryCharacteristicsChanged:(id)a0;
- (void)handleAccessoryConnectionChanged:(id)a0;
- (id)powerManagementService;
- (id)selectedSleepConfigurationCharacteristic;
- (id)supportedSleepConfigurationCharacteristic;
- (id)newHAPSuspendedAccessoryFromAccessoryConnectivityInfoWithType:(unsigned long long)a0;
- (void)_startTimerForType:(unsigned long long)a0;
- (void)_stopBackoffTimerForType:(unsigned long long)a0;

@end
