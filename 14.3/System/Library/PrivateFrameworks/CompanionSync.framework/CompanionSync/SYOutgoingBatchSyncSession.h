@class _SYCountedSemaphore, _SYMessageTimerTable, NSMutableIndexSet, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, OS_os_activity;

@interface SYOutgoingBatchSyncSession : SYSession {
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    NSObject<OS_dispatch_source> *_sessionTimer;
    unsigned long long _batchIndex;
    NSMutableIndexSet *_ackedBatchIndices;
    NSObject<OS_dispatch_queue> *_changeFetcherQueue;
    _SYCountedSemaphore *_changeConcurrencySemaphore;
    NSObject<OS_os_activity> *_changeWaitActivity;
    NSObject<OS_os_activity> *_sessionActivity;
    unsigned int _state;
    BOOL _errorIsLocal;
    BOOL _hasSentEnd;
    _SYMessageTimerTable *_timers;
    double _sessionStartTime;
    BOOL _canRestart;
    BOOL _canRollback;
    BOOL _cancelled;
}

- (void)start:(id /* block */)a0;
- (void).cxx_destruct;
- (unsigned long long)protocolVersion;
- (BOOL)isSending;
- (id)initWithService:(id)a0;
- (void)cancelWithError:(id)a0;
- (void)setState:(unsigned int)a0;
- (BOOL)wasCancelled;
- (void)_fetchNextBatch;
- (unsigned int)state;
- (BOOL)isResetSync;
- (BOOL)canRestart;
- (void)setCanRestart:(BOOL)a0;
- (BOOL)canRollback;
- (void)setCanRollback:(BOOL)a0;
- (void)_messageExpiredWithSeqno:(unsigned long long)a0 identifier:(id)a1;
- (void)_sendSyncBatch:(id)a0 nextState:(unsigned int)a1;
- (void)_setMessageTimerForSeqno:(unsigned long long)a0;
- (void)_notifySessionComplete;
- (void)_sendSyncStart;
- (void)_setStateQuietly:(unsigned int)a0;
- (void)_sendSyncCompleteAndRunBlock:(id /* block */)a0;
- (void)_waitForMessageWindow;
- (void)_sendSyncCancelled;
- (void)_sendSyncRestart;
- (void)_sessionComplete;
- (void)_processNextState;
- (void)_installStateListener;
- (void)_installTimers;
- (void)_setupChangeConcurrency;
- (double)remainingSessionTime;
- (BOOL)_handleBatchAck:(id)a0 error:(id *)a1;
- (BOOL)_handleBatchSyncEndResponse:(id)a0 error:(id *)a1;
- (void)_sentMessageWithIdentifier:(id)a0 userInfo:(id)a1;

@end
