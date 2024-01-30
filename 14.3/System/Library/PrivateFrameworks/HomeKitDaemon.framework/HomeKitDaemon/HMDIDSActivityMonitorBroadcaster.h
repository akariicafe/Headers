@class HMFTimer, NSString, HMDIDSActivityMonitor, NSObject;
@protocol OS_dispatch_queue, HMDIDSActivityMonitorBroadcasterPushTokenDataSource;

@interface HMDIDSActivityMonitorBroadcaster : NSObject <HMFLogging, HMFTimerDelegate, HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate> {
    HMFTimer *_debounceTimer;
}

@property (readonly) HMDIDSActivityMonitor *activityMonitor;
@property (retain) id<HMDIDSActivityMonitorBroadcasterPushTokenDataSource> dataSource;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (id)initWithActivityMonitor:(id)a0;
- (id)logIdentifier;
- (void)configureWithQueue:(id)a0;
- (id)initWithActivityMonitor:(id)a0 timer:(id)a1;
- (void)dataSourceDidUpdate:(id)a0;

@end
