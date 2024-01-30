@class IDSService, HMDIDSActivityMonitorBroadcaster, HMDIDSActivityMonitorObserver, HMDIDSActivityMonitor, _HMDIDSProxyLinkPreferenceAssertion, NSObject;
@protocol OS_dispatch_queue;

@interface HMDIDSServiceManager : HMFObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDIDSActivityMonitor *activityMonitor;
@property (weak) _HMDIDSProxyLinkPreferenceAssertion *proxyLinkPreferenceAssertion;
@property (readonly) IDSService *service;
@property (readonly) IDSService *proxyService;
@property (readonly) IDSService *streamService;
@property (readonly) HMDIDSActivityMonitorBroadcaster *activityBroadcaster;
@property (readonly) HMDIDSActivityMonitorObserver *activityObserver;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)setActivityMonitorDataSource:(id)a0;
- (void)setProxyServiceLinkPreferences:(id)a0;

@end
