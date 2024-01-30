@class HMFTimer, NSString, HMIAnalysisStateUpdate, NSUUID, NSObject, HMIAnalysisStateManager;
@protocol HMDHomeResidentMessagingContext, OS_dispatch_queue;

@interface HMDCameraAnalysisStatePublisher : HMFObject <HMFLogging, HMFMessageReceiver, HMFTimerDelegate, HMIAnalysisStateManagerDelegate>

@property (weak) id<HMDHomeResidentMessagingContext> messagingContext;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFTimer *cameraAnalysisStatePublisherDebounceTimer;
@property (retain) HMIAnalysisStateUpdate *stateUpdate;
@property (readonly) HMIAnalysisStateManager *analysisStateManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (void)_handleRemoteAnalysisStateUpdate:(id)a0;
- (void)_processStateUpdate:(id)a0;
- (void)_publishAnalysisStateUpdate;
- (void)configureWithHome:(id)a0;
- (id)initWithHomeMessagingContext:(id)a0 analysisStateManager:(id)a1 workQueue:(id)a2 cameraAnalysisStatePublisherDebounceTimer:(id)a3;
- (void)stateManager:(id)a0 didReceiveLocalUpdate:(id)a1;

@end
