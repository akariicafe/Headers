@class NSObject;
@protocol OS_dispatch_source, OS_os_activity;

@interface SYIncomingFullSyncSession : SYSession {
    unsigned int _state;
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    BOOL canRestart;
    BOOL canRollback;
}

@property (readonly, nonatomic) NSObject<OS_os_activity> *sessionActivity;

- (id)initWithService:(id)a0;
- (unsigned int)state;
- (BOOL)isSending;
- (void)start:(id /* block */)a0;
- (void)cancelWithError:(id)a0;
- (unsigned long long)protocolVersion;
- (void).cxx_destruct;
- (void)setState:(unsigned int)a0;
- (BOOL)isResetSync;
- (void)_sessionComplete;
- (void)_sessionEnded;
- (void)setCanRollback:(BOOL)a0;
- (void)_cancelSession;
- (void)_continueProcessing;
- (void)_handleBatchChunk:(id)a0 completion:(id /* block */)a1;
- (void)_handleEndSync:(id)a0 completion:(id /* block */)a1;
- (void)_installStateListener;
- (void)_notifyErrorAndShutdown;
- (void)_processNextState;
- (void)_sendEndSessionResponse:(id)a0;
- (void)_setStateQuietly:(unsigned int)a0;
- (BOOL)canRestart;
- (BOOL)canRollback;
- (void)setCanRestart:(BOOL)a0;

@end
