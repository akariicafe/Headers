@class NSObject, NSMutableDictionary, _CDClientContext;
@protocol OS_dispatch_queue, _DKKnowledgeSaving, _DKKnowledgeQuerying, _DKKnowledgeDeleting;

@interface TPSDuetDataProvider : NSObject {
    id<_DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying> _store;
    _CDClientContext *_context;
    NSMutableDictionary *_contextualRegistrations;
    NSObject<OS_dispatch_queue> *_registrationQueue;
}

- (id)init;
- (void).cxx_destruct;
- (id)_initWithStore:(id)a0 context:(id)a1;
- (void)deleteEvents:(id)a0 completion:(id /* block */)a1;
- (id)_executeQueryWithPredicate:(id)a0 streams:(id)a1 limit:(unsigned long long)a2 sortDescriptors:(id)a3 error:(id *)a4;
- (void)deleteEventsWithPredicate:(id)a0 streams:(id)a1 completion:(id /* block */)a2;
- (BOOL)registerWakingForPredicate:(id)a0 registrationID:(id)a1 clientIdentifier:(id)a2 callback:(id /* block */)a3;
- (void)_executeQueryWithPredicate:(id)a0 streams:(id)a1 limit:(unsigned long long)a2 sortDescriptors:(id)a3 withCompletion:(id /* block */)a4;
- (void)_executeHistogramQueryWithPredicate:(id)a0 stream:(id)a1 interval:(id)a2 groupByKeyPaths:(id)a3 completion:(id /* block */)a4;
- (void)_deregisterWakingDuetRegistration:(id)a0;
- (void)saveEvents:(id)a0 completion:(id /* block */)a1;
- (id)_initWithDirectory:(id)a0;
- (BOOL)deregisterWakingForRegistrationID:(id)a0;
- (void)countsForPredicate:(id)a0 stream:(id)a1 interval:(id)a2 groupByKeyPaths:(id)a3 completion:(id /* block */)a4;
- (void)observationDatesForPredicate:(id)a0 streams:(id)a1 limit:(unsigned long long)a2 completion:(id /* block */)a3;

@end
