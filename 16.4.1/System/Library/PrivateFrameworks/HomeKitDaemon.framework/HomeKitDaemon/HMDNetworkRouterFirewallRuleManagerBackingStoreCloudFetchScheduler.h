@class NSString, NSObject;
@protocol OS_xpc_object, HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler : HMFObject <HMFLogging, HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler>

@property (nonatomic, getter=isRunning) BOOL running;
@property (retain, nonatomic) NSObject<OS_xpc_object> *runningActivity;
@property (retain, nonatomic) NSObject<OS_xpc_object> *overrideCriteria;
@property (readonly, nonatomic) double currentInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) double retryInterval;
@property (readonly, weak, nonatomic) id<HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate> delegate;

+ (id)logCategory;
+ (void)__unregisterActivity:(id)a0;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)__checkInActivity:(id)a0;
- (id)__initialCriteria;
- (void)__registerActivity;
- (void)__runActivity:(id)a0;
- (void)__transitionActivity:(id)a0 state:(long long)a1;
- (void)__unregisterActivity;
- (id)initWithIdentifier:(id)a0 interval:(double)a1 retryInterval:(double)a2 delegate:(id)a3;

@end
