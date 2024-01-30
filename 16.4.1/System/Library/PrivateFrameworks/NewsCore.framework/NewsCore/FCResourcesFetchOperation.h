@class NSArray;
@protocol FCContentContext;

@interface FCResourcesFetchOperation : FCMultiStepFetchOperation {
    BOOL _downloadAssets;
    id<FCContentContext> _context;
    NSArray *_resourceIDs;
    NSArray *_resources;
}

@property (nonatomic) long long cacheLifetimeHint;
@property (nonatomic) unsigned long long maxConcurrentFetchCount;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ interestTokenHandler;
@property (copy, nonatomic) id /* block */ archiveHandler;

- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)downloadAssetsWithCompletion:(id /* block */)a0;
- (id)completeFetchOperation;
- (id)init;
- (id)initWithContext:(id)a0 resourceIDs:(id)a1 downloadAssets:(BOOL)a2;
- (id)fetchResourcesWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
