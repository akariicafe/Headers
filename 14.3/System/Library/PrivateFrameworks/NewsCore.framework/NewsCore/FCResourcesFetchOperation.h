@class NSArray;
@protocol FCContentContext;

@interface FCResourcesFetchOperation : FCMultiStepFetchOperation

@property (retain, nonatomic) id<FCContentContext> context;
@property (readonly, nonatomic) NSArray *resourceIDs;
@property (readonly, nonatomic) BOOL downloadAssets;
@property (retain, nonatomic) NSArray *resources;
@property (nonatomic) long long cacheLifetimeHint;
@property (nonatomic) unsigned long long maxConcurrentFetchCount;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ interestTokenHandler;
@property (copy, nonatomic) id /* block */ archiveHandler;

- (id)init;
- (void).cxx_destruct;
- (id)fetchResourcesWithCompletion:(id /* block */)a0;
- (BOOL)validateOperation;
- (id)completeFetchOperation;
- (BOOL)_shoudUsePermanentURLForResourceID:(id)a0;
- (id)initWithContext:(id)a0 resourceIDs:(id)a1 downloadAssets:(BOOL)a2;
- (void)operationWillFinishWithError:(id)a0;
- (id)downloadAssetsWithCompletion:(id /* block */)a0;

@end
