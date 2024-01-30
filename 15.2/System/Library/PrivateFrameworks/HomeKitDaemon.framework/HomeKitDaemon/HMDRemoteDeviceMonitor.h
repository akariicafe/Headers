@class HMDAppleAccountManager, HMDRemoteAccountManager, NSMapTable, IDSAccount, NSObject, IDSService, NSString, HMDIDSActivityMonitorObserver, NSOperationQueue, NSArray, HMFNetMonitor, HMDAccountRegistry, HMFTimer;
@protocol HMFLocking, HMDRemoteDeviceMonitorOperationFactory, OS_dispatch_queue, HMDRemoteDeviceMonitorTimerFactory;

@interface HMDRemoteDeviceMonitor : HMFObject <HMFLogging, HMFTimerDelegate, IDSServiceDelegate, IDSAccountDelegate, IDSAccountRegistrationDelegate, HMDIDSActivityMonitorObserverDelegate, HMFNetMonitorDelegate, HMDRemoteDeviceMonitorTimerFactory, HMDRemoteDeviceMonitorOperationFactory> {
    id<HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    NSMapTable *_devices;
    BOOL _started;
    IDSService *_service;
    IDSAccount *_iCloudAccount;
    HMDIDSActivityMonitorObserver *_activityObserver;
    HMDAppleAccountManager *_accountManager;
    HMDRemoteAccountManager *_remoteAccountManager;
    HMFNetMonitor *_netMonitor;
    id<HMDRemoteDeviceMonitorTimerFactory> _timerFactory;
    id<HMDRemoteDeviceMonitorOperationFactory> _operationFactory;
    HMFTimer *_deviceHealthTimer;
    HMFTimer *_initialDeviceHealthTimer;
}

@property (readonly, nonatomic) HMDAccountRegistry *accountRegistry;
@property (readonly, getter=isReachable) BOOL reachable;
@property (readonly) NSArray *unreachableDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)pingMessageForDevice:(id)a0 timeout:(double)a1 restriction:(unsigned long long)a2;

- (id)dumpState;
- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)timerDidFire:(id)a0;
- (void)account:(id)a0 loginChanged:(id)a1;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)networkMonitorIsReachable:(id)a0;
- (void)dealloc;
- (void)account:(id)a0 isActiveChanged:(BOOL)a1;
- (void)networkMonitorIsUnreachable:(id)a0;
- (void)confirmDevice:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)startMonitoringDevice:(id)a0;
- (id)initWithAccountRegistry:(id)a0 activityObserver:(id)a1;
- (void)observer:(id)a0 didUpdateDevice:(id)a1 isOnline:(BOOL)a2;
- (id)newSendMessageOperationWithMessage:(id)a0;
- (id)newConfirmationHandlerOperationWithTimeout:(double)a0;
- (id)newInitialDeviceHealthTimer;
- (id)newRepeatingDeviceHealthTimer;
- (id)newDeviceMonitoringTimer;
- (id)initWithAccountRegistry:(id)a0 activityObserver:(id)a1 queue:(id)a2 IDSService:(id)a3 accountManager:(id)a4 remoteAccountManager:(id)a5 netMonitor:(id)a6 timerFactory:(id)a7 operationFactory:(id)a8;
- (void)stopMonitoringDevice:(id)a0;
- (void)_handleGlobalReachabilityChange;
- (void)handleCurrentDeviceUpdate:(id)a0;
- (void)handleDeviceRemovedFromAccount:(id)a0;
- (void)handleAccountRemoved:(id)a0;
- (void)_handleIncomingMessageForDevice:(id)a0;

@end
