@class NSData, NSString, NSArray, NSMutableDictionary, MRPasscodeCredentials, NSObject, NSMutableData, MRDeviceInfo;
@protocol OS_dispatch_queue;

@interface MRCoreUtilsPairingSession : MRCryptoPairingSession {
    MRPasscodeCredentials *_credentials;
    struct PairingSessionPrivate { } *_pairingSession;
    struct { void *context; void /* function */ *showSetupCode_f; void /* function */ *hideSetupCode_f; void /* function */ *promptForSetupCode_f; void /* function */ *copyIdentity_f; void /* function */ *findPeer_f; void /* function */ *savePeer_f; void /* function */ *resumeRequest_f; void /* function */ *resumeResponse_f; } _pairingDelegate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSData *inputKey;
@property (retain, nonatomic) NSMutableData *inputNonce;
@property (retain, nonatomic) NSData *outputKey;
@property (retain, nonatomic) NSMutableData *outputNonce;
@property (readonly, nonatomic) MRDeviceInfo *pairedPeerDevice;
@property (readonly, nonatomic) NSArray *pairedPeerDevices;
@property (readonly, nonatomic) NSMutableDictionary *mediaRemotePairedDevices;
@property (readonly, nonatomic) NSString *peerIdentifier;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) BOOL hasExchangedMessage;
@property (nonatomic) unsigned int pairingFlags;

- (BOOL)isPaired;
- (void)close;
- (id)encryptData:(id)a0 withError:(id *)a1;
- (void)handlePairingFailureWithStatus:(int)a0;
- (void)handlePairingExchangeData:(id)a0 completion:(id /* block */)a1;
- (id)decryptData:(id)a0 withError:(id *)a1;
- (BOOL)deleteIdentityWithError:(id *)a0;
- (id)addPeer;
- (void)open;
- (void)openInState:(unsigned long long)a0;
- (id)pairedDevices;
- (id)initWithRole:(unsigned long long)a0 device:(id)a1;
- (id)initializePairingSession:(struct PairingSessionPrivate { } *)a0;
- (BOOL)shouldAutoRetryPairingExchange:(id)a0;
- (void).cxx_destruct;
- (id)removePeer;
- (void)dealloc;
- (id)updatePeer;
- (BOOL)isValid;

@end
