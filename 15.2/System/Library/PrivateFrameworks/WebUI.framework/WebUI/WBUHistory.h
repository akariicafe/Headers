@interface WBUHistory : WBSHistory

@property (nonatomic) BOOL shouldScheduleMaintenance;

- (void)_addVisitedLinksForItemsIfNeeded:(id)a0;
- (BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)a0;
- (void)_removeAllVisitedLinks;
- (id)init;
- (Class)_historyItemClass;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id)a0;
- (BOOL)historyStoreShouldScheduleMaintenance:(id)a0;
- (id)_createHistoryStore;

@end
