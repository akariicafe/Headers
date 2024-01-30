@class NSData, NSString, FPXDomainContext, FPProviderDomain, CSSearchableIndex, NSOperationQueue, FPSpotlightFetchClientStateOperation, NSURL, NSObject, NSOperation, NSFileProviderDomain;
@protocol OS_os_log, OS_dispatch_workloop, FPSpotlightIndexerDelegate, OS_dispatch_semaphore, NSFileProviderEnumerator;

@interface FPSpotlightIndexer : NSObject <CSSearchableIndexDelegate> {
    NSString *_indexName;
    NSString *_domainID;
    NSString *_providerIdentifier;
    NSOperationQueue *_operationQueue;
    NSOperation *_currentOperation;
    unsigned long long _clientState;
    FPSpotlightFetchClientStateOperation *_fetchStateOperation;
    BOOL _isCanceled;
    NSObject<OS_dispatch_semaphore> *_clientStateSemaphore;
    NSURL *_supportURL;
}

@property (readonly) id<NSFileProviderEnumerator> vendorEnumerator;
@property (readonly, nonatomic) NSObject<OS_dispatch_workloop> *workloop;
@property (readonly, nonatomic) CSSearchableIndex *index;
@property (readonly, nonatomic) NSData *lastIndexState;
@property (nonatomic, getter=isIndexing) BOOL indexing;
@property (retain, nonatomic) NSFileProviderDomain *domain;
@property (retain, nonatomic) FPProviderDomain *providerDomain;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (weak, nonatomic) FPXDomainContext *domainContext;
@property (weak, nonatomic) id<FPSpotlightIndexerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)indexerPropertyOfClass:(Class)a0 forKey:(id)a1 supportURL:(id)a2;
+ (void)setIndexerProperty:(id)a0 forKey:(id)a1 supportURL:(id)a2;

- (id)_fetchClientStateIfNeeded;
- (void)dumpStateTo:(id)a0;
- (void)dropIndexAndInvalidateWithReason:(id)a0 completionHandler:(id /* block */)a1;
- (void)indexOutOfBandUpdatedItems:(id)a0 deletedItems:(id)a1 completionHandler:(id /* block */)a2;
- (void)_indexOneBatchWithCompletionHandler:(id /* block */)a0;
- (void)dropIndexWithReason:(id)a0 completionHandler:(id /* block */)a1;
- (void)_indexOutOfBandUpdatedItems:(id)a0 deletedItems:(id)a1 completionHandler:(id /* block */)a2;
- (void)searchableIndex:(id)a0 reindexSearchableItemsWithIdentifiers:(id)a1 acknowledgementHandler:(id /* block */)a2;
- (void)dropIndexInQueue:(id)a0 reason:(id)a1 completionHandler:(id /* block */)a2;
- (void)indexOneBatchWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)invalidateAsync;
- (void)learnNewIndexState:(id)a0;
- (void)searchableIndex:(id)a0 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)a1;
- (id)initWithDomain:(id)a0 providerDomain:(id)a1 log:(id)a2 supportURL:(id)a3;
- (void)indexOneBatchFromAnchor:(id)a0 toAnchor:(id)a1 updatedItems:(id)a2 deletedItems:(id)a3 completionHandler:(id /* block */)a4;
- (void)_fetchCurrentIndexingAnchorWithCompletionHandler:(id /* block */)a0;
- (void)invalidate;
- (void)_indexOneBatchFromAnchor:(id)a0 toAnchor:(id)a1 updatedItems:(id)a2 deletedItems:(id)a3 completionHandler:(id /* block */)a4;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)fetchCurrentIndexingAnchorWithCompletionHandler:(id /* block */)a0;
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)a0 completionHandler:(id /* block */)a1;

@end
