@class NSString;
@protocol ACCOOBBTPairingShimProtocol;

@interface ACCOOBBTPairingShim : NSObject <ACCiAP2ShimServerDelegate>

@property (readonly) NSString *uid;
@property (weak, nonatomic) id<ACCOOBBTPairingShimProtocol> delegate;

- (void).cxx_destruct;
- (void)accessoryDetached:(id)a0;
- (void)dealloc;
- (id)getUID;
- (id)description;
- (id)initWithDelegate:(id)a0;
- (void)beginPairingWithCurrentAccessory:(id)a0;
- (BOOL)tryProcessXPCMessage:(id)a0 connection:(id)a1 server:(id)a2;
- (void)accessoryAttached:(id)a0 accInfoDict:(id)a1;
- (void)accessoryInfo:(id)a0 oobBtPairingUID:(id)a1 accessoryMacAddr:(id)a2 deviceClass:(unsigned int)a3;
- (void)accessoryPairingCompletion:(id)a0 oobBtPairingUID:(id)a1 result:(unsigned char)a2;

@end
