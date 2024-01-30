@interface ICHTMLSearchIndexerDataSource : ICBaseSearchIndexerDataSource

- (void)contextWillSave:(id)a0;
- (BOOL)isFolderWithServerShareChanged:(id)a0;
- (unsigned long long)indexingPriority;
- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)a0;
- (id)indexableObjectIDsMatchingPredicate:(id)a0 sortByReversedReindexingOrder:(BOOL)a1 context:(id)a2;
- (id)newManagedObjectContext;
- (id)dataSourceIdentifier;
- (id)addNotesFromSubtree:(id)a0;
- (id)persistentStoreCoordinator;

@end
