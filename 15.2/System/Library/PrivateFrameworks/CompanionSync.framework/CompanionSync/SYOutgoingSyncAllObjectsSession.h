@class NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_os_activity;

@interface SYOutgoingSyncAllObjectsSession : SYSession {
    NSObject<OS_os_activity> *_sessionActivity;
    unsigned int _state;
    BOOL _errorIsLocal;
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    NSObject<OS_dispatch_source> *_sessionTimer;
    double _sessionStartTime;
    NSMutableArray *_changesToSend;
    BOOL _cancelled;
    BOOL canRestart;
    BOOL canRollback;
}

- (void)start:(id /* block */)a0;
- (id)initWithService:(id)a0;
- (BOOL)wasCancelled;
- (unsigned long long)protocolVersion;
- (BOOL)isSending;
- (void)setState:(unsigned int)a0;
- (unsigned int)state;
- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (BOOL)isResetSync;
- (BOOL)canRestart;
- (void)setCanRestart:(BOOL)a0;
- (BOOL)canRollback;
- (void)setCanRollback:(BOOL)a0;
- (void)_setStateQuietly:(unsigned int)a0;
- (void)_processNextState;
- (void)_installStateListener;
- (void)_installTimers;
- (double)remainingSessionTime;
- (BOOL)_handleBatchSyncEndResponse:(id)a0 error:(id *)a1;
- (void)_sendChanges;
- (void)_sessionCompleteWithError:(id)a0;
- (void)_fetchChanges;
- (void)_sessionFailed;

@end
