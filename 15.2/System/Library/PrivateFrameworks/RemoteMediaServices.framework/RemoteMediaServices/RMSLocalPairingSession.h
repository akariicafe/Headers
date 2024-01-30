@class NSString, RMSPairingServer;
@protocol RMSPairingSessionDelegate;

@interface RMSLocalPairingSession : NSObject <NSNetServiceDelegate, RMSPairingServerDelegate, RMSPairingSession> {
    RMSPairingServer *_pairingServer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RMSPairingSessionDelegate> delegate;
@property (retain, nonatomic) NSString *passcode;
@property (retain, nonatomic) NSString *advertisedAppName;
@property (retain, nonatomic) NSString *advertisedDeviceName;
@property (retain, nonatomic) NSString *advertisedDeviceModel;

- (void)netService:(id)a0 didNotPublish:(id)a1;
- (void)netServiceDidStop:(id)a0;
- (void)netServiceDidPublish:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)endPairing;
- (void)beginPairing;
- (void)unpairService:(id)a0 completionHandler:(id /* block */)a1;
- (id)_generatePublicKey;
- (id)_expectedPasscodeHashForPasscode:(id)a0 publicKey:(id)a1;
- (void)_startBonjourAdvertisingWithPublicKey:(id)a0 httpServerPort:(unsigned short)a1;
- (id)_pairingNetServiceName;
- (void)pairingServer:(id)a0 didPairWithService:(id)a1 pairingGUID:(id)a2;
- (void)pairingServerDidFail:(id)a0;

@end
