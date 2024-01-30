@class NSString, IDSActivityMonitor;
@protocol HMDIDSActivityMonitorDataSource;

@interface HMDIDSActivityMonitor : NSObject <HMFLogging>

@property (readonly) IDSActivityMonitor *activityMonitor;
@property (retain, nonatomic) id<HMDIDSActivityMonitorDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithActivity:(id)a0 serviceIdentifier:(id)a1;
- (id)logIdentifier;
- (void)listenWithDelegate:(id)a0;
- (void)broadcastSubActivity:(id)a0 toPushTokens:(id)a1;
- (void)stopBroadcastingSubActivity:(id)a0;

@end
