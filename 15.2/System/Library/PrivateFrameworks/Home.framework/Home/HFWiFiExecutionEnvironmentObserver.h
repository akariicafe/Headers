@class HFHomeKitDispatcher, NSString, HFExecutionEnvironment, HMHome;

@interface HFWiFiExecutionEnvironmentObserver : NSObject <HFHomeManagerObserver, HFExecutionEnvironmentObserver>

@property (retain, nonatomic) HMHome *lastKnownHome;
@property (nonatomic) unsigned long long lastKnownRunningState;
@property (readonly, weak, nonatomic) HFExecutionEnvironment *environment;
@property (readonly, weak, nonatomic) HFHomeKitDispatcher *dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateState;
- (void)homeKitDispatcher:(id)a0 manager:(id)a1 didChangeHome:(id)a2;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)a0;
- (void)executionEnvironmentDidBecomeActive:(id)a0;
- (void)executionEnvironmentDidEnterBackground:(id)a0;
- (id)initWithExecutionEnvironment:(id)a0 dispatcher:(id)a1;

@end
