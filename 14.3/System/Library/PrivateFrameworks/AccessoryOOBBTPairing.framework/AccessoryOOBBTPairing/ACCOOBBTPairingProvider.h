@class NSString, NSMutableDictionary, NSXPCConnection;
@protocol ACCOOBBTPairingXPCServerProtocol, ACCOOBBTPairingProviderProtocol;

@interface ACCOOBBTPairingProvider : NSObject

@property (retain, nonatomic) NSString *providerUID;
@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) id<ACCOOBBTPairingXPCServerProtocol> remoteObject;
@property (retain, nonatomic) NSMutableDictionary *accessories;
@property (weak, nonatomic) id<ACCOOBBTPairingProviderProtocol> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)startOOBBTPairing:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)stopOOBBTPairing:(id)a0;
- (void)connectToServer;
- (id)accessoryInfoDictionaryForLogging:(id)a0;
- (void)requestLegacyConnectionIDForAccessoryUID:(id)a0;
- (void)linkKeyInfo:(id)a0 oobBtPairingUID:(id)a1 linkKey:(id)a2 deviceMacAddr:(id)a3;
- (void)accessoryOOBBTPairingAttached:(id)a0 accInfoDict:(id)a1;
- (void)accessoryOOBBTPairingDetached:(id)a0;
- (void)accessoryOOBBTPairingBTAccessoryInfo:(id)a0 oobBtPairingUID:(id)a1 accessoryMacAddr:(id)a2 deviceClass:(unsigned int)a3;
- (void)accessoryOOBBTPairingCompletionStatus:(id)a0 oobBtPairingUID:(id)a1 result:(unsigned char)a2;
- (void)legacyConnectionIDForAccessoryUID:(id)a0 connectionID:(unsigned int)a1;

@end
