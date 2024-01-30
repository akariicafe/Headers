@class NSMutableDictionary, NSString, NSXPCConnection, NSLock;
@protocol ACCBLEPairingXPCServerProtocol;

@interface ACCBLEPairingProviderInternal : NSObject

@property (retain, nonatomic) NSMutableDictionary *delegateList;
@property (retain, nonatomic) NSLock *delegateListLock;
@property (retain, nonatomic) NSString *providerUID;
@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) id<ACCBLEPairingXPCServerProtocol> remoteObject;
@property (retain, nonatomic) NSMutableDictionary *accessories;
@property (nonatomic) int accDetectToken;
@property (nonatomic) int lastScorpiusDetectType;

+ (id)SharedInstance;

- (id)initSharedInstance;
- (void)dealloc;
- (void)connectToServer;
- (void).cxx_destruct;
- (void)accessoryBLEPairingDataUpdate:(id)a0 blePairingUUID:(id)a1 pairType:(unsigned char)a2 pairData:(id)a3;
- (void)accessoryBLEPairingAttached:(id)a0 blePairingUUID:(id)a1 accInfoDict:(id)a2 supportedPairTypes:(id)a3;
- (void)accessoryBLEPairingDetachAll;
- (void)accessoryBLEPairingDetached:(id)a0 blePairingUUID:(id)a1;
- (void)accessoryBLEPairingFinished:(id)a0 blePairingUUID:(id)a1;
- (void)accessoryBLEPairingInfoUpdate:(id)a0 blePairingUUID:(id)a1 pairType:(unsigned char)a2 pairInfoList:(id)a3;
- (void)accessoryBLEPairingStateUpdate:(id)a0 blePairingUUID:(id)a1 validMask:(unsigned int)a2 btRadioOn:(BOOL)a3 pairingState:(int)a4 pairingModeOn:(BOOL)a5;
- (void)devicePairingData:(id)a0 blePairingUUID:(id)a1 pairType:(int)a2 pairData:(id)a3;
- (void)deviceStateUpdate:(id)a0 blePairingUUID:(id)a1 bRadioOn:(BOOL)a2 pairState:(int)a3 bPairModeOn:(BOOL)a4;
- (void)deviceUpdatePairingInfo:(id)a0 blePairingUUID:(id)a1 pairType:(int)a2 pairInfo:(id)a3;
- (int)getAccDetectType:(int)a0;
- (void)registerDelegate:(id)a0 provider:(id)a1 forUUID:(id)a2;
- (void)startBLEUpdates:(id)a0 blePairingUUID:(id)a1 pairType:(int)a2 bRadioUpdatesOn:(BOOL)a3 bPairInfoUpdatesOn:(BOOL)a4;
- (void)stopBLEUpdates:(id)a0 blePairingUUID:(id)a1;
- (void)unregisterDelegateForUUID:(id)a0;

@end
