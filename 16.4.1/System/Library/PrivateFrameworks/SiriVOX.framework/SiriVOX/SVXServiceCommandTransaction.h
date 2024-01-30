@class NSMutableDictionary, AceObject, NSArray, NSMutableSet, NSHashTable;
@protocol SVXPerforming, SAAceCommand, SVXTaskTracking;

@interface SVXServiceCommandTransaction : NSObject {
    id<SVXPerforming> _performer;
    long long _state;
    NSMutableDictionary *_preparedResultsByHandlerIdentifier;
    NSMutableDictionary *_preparedContextsByHandlerIdentifier;
    NSMutableDictionary *_handledResultsByHandlerIdentifier;
    AceObject<SAAceCommand> *_command;
    NSArray *_handlers;
    id<SVXTaskTracking> _taskTracker;
    id /* block */ _completion;
    NSMutableSet *_blockingTransactions;
    NSHashTable *_blockedTransactions;
}

- (void)_prepare;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)_invalidate;
- (void)_handle;
- (void).cxx_destruct;
- (void)_addBlockedTransaction:(id)a0;
- (void)_didHandleAll;
- (void)_didPrepareAll;
- (void)_dispatchCompletionWithResult:(id)a0;
- (void)_handler:(id)a0 didHandleWithResult:(id)a1 completion:(id /* block */)a2;
- (void)_handler:(id)a0 didPrepareSuccessfully:(BOOL)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)_removeBlockingTransaction:(id)a0;
- (void)_unblockDependentTransactions;
- (void)addBlockedTransaction:(id)a0;
- (void)handler:(id)a0 didHandleWithResult:(id)a1 completion:(id /* block */)a2;
- (void)handler:(id)a0 didPrepareSuccessfully:(BOOL)a1 context:(id)a2 completion:(id /* block */)a3;
- (id)initWithPerformer:(id)a0 command:(id)a1 handlers:(id)a2 taskTracker:(id)a3 dependencies:(id)a4 completion:(id /* block */)a5;
- (void)removeBlockingTransaction:(id)a0;

@end
