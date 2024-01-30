@class WFDatabase;

@interface WFTriggerManager : NSObject

@property (readonly, nonatomic) WFDatabase *database;

- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (id)allConfiguredTriggers;
- (void)saveNewConfiguredTrigger:(id)a0 workflow:(id)a1 notifyDaemon:(BOOL)a2 completion:(id /* block */)a3;
- (void)updateConfiguredTrigger:(id)a0 triggerID:(id)a1 notifyDaemon:(BOOL)a2 completion:(id /* block */)a3;
- (void)deleteTriggerWithIdentifier:(id)a0 notifyDaemon:(BOOL)a1 completion:(id /* block */)a2;
- (id)configuredTriggerWithID:(id)a0;

@end
