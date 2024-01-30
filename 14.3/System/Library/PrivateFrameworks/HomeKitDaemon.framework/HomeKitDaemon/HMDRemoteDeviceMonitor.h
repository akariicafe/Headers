@class HMDIDSActivityMonitorObserver, HMFTimer, NSArray, NSString, IDSService, NSOperationQueue, HMDAccountRegistry, NSObject, HMFNetMonitor, NSMapTable;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDRemoteDeviceMonitor : HMFObject <HMFLogging, HMFTimerDelegate, IDSServiceDelegate, HMDIDSActivityMonitorObserverDelegate, HMFNetMonitorDelegate> {
    id<HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    NSMapTable *_devices;
}

@property (readonly, nonatomic) IDSService *service;
@property (readonly, nonatomic) HMDIDSActivityMonitorObserver *activityObserver;
@property (readonly, getter=isStarted) BOOL started;
@property (readonly, nonatomic) HMFNetMonitor *netMonitor;
@property (readonly, nonatomic) HMFTimer *deviceHealthTimer;
@property (readonly, nonatomic) HMDAccountRegistry *accountRegistry;
@property (readonly, getter=isReachable) BOOL reachable;
@property (readonly) NSArray *unreachableDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)pingMessageForDevice:(id)a0 timeout:(double)a1 restriction:(unsigned long long)a2;

- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)setReachable:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setStarted:(BOOL)a0;
- (void)dealloc;
- (void)timerDidFire:(id)a0;
- (id)devices;
- (id)dumpState;
- (void)start;
- (void)confirmDevice:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)networkMonitorIsReachable:(id)a0;
- (void)networkMonitorIsUnreachable:(id)a0;
- (void)startMonitoringDevice:(id)a0;
- (id)initWithAccountRegistry:(id)a0 activityObserver:(id)a1;
- (void)observer:(id)a0 didUpdateDevice:(id)a1 isOnline:(BOOL)a2;
- (void)handleCurrentDeviceUpdate:(id)a0;
- (void)handleAccountRemoved:(id)a0;
- (void)notifyDeviceReachabilityChange:(BOOL)a0 forDevice:(id)a1;
- (id)_startMonitoringDevice:(id)a0;
- (void)handleAddedDeviceInformation:(id)a0;
- (void)handleDeviceRemovedFromAccount:(id)a0;
- (void)handleRemovedDeviceInformation:(id)a0;
- (id)_deviceInformationForDevice:(id)a0;
- (void)_sendPingToDevice:(id)a0;
- (void)_startActivelyMonitoringDevice:(id)a0;
- (void)stopMonitoringDevice:(id)a0;
- (void)_handleGlobalReachabilityChange;
- (void)_stopActivelyMonitoringDevice:(id)a0;

@end
