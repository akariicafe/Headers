@class NSMutableArray;

@interface SYIncomingSyncAllObjectsSession : SYIncomingFullSyncSession {
    NSMutableArray *_allObjectsAsData;
    id /* block */ _completion;
    BOOL canRestart;
    BOOL canRollback;
}

- (void).cxx_destruct;
- (void)setCanRollback:(BOOL)a0;
- (void)_continueProcessing;
- (void)_sendEndSessionResponse:(id)a0;
- (BOOL)canRestart;
- (BOOL)canRollback;
- (id)initWithService:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (void)setCanRestart:(BOOL)a0;

@end
