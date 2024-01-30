@class NSMutableDictionary;

@interface AFUIDelayedActionCommandCache : NSObject {
    NSMutableDictionary *_delayedActionTimersByIdentifier;
    NSMutableDictionary *_dismissalDelayedActionCommandsByIdentifier;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_commandHandler;
- (void)_invalidateDelayedActionTimer:(id)a0 withKey:(id)a1;
- (void)_performCommandsWithDelayedActionCommand:(id)a0;
- (void)_performDelayedActionCommandTimerAction:(id)a0;
- (void)cancelDelayedActionWithDelayedActionCancelCommand:(id)a0 completion:(id /* block */)a1;
- (void)enqueueDelayedActionCommand:(id)a0 completion:(id /* block */)a1;
- (void)invalidatePendingCommands;
- (void)performDismissalCommands;

@end
