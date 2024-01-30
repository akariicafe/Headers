@class NSArray, FCTagRecordSource, FCHeldRecords, FCAssetManager;
@protocol FCTagsFetchOperationDelegate;

@interface FCTagsFetchOperation : FCMultiStepFetchOperation

@property (copy, nonatomic) NSArray *tagIDs;
@property (retain, nonatomic) FCHeldRecords *heldTagRecords;
@property (retain, nonatomic) FCHeldRecords *heldParentTagRecords;
@property (retain, nonatomic) FCHeldRecords *heldChildTagRecords;
@property (retain, nonatomic) FCTagRecordSource *tagRecordSource;
@property (retain, nonatomic) FCAssetManager *assetManager;
@property (weak, nonatomic) id<FCTagsFetchOperationDelegate> delegate;
@property (nonatomic) BOOL includeChildren;
@property (nonatomic) BOOL includeParents;
@property BOOL overrideTargetsCachePolicy;
@property unsigned long long targetsCachePolicy;
@property double targetsMaximumCachedAge;
@property BOOL overrideChildrenCachePolicy;
@property unsigned long long childrenCachePolicy;
@property double childrenMaximumCachedAge;

- (void).cxx_destruct;
- (void)customizeChildOperation:(id)a0 forFetchStep:(SEL)a1;
- (id)fetchTagRecordsWithCompletion:(id /* block */)a0;
- (id)completeFetchOperation;
- (id)fetchParentTagRecordsWithCompletion:(id /* block */)a0;
- (id)initWithTagIDs:(id)a0 tagRecordSource:(id)a1 assetManager:(id)a2 delegate:(id)a3;
- (id)fetchChildTagRecordsWithCompletion:(id /* block */)a0;

@end
