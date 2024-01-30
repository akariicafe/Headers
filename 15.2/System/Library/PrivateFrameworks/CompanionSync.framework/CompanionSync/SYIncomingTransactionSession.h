@class SYChangeMessage, NSObject;
@protocol OS_os_activity;

@interface SYIncomingTransactionSession : SYSession {
    NSObject<OS_os_activity> *_sessionActivity;
    SYChangeMessage *_message;
    id /* block */ _completion;
    BOOL canRestart;
    BOOL canRollback;
    unsigned int state;
}

- (void)start:(id /* block */)a0;
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
- (void)didCompleteSession;
- (void)_sendComplete;
- (void)_sendChanges;
- (void)_sendCancelled;
- (id)initWithService:(id)a0 transaction:(id)a1 completion:(id /* block */)a2;

@end
