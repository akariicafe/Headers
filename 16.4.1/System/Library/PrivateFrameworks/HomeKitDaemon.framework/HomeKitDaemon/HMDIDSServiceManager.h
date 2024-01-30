@class NSString, HMDIDSActivityMonitorObserver, HMDIDSActivityMonitor, HMDIDSActivityMonitorBroadcaster, NSMutableSet, NSObject, _HMDIDSProxyLinkPreferenceAssertion;
@protocol HMDIDSService, OS_dispatch_queue, HMDIDSServiceManagerNotificationCenter;

@interface HMDIDSServiceManager : HMFObject <HMFLogging> {
    NSMutableSet *_applicationBundleIdentifiersThatNeedWakingMessages;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDIDSActivityMonitor *_activityMonitor;
    _HMDIDSProxyLinkPreferenceAssertion *_proxyLinkPreferenceAssertion;
    id<HMDIDSServiceManagerNotificationCenter> _notificationCenter;
}

@property (class, readonly) HMDIDSServiceManager *sharedManager;
@property (class, readonly, copy) NSString *sharedIDSServiceName;

@property (readonly) id<HMDIDSService> service;
@property (readonly) id<HMDIDSService> legacyService;
@property (readonly) id<HMDIDSService> proxyService;
@property (readonly) id<HMDIDSService> streamService;
@property (readonly) HMDIDSActivityMonitorBroadcaster *activityBroadcaster;
@property (readonly) HMDIDSActivityMonitorObserver *activityObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (id)initWithDefaults;
- (void).cxx_destruct;
- (void)retrieveFirewallWithQueue:(id)a0 completion:(id /* block */)a1;
- (void)unconfigure;
- (void)addProxyServiceLinkPreferencesAssertionHolder:(id)a0;
- (void)handleProcessInfoStateChanged:(id)a0;
- (void)setActivityMonitorDataSource:(id)a0;
- (id)initWithMainService:(id)a0 legacyService:(id)a1 proxyService:(id)a2 streamService:(id)a3 notificationCenter:(id)a4;

@end
