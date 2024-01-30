@class NSString, TVRMSPairingServer;
@protocol TVRMSPairingSessionDelegate;

@interface TVRMSPairingSession : NSObject <NSNetServiceDelegate, TVRMSPairingServerDelegate, TVRMSPairingSession> {
    TVRMSPairingServer *_pairingServer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TVRMSPairingSessionDelegate> delegate;
@property (retain, nonatomic) NSString *passcode;
@property (retain, nonatomic) NSString *advertisedAppName;
@property (retain, nonatomic) NSString *advertisedDeviceName;
@property (retain, nonatomic) NSString *advertisedDeviceModel;

+ (id)localPairingSession;
+ (id)proxyPairingSession;

- (id)init;
- (void).cxx_destruct;
- (void)netService:(id)a0 didNotPublish:(id)a1;
- (void)netServiceDidPublish:(id)a0;
- (void)dealloc;
- (void)netServiceDidStop:(id)a0;
- (void)endPairing;
- (void)beginPairing;
- (id)_generatePublicKey;
- (id)_expectedPasscodeHashForPasscode:(id)a0 publicKey:(id)a1;
- (void)_startBonjourAdvertisingWithPublicKey:(id)a0 httpServerPort:(unsigned short)a1;
- (id)_pairingNetServiceName;
- (void)pairingServer:(id)a0 didPairWithService:(id)a1 pairingGUID:(id)a2;
- (void)pairingServerDidFail:(id)a0;

@end
