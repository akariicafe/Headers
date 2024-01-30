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

- (id)init;
- (void).cxx_destruct;
- (id)managedObjectContextForDataSource:(id)a0;
- (void)main;
- (id)initWithSearchableIndex:(id)a0 dataSources:(id)a1;
- (void)processItems;
- (void)commitObjectIDURIsToDeleteIfNecessaryForDataSource:(id)a0 forceCommit:(BOOL)a1;
- (void)commitObjectIDsToIndexIfNecessaryForDataSource:(id)a0 forceCommit:(BOOL)a1;

@end
