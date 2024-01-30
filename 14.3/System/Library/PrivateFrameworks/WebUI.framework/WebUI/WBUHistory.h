@interface WBUHistory : WBSHistory

@property (nonatomic) BOOL shouldScheduleMaintenance;

- (BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)a0;
- (id)init;
- (id)_createHistoryStore;
- (BOOL)historyStoreShouldScheduleMaintenance:(id)a0;
- (Class)_historyItemClass;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id)a0;
- (void)_removeAllVisitedLinks;
- (void)_addVisitedLinksForItemsIfNeeded:(id)a0;

@end
