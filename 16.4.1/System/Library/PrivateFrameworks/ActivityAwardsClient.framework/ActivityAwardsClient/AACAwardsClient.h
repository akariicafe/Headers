@class AACXPCClient;

@interface AACAwardsClient : NSObject

@property (retain, nonatomic) AACXPCClient *client;

- (void)scheduleAwardingWithCompletion:(id /* block */)a0;
- (void)addTemplates:(id)a0 completion:(id /* block */)a1;
- (void)removeTemplates:(id)a0 completion:(id /* block */)a1;
- (void)templatesForSource:(id)a0 completion:(id /* block */)a1;
- (void)allAchievementsWithCompletion:(id /* block */)a0;
- (void)removeTemplatesForSource:(id)a0 completion:(id /* block */)a1;
- (void)removeEarnedInstances:(id)a0 completion:(id /* block */)a1;
- (void)removeTemplatesWithUniqueNames:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (id)allAchievementsWithError:(id *)a0;
- (id)ephemeralAchievementWithTemplateUniqueName:(id)a0 error:(id *)a1;
- (void)addEarnedInstances:(id)a0 completion:(id /* block */)a1;
- (void)requestAwardingWithTriggers:(unsigned long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
