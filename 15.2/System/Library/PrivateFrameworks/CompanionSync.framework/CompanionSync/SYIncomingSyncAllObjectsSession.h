@class NSMutableArray;

@interface SYIncomingSyncAllObjectsSession : SYIncomingFullSyncSession {
    NSMutableArray *_allObjectsAsData;
    id /* block */ _completion;
    BOOL canRestart;
    BOOL canRollback;
}

- (void).cxx_destruct;
- (id)initWithService:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (void)_sendEndSessionResponse:(id)a0;
- (void)_continueProcessing;
- (BOOL)canRestart;
- (void)setCanRestart:(BOOL)a0;
- (BOOL)canRollback;
- (void)setCanRollback:(BOOL)a0;

@end
