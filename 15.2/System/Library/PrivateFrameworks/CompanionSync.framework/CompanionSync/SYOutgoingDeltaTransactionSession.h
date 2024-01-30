@class _SYMessageTimerTable, _SYCountedSemaphore, NSObject;
@protocol OS_dispatch_source, OS_os_activity, OS_dispatch_queue;

@interface SYOutgoingDeltaTransactionSession : SYSession {
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    NSObject<OS_os_activity> *_sessionActivity;
    unsigned int _state;
    NSObject<OS_dispatch_queue> *_changeFetcherQueue;
    _SYCountedSemaphore *_changeConcurrencySemaphore;
    NSObject<OS_os_activity> *_changeWaitActivity;
    _SYMessageTimerTable *_timers;
    BOOL _canRestart;
    BOOL _canRollback;
    BOOL _cancelled;
}

- (void)start:(id /* block */)a0;
- (id)initWithService:(id)a0;
- (BOOL)wasCancelled;
- (unsigned long long)protocolVersion;
- (BOOL)isSending;
- (void)setState:(unsigned int)a0;
- (void)_fetchNextBatch;
- (unsigned int)state;
- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (BOOL)isResetSync;
- (BOOL)canRestart;
- (void)setCanRestart:(BOOL)a0;
- (BOOL)canRollback;
- (void)setCanRollback:(BOOL)a0;
- (void)_messageExpiredWithSeqno:(unsigned long long)a0 identifier:(id)a1;
- (void)_sendSyncBatch:(id)a0 nextState:(unsigned int)a1;
- (void)_setMessageTimerForSeqno:(unsigned long long)a0;
- (void)_notifySessionComplete;
- (void)_setStateQuietly:(unsigned int)a0;
- (void)_waitForMessageWindow;
- (void)_processNextState;
- (void)_installStateListener;
- (void)_setupChangeConcurrency;
- (void)_sentMessageWithIdentifier:(id)a0 userInfo:(id)a1;
- (void)_peerProcessedMessageWithIdentifier:(id)a0 userInfo:(id)a1;

@end
