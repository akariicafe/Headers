@class ACCiAP2ShimServer, NSMutableDictionary, NSString, ACCBLEPairingProvider, ACCBLEPairingShim, NSObject;
@protocol OS_dispatch_queue;

@interface ACCBLEPairingFeaturePlugin : NSObject <ACCBLEPairingProviderProtocol, ACCBLEPairingShimProtocol, ACCFeaturePluginProtocol>

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) ACCiAP2ShimServer *iap2server;
@property (retain, nonatomic) ACCBLEPairingProvider *blePairingProvider;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *blePairingQueue;
@property (retain, nonatomic) ACCBLEPairingShim *blePairingShim;
@property (retain, nonatomic) NSMutableDictionary *blePairingAccessoryList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *pluginName;

- (void)initPlugin;
- (void)startPlugin;
- (void)blePairingDataUpdate:(id)a0 pairType:(int)a1 pairData:(id)a2 accessory:(id)a3 blePairingUUID:(id)a4;
- (void)deviceStateUpdate:(id)a0 btRadio:(unsigned char)a1 pairStatus:(int)a2 pairModeOn:(BOOL)a3 forceUpdates:(BOOL)a4;
- (void)deviceStopBLEUpdates:(id)a0;
- (void)deviceSend:(id)a0 pairType:(int)a1 pairingData:(id)a2;
- (void)blePairing:(id)a0 accessoryAttached:(id)a1 blePairingUUID:(id)a2 accInfoDict:(id)a3 supportedPairTypes:(id)a4;
- (id)bleAccessoryForConnectionID:(unsigned int)a0;
- (void)blePairing:(id)a0 accessoryDetached:(id)a1 blePairingUUID:(id)a2;
- (void)deviceStartBLEUpdates:(id)a0 pairType:(int)a1 btRadio:(BOOL)a2 pairInfo:(BOOL)a3;
- (void)blePairingStateUpdate:(id)a0 validMask:(unsigned int)a1 btRadioOn:(BOOL)a2 pairingState:(int)a3 pairingModeOn:(BOOL)a4 accessory:(id)a5 blePairingUUID:(id)a6;
- (void)stopPlugin;
- (void)deviceUpdate:(id)a0 pairType:(int)a1 pairInfo:(id)a2;
- (BOOL)_isSupportedType:(unsigned char)a0 supportedListData:(id)a1;
- (void).cxx_destruct;
- (void)blePairingInfoUpdate:(id)a0 pairType:(int)a1 pairInfoList:(id)a2 accessory:(id)a3 blePairingUUID:(id)a4;

@end
