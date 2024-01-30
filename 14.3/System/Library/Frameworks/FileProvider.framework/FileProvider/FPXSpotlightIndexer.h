@class FPXDomainContext, NSString, NSData, FPXFetchClientStateOperation, CSSearchableIndex, NSOperationQueue, NSObject, NSOperation;
@protocol OS_dispatch_semaphore, NSFileProviderEnumerator, OS_dispatch_workloop;

@interface FPXSpotlightIndexer : NSObject <CSSearchableIndexDelegate> {
    NSString *_indexName;
    NSString *_domainID;
    NSString *_providerIdentifier;
    NSOperationQueue *_operationQueue;
    NSOperation *_currentOperation;
    unsigned long long _clientState;
    FPXFetchClientStateOperation *_fetchStateOperation;
    BOOL _isCanceled;
    NSObject<OS_dispatch_semaphore> *_clientStateSemaphore;
}

@property (readonly, weak) FPXDomainContext *domainContext;
@property (readonly) id<NSFileProviderEnumerator> vendorEnumerator;
@property (readonly, nonatomic) NSObject<OS_dispatch_workloop> *workloop;
@property (readonly, nonatomic) CSSearchableIndex *index;
@property (readonly, nonatomic) NSData *lastIndexState;
@property (nonatomic, getter=isIndexing) BOOL indexing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)indexOneBatchWithCompletionHandler:(id /* block */)a0;
- (void)searchableIndex:(id)a0 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)a1;
- (void)_invalidate;
- (void)invalidateAsync;
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)_indexOutOfBandUpdatedItems:(id)a0 deletedItems:(id)a1 completionHandler:(id /* block */)a2;
- (void)indexOneBatchFromAnchor:(id)a0 toAnchor:(id)a1 updatedItems:(id)a2 deletedItems:(id)a3 completionHandler:(id /* block */)a4;
- (void)fetchCurrentIndexingAnchorWithCompletionHandler:(id /* block */)a0;
- (void)dropIndexWithReason:(id)a0 completionHandler:(id /* block */)a1;
- (void)indexOutOfBandUpdatedItems:(id)a0 deletedItems:(id)a1 completionHandler:(id /* block */)a2;
- (void)learnNewIndexState:(id)a0;
- (id)_fetchClientStateIfNeeded;
- (void)_indexOneBatchWithCompletionHandler:(id /* block */)a0;
- (id)initWithIndexName:(id)a0 domainID:(id)a1 context:(id)a2;
- (void)_indexOneBatchFromAnchor:(id)a0 toAnchor:(id)a1 updatedItems:(id)a2 deletedItems:(id)a3 completionHandler:(id /* block */)a4;
- (void)_fetchCurrentIndexingAnchorWithCompletionHandler:(id /* block */)a0;
- (void)dropIndexInQueue:(id)a0 reason:(id)a1 completionHandler:(id /* block */)a2;
- (void)dropIndexAndInvalidateWithReason:(id)a0 completionHandler:(id /* block */)a1;
- (void)invalidate;
- (void)dumpStateTo:(id)a0;
- (void)searchableIndex:(id)a0 reindexSearchableItemsWithIdentifiers:(id)a1 acknowledgementHandler:(id /* block */)a2;

@end
