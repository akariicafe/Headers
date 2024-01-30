@class HMFTimer, HMDAccessoryFirmwareUpdateProfile, NSBackgroundActivityScheduler, NSString, HMDAccessoryFirmwareUpdateSession, HMDHAPAccessory, NSObject;
@protocol HMDAccessoryFirmwareUpdatePolicy, HMDAccessoryFirmwareUpdateTask, OS_dispatch_queue, HMDAccessoryFirmwareUpdateSchedulerWingman;

@interface HMDAccessoryFirmwareUpdateScheduler : NSObject <HMFLogging, HMFTimerDelegate>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly, weak) HMDAccessoryFirmwareUpdateSession *updateSession;
@property (readonly) id<HMDAccessoryFirmwareUpdateSchedulerWingman> wingman;
@property (retain, nonatomic) HMFTimer *initialDelayTimer;
@property (retain, nonatomic) NSBackgroundActivityScheduler *backgroundScheduler;
@property (copy, nonatomic) id /* block */ activityCompletion;
@property (retain, nonatomic) HMFTimer *deferCheckTimer;
@property (retain, nonatomic) id<HMDAccessoryFirmwareUpdateTask> currentTask;
@property (nonatomic) long long currentState;
@property (readonly, nonatomic) BOOL needsToStop;
@property (readonly, nonatomic) BOOL needsToScheduleStaging;
@property (readonly, nonatomic) BOOL needsToScheduleApply;
@property (readonly, nonatomic) BOOL needsToScheduleRecovery;
@property (readonly, nonatomic, getter=isIdle) BOOL idle;
@property BOOL BLEAccessoryConnected;
@property (readonly, nonatomic, getter=isStagingInProgress) BOOL stagingInProgress;
@property (retain, nonatomic) id<HMDAccessoryFirmwareUpdatePolicy> updatePolicy;
@property (readonly, nonatomic) HMDAccessoryFirmwareUpdateProfile *updateProfile;
@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)_stop;
- (void)_registerForNotifications;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_defer;
- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void)handleAccessoryConnected:(id)a0;
- (void)handleAccessoryDisconnected:(id)a0;
- (id)initWithAccessory:(id)a0 firmwareUpdateSession:(id)a1 wingman:(id)a2 workQueue:(id)a3;
- (void)handleUpdateStateChanged:(id)a0;
- (void)handleStagingNotReadyReasonsChanged:(id)a0;
- (void)handleApplyNotReadyReasonsChanged:(id)a0;
- (void)handleAccessoryReachabilityChanged:(id)a0;
- (void)handlePrimaryResidentChanged:(id)a0;
- (void)handleBridgeUpdate:(id)a0;
- (void)_handleSchedulingConditionChanged;
- (void)_logDebugStates;
- (void)scheduleWithDelay:(BOOL)a0;
- (void)_invalidateExistingScheduling;
- (void)_removePolicy;
- (void)_createPolicy;
- (void)_scheduleCurrentTask;
- (void)_stopInitialDelayTimer;
- (void)_stopDeferCheckTimer;
- (void)_startTaskInitialDelayTimer;
- (void)_startDeferCheckTimer;
- (void)_scheduleCurrentTaskBackgroundRun;
- (void)handlePolicyStatusChange:(id)a0;
- (id)initWithAccessory:(id)a0 firmwareUpdateSession:(id)a1 workQueue:(id)a2;

@end
