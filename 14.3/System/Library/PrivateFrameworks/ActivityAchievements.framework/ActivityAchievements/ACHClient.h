@class HKPluginProxyProvider, NSString, NSObject;
@protocol OS_dispatch_queue, ACHServerInterface;

@interface ACHClient : NSObject <_HKXPCExportable>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) id<ACHServerInterface> serverProxy;
@property (retain, nonatomic) HKPluginProxyProvider *pluginProxyProvider;
@property (copy, nonatomic) id /* block */ injectedErrorHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectionInvalidated;
- (void).cxx_destruct;
- (id)remoteInterface;
- (id)exportedInterface;
- (id)initWithHealthStore:(id)a0;
- (void)_remoteProxy:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (id /* block */)_clientQueueCompletion:(id /* block */)a0;
- (void)fetchAllTemplatesWithCompletion:(id /* block */)a0;
- (void)addTemplate:(id)a0 completion:(id /* block */)a1;
- (void)removeTemplate:(id)a0 completion:(id /* block */)a1;
- (void)removeAllTemplatesWithCompletion:(id /* block */)a0;
- (void)fetchAllEarnedInstancesWithCompletion:(id /* block */)a0;
- (void)addEarnedInstance:(id)a0 completion:(id /* block */)a1;
- (void)removeEarnedInstance:(id)a0 completion:(id /* block */)a1;
- (void)removeAllEarnedInstancesWithCompletion:(id /* block */)a0;
- (void)fetchAllAchievementsWithCompletion:(id /* block */)a0;
- (void)fetchAchievementWithTemplateUniqueName:(id)a0 completion:(id /* block */)a1;
- (void)fetchEphemeralAchievementWithTemplateUniqueName:(id)a0 completion:(id /* block */)a1;
- (void)forceAwardingSchedulerWithCompletion:(id /* block */)a0;
- (void)runMonthlyChallengesWithCompletion:(id /* block */)a0;
- (void)fetchActivityChallengeAssetsServerURLWithCompletion:(id /* block */)a0;
- (void)setActivityChallengeAssetsServerURL:(id)a0 completion:(id /* block */)a1;
- (void)availableMobileAssetsWithCompletion:(id /* block */)a0;
- (void)_injectProxyProvider:(id)a0;
- (void)_addPluginProxyErrorHandler:(id /* block */)a0;

@end
