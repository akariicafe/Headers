@class NSString, IDSActivityMonitor;

@interface HMDIDSActivityMonitor : NSObject <HMFLogging>

@property (readonly) IDSActivityMonitor *activityMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (id)initWithActivity:(id)a0 serviceIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)broadcastSubActivity:(id)a0 toPushTokens:(id)a1;
- (void)listenWithDelegate:(id)a0;
- (void)stopBroadcastingSubActivity:(id)a0;

@end
