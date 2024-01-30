@interface ICHTMLSearchIndexerDataSource : ICBaseSearchIndexerDataSource

- (BOOL)isFolderWithServerShareChanged:(id)a0;
- (void)contextWillSave:(id)a0;
- (id)dataSourceIdentifier;
- (id)newManagedObjectContext;
- (id)addNotesFromSubtree:(id)a0;
- (id)persistentStoreCoordinator;
- (id)indexableObjectIDsMatchingPredicate:(id)a0 sortByReversedReindexingOrder:(BOOL)a1 context:(id)a2;
- (unsigned long long)indexingPriority;
- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)a0;

@end
