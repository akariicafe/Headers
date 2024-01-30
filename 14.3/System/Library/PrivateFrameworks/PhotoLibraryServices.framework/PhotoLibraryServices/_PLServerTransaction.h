@class NSCountedSet, NSObject;
@protocol OS_dispatch_queue;

@interface _PLServerTransaction : _PLClientTransaction {
    NSCountedSet *_enqueuedChangeScopes;
    NSObject<OS_dispatch_queue> *_changeScopeQueue;
}

- (id)initWithPathManager:(id)a0;
- (void).cxx_destruct;
- (void)completeTransactionScope:(id)a0;
- (id)changeScopes;
- (void)dealloc;
- (void)abortTransaction;
- (void)addChangeScopes:(id)a0;
- (void)_enqueueChangeScopes:(id)a0;
- (id)generateChangeScopesDescription;
- (void)completeTransaction;
- (void)pushChangeScopesBatch;
- (BOOL)isClientTransaction;
- (void)popChangeScopesBatch;

@end
