@interface ICModernSearchIndexerDataSource : ICBaseSearchIndexerDataSource

- (id)persistentStoreCoordinator;
- (unsigned long long)indexingPriority;
- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)a0;
- (id)searchableItemForObject:(id)a0;
- (id)newManagedObjectContext;
- (void)contextWillSave:(id)a0;
- (id)dataSourceIdentifier;
- (id)addNotesFromSubtree:(id)a0;
- (BOOL)isFolderWithServerShareChanged:(id)a0;

@end
