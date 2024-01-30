@class NSString;
@protocol ACCOOBBTPairingShimProtocol;

@interface ACCOOBBTPairingShim : NSObject <ACCiAP2ShimServerDelegate>

@property (readonly) NSString *uid;
@property (weak, nonatomic) id<ACCOOBBTPairingShimProtocol> delegate;

- (void)accessoryDetached:(id)a0;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)getUID;
- (BOOL)tryProcessXPCMessage:(id)a0 connection:(id)a1 server:(id)a2;
- (void)accessoryAttached:(id)a0 accInfoDict:(id)a1;
- (void)accessoryInfo:(id)a0 oobBtPairingUID:(id)a1 accessoryMacAddr:(id)a2 deviceClass:(unsigned int)a3;
- (void)accessoryPairingCompletion:(id)a0 oobBtPairingUID:(id)a1 accessoryMacAddr:(id)a2 sendStop:(BOOL)a3 result:(unsigned char)a4;
- (void)beginPairingWithCurrentAccessory:(id)a0;

@end
