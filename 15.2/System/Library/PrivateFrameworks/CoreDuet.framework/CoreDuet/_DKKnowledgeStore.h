@class _DKQueryDispatcher, _DKRateLimitPolicyEnforcer, NSObject, _DKPrivacyPolicyEnforcer;
@protocol OS_dispatch_queue, _DKKnowledgeSaving, _DKKnowledgeEventStreamDeleting, _DKKnowledgeQuerying, _DKKnowledgeDeleting;

@interface _DKKnowledgeStore : NSObject <_DKKnowledgeEventStreamDeleting, _DKKnowledgeSynchronizing, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying> {
    NSObject<_DKKnowledgeQuerying, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeEventStreamDeleting> *_knowledgeStoreHandle;
    _DKQueryDispatcher *_queryDispatcher;
    _DKRateLimitPolicyEnforcer *_rateLimitEnforcer;
    _DKPrivacyPolicyEnforcer *_privacyEnforcer;
    NSObject<OS_dispatch_queue> *_defaultQueue;
}

+ (id)knowledgeStore;
+ (id)userKnowledgeStoreWithDirectReadOnlyAccess;
+ (id)knowledgeStoreWithDirectReadOnlyAccess;
+ (id)knowledgeStoreWithDirectReadWriteAccess;
+ (id)userKnowledgeStore;
+ (id)knowledgeStoreWithDirectReadOnlyAccessWithXPCStore:(id)a0 storeDirectory:(id)a1;
+ (id)userKnowledgeStoreWithDirectReadWriteAccess;

- (id)executeQuery:(id)a0 error:(id *)a1;
- (id)sourceDeviceIdentityWithError:(id *)a0;
- (id)sourceDeviceIdentityFromObject:(id)a0 error:(id *)a1;
- (void)executeQuery:(id)a0 responseQueue:(id)a1;
- (void)deleteAllEventsInEventStream:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)synchronizeWithUrgency:(unsigned long long)a0 client:(id)a1 error:(id *)a2;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)a0 error:(id *)a1;
- (void)synchronizeWithUrgency:(unsigned long long)a0 client:(id)a1 responseQueue:(id)a2 completion:(id /* block */)a3;
- (BOOL)deleteRemoteState:(id *)a0;
- (void).cxx_destruct;
- (id)initWithKnowledgeStoreHandle:(id)a0 readOnly:(BOOL)a1;
- (BOOL)synchronizeWithError:(id *)a0;
- (id)init;
- (unsigned long long)deleteAllEventsInEventStream:(id)a0 error:(id *)a1;
- (id)deviceUUID;
- (BOOL)saveObjects:(id)a0 error:(id *)a1;
- (void)deleteAllEventsMatchingPredicate:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)deleteObjects:(id)a0 error:(id *)a1;
- (void)saveObjects:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (void)deleteObjects:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (void)executeQuery:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;

@end
