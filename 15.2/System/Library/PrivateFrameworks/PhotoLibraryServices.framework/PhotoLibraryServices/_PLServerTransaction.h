@class NSCountedSet, NSObject;
@protocol OS_dispatch_queue;

@interface _PLServerTransaction : _PLClientTransaction {
    NSCountedSet *_enqueuedChangeScopes;
    NSObject<OS_dispatch_queue> *_changeScopeQueue;
}

- (id)initWithPathManager:(id)a0;
- (void)_enqueueChangeScopes:(id)a0;
- (void)pushChangeScopesBatch;
- (id)generateChangeScopesDescription;
- (void)completeTransaction;
- (void)addChangeScopes:(id)a0;
- (void).cxx_destruct;
- (void)popChangeScopesBatch;
- (BOOL)isClientTransaction;
- (void)abortTransaction;
- (void)completeTransactionScope:(id)a0;
- (void)dealloc;
- (id)changeScopes;

@end
