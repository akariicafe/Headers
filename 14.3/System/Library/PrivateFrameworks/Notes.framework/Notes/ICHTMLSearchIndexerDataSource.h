@interface ICHTMLSearchIndexerDataSource : ICBaseSearchIndexerDataSource

- (id)persistentStoreCoordinator;
- (unsigned long long)indexingPriority;
- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)a0;
- (id)newManagedObjectContext;
- (void)contextWillSave:(id)a0;
- (id)dataSourceIdentifier;
- (id)indexableObjectIDsMatchingPredicate:(id)a0 sortByReversedReindexingOrder:(BOOL)a1 context:(id)a2;
- (id)addNotesFromSubtree:(id)a0;
- (BOOL)isFolderWithServerShareChanged:(id)a0;

@end
