@class NSObject;
@protocol OS_dispatch_source, OS_os_activity;

@interface SYIncomingFullSyncSession : SYSession {
    unsigned int _state;
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    BOOL canRestart;
    BOOL canRollback;
}

@property (readonly, nonatomic) NSObject<OS_os_activity> *sessionActivity;

- (void)start:(id /* block */)a0;
- (void).cxx_destruct;
- (unsigned long long)protocolVersion;
- (BOOL)isSending;
- (id)initWithService:(id)a0;
- (void)cancelWithError:(id)a0;
- (void)setState:(unsigned int)a0;
- (unsigned int)state;
- (BOOL)isResetSync;
- (void)_sendEndSessionResponse:(id)a0;
- (void)_continueProcessing;
- (BOOL)canRestart;
- (void)setCanRestart:(BOOL)a0;
- (BOOL)canRollback;
- (void)setCanRollback:(BOOL)a0;
- (void)_setStateQuietly:(unsigned int)a0;
- (void)_sessionComplete;
- (void)_processNextState;
- (void)_installStateListener;
- (void)_handleBatchChunk:(id)a0 completion:(id /* block */)a1;
- (void)_handleEndSync:(id)a0 completion:(id /* block */)a1;
- (void)_notifyErrorAndShutdown;
- (void)_sessionEnded;
- (void)_cancelSession;

@end
