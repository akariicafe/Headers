@class HMDSiriServer, NSString, HMDAccessory, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDTargetControlManager : HMFObject <HMFLogging> {
    id<HMFLocking> _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSMutableArray *activeControlServices;
@property (readonly, nonatomic) NSMutableArray *eventReceivers;
@property (readonly, nonatomic) NSString *logID;
@property (retain, nonatomic) HMDSiriServer *siriServer;
@property (readonly, weak, nonatomic) HMDAccessory *targetAccessory;
@property (readonly, nonatomic) NSMutableArray *configuredControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)addReceiver:(id)a0;
- (void)removeReceiver:(id)a0;
- (id)logIdentifier;
- (void)invalidate;
- (void)__accessoryNameUpdated:(id)a0;
- (void)__accessoryConnected:(id)a0;
- (void)__accessoryDisconnected:(id)a0;
- (void)__accessoryRemoved:(id)a0;
- (void)__targetAccessoryConfiguredForControl:(id)a0;
- (void)__targetAccessoryUnconfiguredForControl:(id)a0;
- (void)__controllerRefreshedConfiguration:(id)a0;
- (void)__activeSelectionChanged:(id)a0;
- (void)__activeSelectionReset:(id)a0;
- (void)__characteristicsEventsReceived:(id)a0;
- (void)__accessoryAdded:(id)a0;
- (void)__serviceRemoved:(id)a0;
- (void)_addController:(id)a0;
- (id)__getOrCreateEventReceiver:(id)a0;
- (void)_handleTargetControlServiceDeselection:(id)a0;
- (void)_targetAccessoryUnconfiguredWithController:(id)a0;
- (id)__selectButtonConfiguration:(id)a0 receiver:(id)a1;
- (void)_targetAccessoryConfiguredWithController:(id)a0;
- (void)_targetAccessoryRefreshConfigurationWithController:(id)a0 userInfo:(id)a1;
- (void)_handleControllerDisconnected:(id)a0;
- (void)_removeController:(id)a0;
- (void)_handleButtonEvent:(id)a0 fromControlService:(id)a1;
- (void)removeControlService:(id)a0;
- (void)addControlService:(id)a0;
- (void)_handleTargetControlServiceSelection:(id)a0;
- (id)initWithTargetAccessory:(id)a0 controllers:(id)a1;
- (void)addTargetControllers:(id)a0;

@end
