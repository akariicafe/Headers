@class NSString, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HMDSecureRemoteStreamInternal : HMFObject <HMFLogging> {
    unsigned char _cipherReadKey[32];
    unsigned char _cipherReadNonce[8];
    unsigned char _cipherWriteKey[32];
    unsigned char _cipherWriteNonce[8];
    BOOL _commitResponded;
    NSObject<OS_dispatch_source> *_idleTimer;
    NSObject<OS_dispatch_queue> *_internalQueue;
    unsigned char _pairVerifyDone;
    struct PairingSessionPrivate { } *_pairVerifySession;
    NSMutableDictionary *_prepareRequests;
    BOOL _prepareResponded;
    NSString *_sessionID;
    BOOL _started;
    int _state;
    NSMutableDictionary *_transactions;
    NSMutableArray *_userTransactions;
    long long _type;
    unsigned long long _commitTimeoutNanos;
    unsigned long long _clientIdleTimeoutNanos;
    unsigned long long _serverIdleTimeoutNanos;
    unsigned long long _sendInternalTimeoutNanos;
    unsigned long long _sendUserTimeoutNanos;
}

@property (readonly) double requestTimeout;
@property (copy) id /* block */ internalRequestHandler;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy) id /* block */ getLocalIdentityHandler;
@property (copy) id /* block */ findPeerHandler;
@property (copy) id /* block */ startedHandler;
@property (copy) id /* block */ stoppedHandler;
@property (copy) id /* block */ requestHandler;
@property (copy) id /* block */ transportSendMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)_start;
- (id)init;
- (void).cxx_destruct;
- (void)_stop:(int)a0;
- (void)dealloc;
- (void)stop;
- (void)start;
- (id)logIdentifier;
- (int)_updateIdleTimer;
- (void)_runStateMachine;
- (void)_serverCompletePrepareRequest:(id)a0;
- (void)_completeTransaction:(id)a0 response:(id)a1 options:(id)a2 status:(int)a3;
- (void)_completeUserTransaction:(id)a0 response:(id)a1 options:(id)a2 status:(int)a3;
- (void)_clientRunStateMachine;
- (void)_serverRunStateMachine;
- (void)_sendUserRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)_transportReceivedMessage:(id)a0 options:(id)a1;
- (int)_clientPairVerifyExchange:(id)a0;
- (int)_setupEncryption;
- (int)_clientSendPrepareRequest:(id)a0;
- (int)_clientSendCommitRequest:(id)a0;
- (void)_sendRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (int)_clientHandlePrepareResponse:(id)a0 options:(id)a1;
- (int)_clientHandleCommitResponse:(id)a0 options:(id)a1;
- (void)_serverPairVerifyExchange:(id)a0 options:(id)a1;
- (void)_serverHandleEncryptedRequest:(id)a0 options:(id)a1;
- (int)_serverHandleDecryptedRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (int)_serverHandlePrepareRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (int)_serverHandleCommitRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (id)initWithType:(long long)a0 commitTimeout:(unsigned long long)a1 clientIdleTimeout:(unsigned long long)a2 serverIdleTimeout:(unsigned long long)a3 sendInternalTimeout:(unsigned long long)a4 sendUserTimeout:(unsigned long long)a5;
- (void)sendRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)transportReceivedMessage:(id)a0 options:(id)a1;

@end
