@class NSString, NSPredicate, EKEventStore;

@interface EKPredicateSearch : NSObject <EKCancellableRemoteOperation> {
    id /* block */ _callback;
    Class _entityClass;
    NSPredicate *_predicate;
    EKEventStore *_store;
    id _cancellationToken;
    BOOL _finished;
    BOOL _isCancelled;
    int _retryCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)signpostHandle;
+ (id)searchWithEntityClass:(Class)a0 predicate:(id)a1 store:(id)a2;

- (void)terminate;
- (void)signpostStart;
- (void)_startActivityWithCompletion:(id /* block */)a0 synchronous:(BOOL)a1;
- (id)runSynchronously;
- (void)disconnect;
- (id)_createOSActivity;
- (void)_startFetchObjectIDsActivityWithCompletion:(id /* block */)a0 synchronous:(BOOL)a1;
- (id)initWithEntityClass:(Class)a0 predicate:(id)a1 store:(id)a2;
- (void)_startActualWithCompletion:(id /* block */)a0 synchronous:(BOOL)a1;
- (void)_startProcessingWithCompletion:(id /* block */)a0 synchronous:(BOOL)a1 processor:(id /* block */)a2;
- (id)fetchObjectIDs;
- (void)_fetchObjectIDsActualWithCompletion:(id /* block */)a0 synchronous:(BOOL)a1;
- (void).cxx_destruct;
- (void)signpostEndWithError:(int)a0 count:(unsigned long long)a1;
- (void)cancel;
- (id)startWithCompletion:(id /* block */)a0;

@end
