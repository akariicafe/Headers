@class NSString, NSMutableDictionary, HMDIDSActivityMonitor;
@protocol HMDIDSActivityMonitorObserverRegistrationManager, NSLocking;

@interface HMDIDSActivityMonitorObserver : NSObject <IDSActivityMonitorListenerDelegate, HMFLogging> {
    id<NSLocking> _lock;
}

@property (readonly) HMDIDSActivityMonitor *activityMonitor;
@property (readonly) NSMutableDictionary *subactivityToDelegatesMap;
@property (retain) id<HMDIDSActivityMonitorObserverRegistrationManager> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void)activityMonitor:(id)a0 didReceiveActivityUpdate:(id)a1;
- (void).cxx_destruct;
- (id)initWithActivityMonitor:(id)a0;
- (void)configureWithDataSource:(id)a0;
- (void)addObserver:(id)a0 forSubActivity:(id)a1;
- (void)removeObserver:(id)a0 forSubActivity:(id)a1;
- (void)startObservingPresenceForDevice:(id)a0;
- (void)stopObservingPresenceForDevice:(id)a0;

@end
