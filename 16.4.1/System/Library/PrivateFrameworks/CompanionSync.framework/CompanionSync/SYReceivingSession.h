@class NSMutableIndexSet, NSObject;
@protocol OS_dispatch_source, OS_os_activity, OS_dispatch_group;

@interface SYReceivingSession : SYSession {
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    NSObject<OS_dispatch_source> *_sessionTimer;
    NSMutableIndexSet *_receivedBatchIndices;
    NSObject<OS_os_activity> *_sessionActivity;
    NSObject<OS_dispatch_group> *_asyncResetGroupToWaitOn;
    id /* block */ _weakBlockWaitingForReset;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _flagsLock;
    struct { unsigned char state : 4; unsigned char canRestart : 1; unsigned char canRollback : 1; unsigned char isResetSync : 1; unsigned char started : 1; unsigned char cancelled : 1; unsigned char completed : 1; unsigned char changedMetadata : 1; } _flags;
}

@property (readonly, nonatomic) BOOL metadataModified;

- (BOOL)_handleStartSessionResponse:(id)a0 error:(id *)a1;
- (unsigned int)state;
- (BOOL)_handleSyncBatchResponse:(id)a0 error:(id *)a1;
- (id)_newMessageHeader;
- (void)setSessionMetadata:(id)a0;
- (BOOL)isSending;
- (void)start:(id /* block */)a0;
- (BOOL)_handleRestartSessionResponse:(id)a0 error:(id *)a1;
- (void)cancelWithError:(id)a0;
- (void)setDelegate:(id)a0;
- (BOOL)_handleEndSessionResponse:(id)a0 error:(id *)a1;
- (BOOL)wasCancelled;
- (void).cxx_destruct;
- (void)setState:(unsigned int)a0;
- (BOOL)_hasStarted;
- (void)_continue;
- (BOOL)isResetSync;
- (BOOL)_hasCompleted;
- (void)setCanRollback:(BOOL)a0;
- (void)_handleEndSession:(id)a0 response:(id)a1 completion:(id /* block */)a2;
- (void)_handleRestartSession:(id)a0 response:(id)a1 completion:(id /* block */)a2;
- (void)_handleSyncBatch:(id)a0 response:(id)a1 completion:(id /* block */)a2;
- (void)_installStateListener;
- (void)_installTimers;
- (BOOL)_isMissingSyncBatches;
- (void)_midStreamErrorHandled;
- (void)_notifyErrorAndShutdown;
- (void)_peerProcessedMessageWithIdentifier:(id)a0 userInfo:(id)a1;
- (BOOL)_postAsyncResetRequestReturningError:(id *)a0;
- (void)_processNextState;
- (void)_resolvedIdentifier:(id)a0 forResponse:(id)a1;
- (void)_resolvedIdentifierForRequest:(id)a0;
- (void)_sendEndSessionAndError:(id)a0;
- (void)_sentMessageWithIdentifier:(id)a0 userInfo:(id)a1;
- (void)_sessionCancelled;
- (void)_sessionFinished;
- (void)_sessionRestarted;
- (void)_setCancelled;
- (void)_setCompleted;
- (void)_setStarted;
- (void)_setStateQuietly:(unsigned int)a0;
- (void)_tweakMessageHeader:(id)a0;
- (BOOL)canRestart;
- (BOOL)canRollback;
- (id)initWithService:(id)a0 isReset:(BOOL)a1 metadata:(id)a2;
- (void)setCanRestart:(BOOL)a0;

@end
