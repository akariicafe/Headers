@class NSString;

@interface ACHQuery : HKQuery <ACHQueryClientInterface>

@property (copy, nonatomic) id /* block */ initialAchievementsHandler;
@property (copy, nonatomic) id /* block */ newAchievementsHandler;
@property (copy, nonatomic) id /* block */ updatedAchievementsHandler;
@property (copy, nonatomic) id /* block */ removedAchievementsHandler;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsTaskServers;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)a0;

- (void)queue_queryDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (void)queue_deliverError:(id)a0;
- (void)client_achievementsDidFinishInitialFetch:(id)a0;
- (void)client_deliverNewAchievements:(id)a0;
- (void)client_deliverUpdatedAchievements:(id)a0;
- (void)client_deliverRemovedAchievements:(id)a0;
- (id)initWithInitialAchievementsHandler:(id /* block */)a0 newAchievementsHandler:(id /* block */)a1 updatedAchievementsHandler:(id /* block */)a2 removedAchievementsHandler:(id /* block */)a3;

@end
