@class NSObject, NSMutableDictionary, _CDClientContext;
@protocol OS_dispatch_queue, _DKKnowledgeSaving, _DKKnowledgeQuerying, _DKKnowledgeDeleting;

@interface TPSDuetDataProvider : NSObject {
    id<_DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying> _systemStore;
    id<_DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying> _userStore;
    _CDClientContext *_context;
    NSMutableDictionary *_contextualRegistrations;
    NSObject<OS_dispatch_queue> *_registrationQueue;
}

@property (readonly, nonatomic) id<_DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying> systemStore;
@property (readonly, nonatomic) id<_DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying> userStore;

- (void)_executeHistogramQueryWithPredicate:(id)a0 stream:(id)a1 interval:(id)a2 groupByKeyPaths:(id)a3 userStore:(BOOL)a4 completion:(id /* block */)a5;
- (id)_executeQueryWithPredicate:(id)a0 streams:(id)a1 limit:(unsigned long long)a2 sortDescriptors:(id)a3 userStore:(BOOL)a4 deviceIDs:(id)a5 error:(id *)a6;
- (void)deleteEventsWithPredicate:(id)a0 streams:(id)a1 userStore:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)deregisterWakingForAllRegistrations;
- (void)_executeQueryWithPredicate:(id)a0 streams:(id)a1 limit:(unsigned long long)a2 sortDescriptors:(id)a3 userStore:(BOOL)a4 deviceIDs:(id)a5 withCompletion:(id /* block */)a6;
- (void)observationDatesForPredicate:(id)a0 streams:(id)a1 limit:(unsigned long long)a2 userStore:(BOOL)a3 completion:(id /* block */)a4;
- (id)_executeQueryWithPredicate:(id)a0 streams:(id)a1 limit:(unsigned long long)a2 sortDescriptors:(id)a3 userStore:(BOOL)a4 error:(id *)a5;
- (id)_initWithStore:(id)a0 context:(id)a1;
- (BOOL)deregisterWakingForRegistrationID:(id)a0;
- (void)deleteEvents:(id)a0 userStore:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (id)_initWithDirectory:(id)a0;
- (void)_deregisterWakingDuetRegistration:(id)a0;
- (BOOL)registerWakingForPredicate:(id)a0 registrationID:(id)a1 clientIdentifier:(id)a2 callback:(id /* block */)a3;
- (void)saveEvents:(id)a0 userStore:(BOOL)a1 completion:(id /* block */)a2;
- (void)countsForPredicate:(id)a0 stream:(id)a1 interval:(id)a2 groupByKeyPaths:(id)a3 userStore:(BOOL)a4 completion:(id /* block */)a5;
- (void)observationDatesForPredicate:(id)a0 streams:(id)a1 limit:(unsigned long long)a2 userStore:(BOOL)a3 deviceIDs:(id)a4 completion:(id /* block */)a5;
- (void)_executeQueryWithPredicate:(id)a0 streams:(id)a1 limit:(unsigned long long)a2 sortDescriptors:(id)a3 userStore:(BOOL)a4 withCompletion:(id /* block */)a5;

@end
