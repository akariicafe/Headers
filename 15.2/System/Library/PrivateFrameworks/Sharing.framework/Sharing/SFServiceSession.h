@class SFService, CUPairingSession;

@interface SFServiceSession : SFSession {
    CUPairingSession *_pairSetupSession;
    unsigned int _pairSetupXID;
    CUPairingSession *_pairVerifySession;
}

@property (nonatomic) unsigned long long sendLastTicks;
@property (retain, nonatomic) SFService *service;

- (void)clearEncryptionInfo;
- (int)setEncryptionReadKey:(const char *)a0 readKeyLen:(unsigned long long)a1 writeKey:(const char *)a2 writeKeyLen:(unsigned long long)a3;
- (void)sendEncryptedObject:(id)a0;
- (void)pairSetupWithFlags:(unsigned int)a0;
- (void)receivedStartRequest:(id)a0;
- (void)pairSetup:(id)a0 start:(BOOL)a1;
- (void)pairVerify:(id)a0 start:(BOOL)a1;
- (void)_receivedRequestID:(id)a0 object:(id)a1 flags:(unsigned int)a2;
- (void)_receivedResponseID:(id)a0 object:(id)a1 flags:(unsigned int)a2;
- (void)_sendFrameType:(unsigned char)a0 data:(id)a1;
- (void)_sendRequestWithFlags:(unsigned int)a0 object:(id)a1 responseHandler:(id /* block */)a2;
- (void)_sendWithFlags:(unsigned int)a0 object:(id)a1;
- (void)_sendFrameType:(unsigned char)a0 unencryptedObject:(id)a1;
- (void)receivedEncryptedData:(id)a0 type:(unsigned char)a1;
- (void)receivedUnencryptedData:(id)a0 type:(unsigned char)a1;
- (int)_pairSetupCompleted:(int)a0;
- (int)_pairVerifyCompleted:(int)a0;
- (void)sendFrameType:(unsigned char)a0 data:(id)a1;
- (BOOL)pairingContainsACL:(id)a0;
- (void)tryPIN:(id)a0;
- (void)sendRequestWithFlags:(unsigned int)a0 object:(id)a1 responseHandler:(id /* block */)a2;
- (void)sendWithFlags:(unsigned int)a0 object:(id)a1;
- (void)sessionReceivedFrameType:(unsigned char)a0 data:(id)a1;
- (void).cxx_destruct;
- (void)activate;
- (id)pairingDeriveKeyForIdentifier:(id)a0 keyLength:(unsigned long long)a1;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)_receivedObject:(id)a0 flags:(unsigned int)a1;
- (void)_hearbeatTimer;

@end
