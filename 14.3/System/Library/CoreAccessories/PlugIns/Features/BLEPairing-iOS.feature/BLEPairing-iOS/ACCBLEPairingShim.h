@class NSString;
@protocol ACCBLEPairingShimProtocol;

@interface ACCBLEPairingShim : NSObject <ACCiAP2ShimServerDelegate>

@property (readonly) NSString *uid;
@property (weak, nonatomic) id<ACCBLEPairingShimProtocol> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)getUID;
- (id)description;
- (id)initWithDelegate:(id)a0;
- (BOOL)tryProcessXPCMessage:(id)a0 connection:(id)a1 server:(id)a2;
- (void)accessoryAttached:(id)a0 blePairingUUID:(id)a1 accInfoDict:(id)a2 supportedPairTypes:(id)a3;
- (void)accessoryDetached:(id)a0 blePairingUUID:(id)a1;
- (void)stateUpdate:(id)a0 blePairingUUID:(id)a1 validMask:(unsigned int)a2 btRadioOn:(BOOL)a3 pairingState:(int)a4 pairingModeOn:(BOOL)a5;
- (void)stateUpdate:(id)a0 blePairingUUID:(id)a1 pairType:(int)a2 pairInfoList:(id)a3;
- (void)dataUpdate:(id)a0 blePairingUUID:(id)a1 pairType:(int)a2 pairData:(id)a3;

@end
