@class NSMutableDictionary;

@interface AFUIDelayedActionCommandCache : NSObject {
    NSMutableDictionary *_delayedActionTimersByIdentifier;
    NSMutableDictionary *_dismissalDelayedActionCommandsByIdentifier;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_commandHandler;
- (void)invalidatePendingCommands;
- (void)_performDelayedActionCommandTimerAction:(id)a0;
- (void)_invalidateDelayedActionTimer:(id)a0 withKey:(id)a1;
- (void)_performCommandsWithDelayedActionCommand:(id)a0;
- (void)enqueueDelayedActionCommand:(id)a0 completion:(id /* block */)a1;
- (void)cancelDelayedActionWithDelayedActionCancelCommand:(id)a0 completion:(id /* block */)a1;
- (void)performDismissalCommands;

@end
