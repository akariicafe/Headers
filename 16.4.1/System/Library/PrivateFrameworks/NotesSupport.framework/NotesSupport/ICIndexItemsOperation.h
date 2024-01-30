@class NSArray, CSSearchableIndex, NSMutableDictionary, NSError, NSMutableArray;

@interface ICIndexItemsOperation : NSOperation

@property (retain, nonatomic) CSSearchableIndex *searchableIndex;
@property (copy, nonatomic) NSArray *dataSources;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableArray *objectIDsToIndex;
@property (retain, nonatomic) NSMutableArray *searchableItemsToIndex;
@property (nonatomic) unsigned long long totalSizeOfSearchableItemsToIndex;
@property (retain, nonatomic) NSMutableArray *objectIDURIsToDelete;
@property (retain, nonatomic) NSMutableDictionary *contextCache;

- (void)main;
- (id)init;
- (void).cxx_destruct;
- (BOOL)universalSearchProcessingLibraryEnabled;
- (void)_commitObjectIDURIsToDeleteForDataSource:(id)a0;
- (void)_commitObjectIDsToIndexForDataSource:(id)a0;
- (BOOL)_shouldCommitDeletionWithHasItemsToDeleteThenUpdate:(BOOL)a0 shouldForceCommit:(BOOL)a1;
- (BOOL)_shouldCommitIndexingWithHasItemsToDeleteThenUpdate:(BOOL)a0 shouldForceCommit:(BOOL)a1;
- (void)commitIfNecessaryForDataSource:(id)a0 hasItemsToDeleteThenUpdate:(BOOL)a1 forceCommit:(BOOL)a2;
- (id)initWithSearchableIndex:(id)a0 dataSources:(id)a1;
- (id)managedObjectContextForDataSource:(id)a0;
- (void)processItems;

@end
