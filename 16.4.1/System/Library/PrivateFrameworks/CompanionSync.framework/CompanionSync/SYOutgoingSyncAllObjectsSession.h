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

- (id)initWithService:(id)a0;
- (unsigned int)state;
- (BOOL)isSending;
- (void)start:(id /* block */)a0;
- (void)cancelWithError:(id)a0;
- (unsigned long long)protocolVersion;
- (BOOL)wasCancelled;
- (void).cxx_destruct;
- (void)setState:(unsigned int)a0;
- (BOOL)isResetSync;
- (void)_fetchChanges;
- (void)setCanRollback:(BOOL)a0;
- (BOOL)_handleBatchSyncEndResponse:(id)a0 error:(id *)a1;
- (void)_installStateListener;
- (void)_installTimers;
- (void)_processNextState;
- (void)_sendChanges;
- (void)_sessionCompleteWithError:(id)a0;
- (void)_sessionFailed;
- (void)_setStateQuietly:(unsigned int)a0;
- (BOOL)canRestart;
- (BOOL)canRollback;
- (double)remainingSessionTime;
- (void)setCanRestart:(BOOL)a0;

@end
