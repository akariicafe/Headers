@class ACCiAP2ShimServer, ACCOOBBTPairingProvider, ACCOOBBTPairingShim, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ACCOOBBTPairingFeaturePlugin : NSObject <ACCOOBBTPairingProviderProtocol, ACCOOBBTPairingShimProtocol, ACCFeaturePluginProtocol>

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) ACCiAP2ShimServer *iap2server;
@property (retain, nonatomic) ACCOOBBTPairingProvider *oobBtPairingProvider;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *oobBtPairingQueue;
@property (retain, nonatomic) ACCOOBBTPairingShim *oobBtPairingShim;
@property (retain, nonatomic) NSMutableDictionary *oobBtPairingAccessoryList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *pluginName;

- (void)initPlugin;
- (void)startPlugin;
- (void)stopPlugin;
- (void)oobBtPairing:(id)a0 accessoryDetached:(id)a1;
- (id)oobBtAccessoryForConnectionID:(unsigned int)a0;
- (void)linkKey:(id)a0 deviceMacAddr:(id)a1 accessory:(id)a2;
- (void)startOOBBTPairing:(id)a0;
- (void)stopOOBBTPairing:(id)a0;
- (void)oobBtPairing:(id)a0 accessoryAttached:(id)a1 accInfoDict:(id)a2;
- (void).cxx_destruct;
- (void)oobBtPairing:(id)a0 completion:(id)a1 oobBtPairingUID:(id)a2 accessoryMacAddr:(id)a3 result:(unsigned char)a4;
- (void)oobBtPairing:(id)a0 legacyConnectionIDForAccessoryUID:(id)a1 connectionID:(unsigned int)a2;
- (void)oobBtPairing:(id)a0 accessoryInfo:(id)a1 oobBtPairingUID:(id)a2 accessoryMacAddr:(id)a3 deviceClass:(unsigned int)a4;

@end
