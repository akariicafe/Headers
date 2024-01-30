@class NSXPCConnection, NSData, NSError, NSUUID, NSString, LAContext, LACachedExternalizedContext, NSObject, NSMutableArray, NSNumber;
@protocol LAContextXPC, LAUIDelegate;

@interface LAClient : NSObject <LAContextXPC, LAContextCallbackXPC> {
    BOOL _shouldRecoverConnection;
}

@property (readonly, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) NSObject<LAContextXPC> *remoteContext;
@property (readonly, nonatomic) NSObject<LAContextXPC> *synchronousRemoteContext;
@property (readonly, nonatomic) NSMutableArray *invalidations;
@property (retain) LACachedExternalizedContext *cachedExternalizedContext;
@property (retain) NSError *permanentError;
@property (readonly, nonatomic) NSNumber *userSession;
@property (retain, nonatomic) NSData *existingContext;
@property (retain, nonatomic) NSUUID *uuid;
@property (readonly, weak, nonatomic) LAContext *context;
@property (readonly, nonatomic) NSData *externalizedContext;
@property (weak, nonatomic) id<LAUIDelegate> uiDelegate;
@property (nonatomic) BOOL synchronous;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_performInvalidationBlocks:(id)a0;
+ (id)_queue;
+ (id)_recoveryQueue;
+ (id)createConnection:(const unsigned int *)a0 legacyService:(BOOL)a1;

- (void)setOptions:(id)a0 forInternalOperation:(long long)a1 reply:(id /* block */)a2;
- (void)authMethodWithReply:(id /* block */)a0;
- (void)setCredential:(id)a0 forProcessedEvent:(long long)a1 credentialType:(long long)a2 reply:(id /* block */)a3;
- (void)resetProcessedEvent:(long long)a0 reply:(id /* block */)a1;
- (BOOL)setServerPropertyForOption:(long long)a0 value:(id)a1 error:(id *)a2;
- (void)prearmTouchIdWithReply:(id /* block */)a0;
- (void)bootstrapServiceType:(id)a0 completionHandler:(id /* block */)a1;
- (void)_checkIdResultForTCC:(id)a0 error:(id)a1 retryBlock:(id /* block */)a2 finally:(id /* block */)a3;
- (void)_handleConnectionResult:(id)a0 uuid:(id)a1 error:(id)a2;
- (void)evaluateACL:(id)a0 operation:(id)a1 options:(id)a2 uiDelegate:(id)a3 reply:(id /* block */)a4;
- (void)invalidateWithMessage:(id)a0;
- (void)failProcessedEvent:(long long)a0 failureError:(id)a1 reply:(id /* block */)a2;
- (void)_serializedInvalidateWithMessage:(id)a0;
- (void)tccPreflightWithService:(id)a0 reply:(id /* block */)a1;
- (void)tokenForTransferToUnknownProcess:(id /* block */)a0;
- (void)credentialOfType:(long long)a0 reply:(id /* block */)a1;
- (void)setServerPropertyForOption:(long long)a0 value:(id)a1 reply:(id /* block */)a2;
- (void)allowTransferToProcess:(int)a0 receiverAuditTokenData:(id)a1 reply:(id /* block */)a2;
- (void)evaluateACL:(id)a0 operation:(id)a1 options:(id)a2 reply:(id /* block */)a3;
- (void)serverPropertyForOption:(long long)a0 reply:(id /* block */)a1;
- (id)_updateOptions:(id)a0;
- (void)setCredential:(id)a0 type:(long long)a1 reply:(id /* block */)a2;
- (void)pauseProcessedEvent:(long long)a0 pause:(BOOL)a1 reply:(id /* block */)a2;
- (id)synchronousExternalizedContextWithError:(id *)a0;
- (void).cxx_destruct;
- (void)_connectToServerWithRecovery:(BOOL)a0 userSession:(const unsigned int *)a1 legacyService:(BOOL)a2;
- (void)_performSyncCallId:(id /* block */)a0 finally:(id /* block */)a1;
- (void)invalidateWithReply:(id /* block */)a0;
- (void)optionsForInternalOperation:(long long)a0 reply:(id /* block */)a1;
- (void)evaluatePolicy:(long long)a0 options:(id)a1 reply:(id /* block */)a2;
- (void)setShowingCoachingHint:(BOOL)a0 event:(long long)a1 reply:(id /* block */)a2;
- (void)notifyEvent:(long long)a0 options:(id)a1 reply:(id /* block */)a2;
- (id)initWithExternalizedContext:(id)a0 userSession:(unsigned int *)a1 context:(id)a2;
- (id)serverPropertyForOption:(long long)a0 error:(id *)a1;
- (void)invalidatedWithError:(id)a0;
- (BOOL)_setPermanentError:(id)a0;
- (void)_scheduleRecovery;
- (void)externalizedContextWithReply:(id /* block */)a0;
- (void)retryProcessedEvent:(long long)a0 reply:(id /* block */)a1;
- (void)_performSyncCallBool:(id /* block */)a0 finally:(id /* block */)a1;
- (void)_performCallBool:(id /* block */)a0 finally:(id /* block */)a1;
- (void)resetWithReply:(id /* block */)a0;
- (void)dealloc;
- (void)_recoverConnection;
- (void)evaluatePolicy:(long long)a0 options:(id)a1 uiDelegate:(id)a2 reply:(id /* block */)a3;
- (void)_performCallId:(id /* block */)a0 finally:(id /* block */)a1;
- (id)initWithUUID:(id)a0 token:(id)a1 senderAuditTokenData:(id)a2 context:(id)a3;
- (void)_synchronousRemoteObjectProxy:(const unsigned int *)a0 performCall:(id /* block */)a1;
- (void)isCredentialSet:(long long)a0 reply:(id /* block */)a1;

@end
