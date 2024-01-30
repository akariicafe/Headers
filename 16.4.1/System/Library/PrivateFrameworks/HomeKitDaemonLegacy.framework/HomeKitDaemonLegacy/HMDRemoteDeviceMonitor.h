@class HMDAppleAccountManager, HMDRemoteAccountManager, NSMapTable, IDSAccount, NSObject, NSString, HMDIDSActivityMonitorObserver, HMDModernTransportDeviceReachabilityObserver, NSOperationQueue, NSArray, HMFNetMonitor, HMDAccountRegistry, HMFTimer;
@protocol OS_dispatch_queue, HMDIDSService, HMDRemoteDeviceMonitorFactory;

@interface HMDRemoteDeviceMonitor : HMFObject <HMFLogging, HMFTimerDelegate, HMDIDSServiceDelegate, IDSAccountDelegate, IDSAccountRegistrationDelegate, HMDIDSActivityMonitorObserverDelegate, HMFNetMonitorDelegate, HMDRemoteDeviceMonitorFactory, HMDRemoteDeviceMonitorDeviceRegistrationClient, HMDModernTransportDeviceReachabilityObserverListener> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    HMDModernTransportDeviceReachabilityObserver *_transportReachabilityObserver;
    BOOL _started;
    id<HMDIDSService> _service;
    id<HMDIDSService> _modernService;
    IDSAccount *_iCloudAccount;
    HMDIDSActivityMonitorObserver *_activityObserver;
    HMDAppleAccountManager *_accountManager;
    HMDRemoteAccountManager *_remoteAccountManager;
    HMFNetMonitor *_netMonitor;
    id<HMDRemoteDeviceMonitorFactory> _factory;
    NSMapTable *_deviceInformationByDevice;
    HMFTimer *_deviceHealthTimer;
    HMFTimer *_initialDeviceHealthTimer;
}

@property (retain, nonatomic) HMDModernTransportDeviceReachabilityObserver *transportReachabilityObserver;
@property (readonly, nonatomic) HMDAccountRegistry *accountRegistry;
@property (readonly, getter=isReachable) BOOL reachable;
@property (readonly) NSArray *unreachableDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)pingMessageForDevice:(id)a0 timeout:(double)a1 restriction:(unsigned long long)a2;

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)account:(id)a0 isActiveChanged:(BOOL)a1;
- (void)timerDidFire:(id)a0;
- (void)account:(id)a0 loginChanged:(id)a1;
- (id)dumpState;
- (void)dealloc;
- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (void)networkMonitorIsReachable:(id)a0;
- (void)networkMonitorIsUnreachable:(id)a0;
- (void)handleDeviceRemovedFromAccount:(id)a0;
- (void)modernTransportDeviceReachabilityObserverDidUpdate:(id)a0 isReachable:(BOOL)a1;
- (void)_handleGlobalReachabilityChange;
- (void)stopMonitoringDevice:(id)a0 forClient:(id)a1;
- (void)_handleIncomingMessageForDevice:(id)a0;
- (void)confirmDevice:(id)a0 forClient:(id)a1 timeout:(double)a2 completionHandler:(id /* block */)a3;
- (void)handleAccountRemoved:(id)a0;
- (void)handleCurrentDeviceUpdate:(id)a0;
- (id)initWithAccountRegistry:(id)a0 activityObserver:(id)a1 accountManager:(id)a2;
- (id)initWithAccountRegistry:(id)a0 activityObserver:(id)a1 queue:(id)a2 service:(id)a3 modernService:(id)a4 accountManager:(id)a5 remoteAccountManager:(id)a6 netMonitor:(id)a7 factory:(id)a8;
- (id)newConfirmationHandlerWithTimeout:(double)a0 workQueue:(id)a1 handler:(id /* block */)a2;
- (id)newDeviceMonitoringTimer;
- (id)newInitialDeviceHealthTimer;
- (id)newRepeatingDeviceHealthTimer;
- (id)newSendMessageOperationWithMessage:(id)a0;
- (void)observer:(id)a0 didUpdateDevice:(id)a1 isOnline:(BOOL)a2;
- (void)startMonitoringDevice:(id)a0 withInitialReachability:(id)a1 forClient:(id)a2;

@end
