@class HMFTimer, HMDAccessoryFirmwareUpdateProfile, NSBackgroundActivityScheduler, NSString, HMDAccessoryFirmwareUpdateSession, HMDHAPAccessory, NSObject;
@protocol HMDAccessoryFirmwareUpdatePolicy, HMDAccessoryFirmwareUpdateTask, OS_dispatch_queue, HMDAccessoryFirmwareUpdateSchedulerWingman;

@interface HMDAccessoryFirmwareUpdateScheduler : HMFObject <HMFLogging, HMFTimerDelegate>

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
@property (readonly, nonatomic) BOOL needsToScheduleRegister;
@property (readonly, nonatomic) BOOL needsToScheduleStaging;
@property (readonly, nonatomic) BOOL needsToScheduleApply;
@property (readonly, nonatomic, getter=isIdle) BOOL idle;
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
- (void)_startDeferCheckTimer;
- (void)timerDidFire:(id)a0;
- (void)_registerForNotifications;
- (id)privateDescription;
- (void)_stop;
- (id)logIdentifier;
- (void)_stopDeferCheckTimer;
- (void).cxx_destruct;
- (void)_defer;
- (void)dealloc;
- (void)handlePrimaryResidentChanged:(id)a0;
- (id)initWithAccessory:(id)a0 firmwareUpdateSession:(id)a1 workQueue:(id)a2;
- (id)initWithAccessory:(id)a0 firmwareUpdateSession:(id)a1 wingman:(id)a2 workQueue:(id)a3;
- (void)handleAccessoryReachabilityChanged:(id)a0;
- (void)handleUpdateStateChanged:(id)a0;
- (void)handleStagingNotReadyReasonsChanged:(id)a0;
- (void)handleApplyNotReadyReasonsChanged:(id)a0;
- (void)_handleSchedulingConditionChanged;
- (void)scheduleWithDelay:(BOOL)a0;
- (void)_invalidateExistingScheduling;
- (void)_scheduleCurrentTask;
- (void)_scheduleCurrentTaskBackgroundRun;
- (void)_taskCanRunInCurrentDevice:(id /* block */)a0;
- (void)_logDebugStates:(const char *)a0;
- (void)_startTaskInitialDelayTimer;
- (void)_stopInitialDelayTimer;
- (void)removeUpdatePolicy;
- (void)handlePolicyStatusChange:(id)a0;
- (void)_createUpdatePolicy;
- (void)_removeUpdatePolicy;
- (void)handleBridgeUpdate:(id)a0;

@end
