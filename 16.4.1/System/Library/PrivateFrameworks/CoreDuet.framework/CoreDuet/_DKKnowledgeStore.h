@class _DKRateLimitPolicyEnforcer, _DKPrivacyPolicyEnforcer, NSObject;
@protocol OS_dispatch_queue, _DKKnowledgeSaving, _DKKnowledgeEventStreamDeleting, _DKKnowledgeQuerying, _DKKnowledgeDeleting;

@interface _DKKnowledgeStore : NSObject <_DKKnowledgeEventStreamDeleting, _DKKnowledgeSynchronizing, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying> {
    NSObject<_DKKnowledgeQuerying, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeEventStreamDeleting> *_knowledgeStoreHandle;
    _DKRateLimitPolicyEnforcer *_rateLimitEnforcer;
    _DKPrivacyPolicyEnforcer *_privacyEnforcer;
    NSObject<OS_dispatch_queue> *_defaultQueue;
}

+ (id)knowledgeStore;
+ (id)knowledgeStoreWithDirectReadOnlyAccess;
+ (id)userKnowledgeStoreWithDirectReadOnlyAccess;
+ (id)userKnowledgeStoreWithDirectReadWriteAccess;
+ (id)userKnowledgeStore;
+ (id)knowledgeStoreWithDirectReadWriteAccess;
+ (id)knowledgeStoreWithDirectReadOnlyAccessWithXPCStore:(id)a0 storeDirectory:(id)a1;

- (id)executeQuery:(id)a0 error:(id *)a1;
- (BOOL)deleteRemoteState:(id *)a0;
- (BOOL)synchronizeWithUrgency:(unsigned long long)a0 client:(id)a1 error:(id *)a2;
- (void)executeQuery:(id)a0 responseQueue:(id)a1;
- (BOOL)saveObjects:(id)a0 error:(id *)a1;
- (BOOL)synchronizeWithError:(id *)a0;
- (id)sourceDeviceIdentityFromObject:(id)a0 error:(id *)a1;
- (void)synchronizeWithUrgency:(unsigned long long)a0 client:(id)a1 responseQueue:(id)a2 completion:(id /* block */)a3;
- (void)saveObjects:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (void)deleteAllEventsInEventStream:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (id)sourceDeviceIdentityWithError:(id *)a0;
- (void)saveObjects:(id)a0 tracker:(id /* block */)a1 responseQueue:(id)a2 withCompletion:(id /* block */)a3;
- (void)deleteObjects:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (void)executeQuery:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (id)init;
- (unsigned long long)deleteAllEventsInEventStream:(id)a0 error:(id *)a1;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)deviceUUID;
- (BOOL)deleteObjects:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)deleteAllEventsMatchingPredicate:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (id)initWithKnowledgeStoreHandle:(id)a0 readOnly:(BOOL)a1;

@end
