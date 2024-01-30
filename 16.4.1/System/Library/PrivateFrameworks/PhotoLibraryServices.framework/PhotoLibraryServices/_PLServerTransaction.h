@class NSCountedSet, NSObject;
@protocol OS_dispatch_queue;

@interface _PLServerTransaction : _PLClientTransaction {
    NSCountedSet *_enqueuedChangeScopes;
    NSObject<OS_dispatch_queue> *_changeScopeQueue;
}

- (void)abortTransaction;
- (void)completeTransactionScope:(id)a0;
- (void)pushChangeScopesBatch;
- (void)_enqueueChangeScopes:(id)a0;
- (void)dealloc;
- (id)changeScopes;
- (void)completeTransaction;
- (BOOL)isClientTransaction;
- (id)initWithPathManager:(id)a0 identifier:(const char *)a1;
- (void)popChangeScopesBatch;
- (void)addChangeScopes:(id)a0;
- (void).cxx_destruct;
- (id)generateChangeScopesDescription;

@end
