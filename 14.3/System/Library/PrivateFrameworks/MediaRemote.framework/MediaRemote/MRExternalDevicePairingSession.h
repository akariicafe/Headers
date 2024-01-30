@class MRCryptoPairingSessionBlockDelegate, MRCoreUtilsPairingSession;

@interface MRExternalDevicePairingSession : MRCryptoPairingSession

@property (retain, nonatomic) MRCoreUtilsPairingSession *pairingSession;
@property (retain, nonatomic) MRCryptoPairingSessionBlockDelegate *pairingDelegate;
@property (readonly, nonatomic) BOOL hasExchangedMessage;
@property (readonly, nonatomic, getter=isUsingSystemPairing) BOOL usingSystemPairing;
@property (readonly, nonatomic) unsigned long long state;

- (BOOL)isPaired;
- (id)initWithDevice:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (id)pairedDevices;
- (BOOL)isValid;
- (id)encryptData:(id)a0 withError:(id *)a1;
- (void)handlePairingExchangeData:(id)a0 completion:(id /* block */)a1;
- (void)handlePairingFailureWithStatus:(int)a0;
- (id)decryptData:(id)a0 withError:(id *)a1;
- (BOOL)deleteIdentityWithError:(id *)a0;
- (void)setDelegate:(id)a0;
- (void)open;
- (id)removePeer;
- (id)updatePeer;

@end
