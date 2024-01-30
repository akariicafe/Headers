@class HMFTimer, NSString, HMDIDSActivityMonitor, NSObject;
@protocol OS_dispatch_queue, HMDXPCActivityInterfacing, HMDIDSActivityMonitorBroadcasterPushTokenDataSource;

@interface HMDIDSActivityMonitorBroadcaster : NSObject <HMFLogging, HMFTimerDelegate, HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate> {
    HMFTimer *_debounceTimer;
    BOOL _isBroadcasting;
}

@property (readonly) HMDIDSActivityMonitor *activityMonitor;
@property (retain) id<HMDIDSActivityMonitorBroadcasterPushTokenDataSource> dataSource;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) id<HMDXPCActivityInterfacing> xpcActivityInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)criteria;
+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithActivityMonitor:(id)a0;
- (void)_refreshBroadcastSubscription;
- (void)_registerForXPCPoll;
- (void)configureWithDataSource:(id)a0;
- (void)configureWithQueue:(id)a0;
- (void)dataSourceDidUpdate:(id)a0;
- (id)initWithActivityMonitor:(id)a0 timer:(id)a1 xpcActivityInterface:(id)a2;

@end
