@class NSString, NSMutableDictionary, NSXPCConnection;
@protocol ACCBLEPairingProviderProtocol, ACCBLEPairingXPCServerProtocol;

@interface ACCBLEPairingProvider : NSObject

@property (retain, nonatomic) NSString *providerUID;
@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) id<ACCBLEPairingXPCServerProtocol> remoteObject;
@property (retain, nonatomic) NSMutableDictionary *accessories;
@property (nonatomic) int accDetectToken;
@property (weak, nonatomic) id<ACCBLEPairingProviderProtocol> delegate;
@property (nonatomic) int lastScorpiusDetectType;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)connectToServer;
- (int)getAccDetectType:(int)a0;
- (void)startBLEUpdates:(id)a0 blePairingUUID:(id)a1 pairType:(int)a2 bRadioUpdatesOn:(BOOL)a3 bPairInfoUpdatesOn:(BOOL)a4;
- (void)deviceStateUpdate:(id)a0 blePairingUUID:(id)a1 bRadioOn:(BOOL)a2 pairState:(int)a3 bPairModeOn:(BOOL)a4;
- (void)devicePairingData:(id)a0 blePairingUUID:(id)a1 pairType:(int)a2 pairData:(id)a3;
- (void)deviceUpdatePairingInfo:(id)a0 blePairingUUID:(id)a1 pairType:(int)a2 pairInfo:(id)a3;
- (void)stopBLEUpdates:(id)a0 blePairingUUID:(id)a1;
- (void)accessoryBLEPairingAttached:(id)a0 blePairingUUID:(id)a1 accInfoDict:(id)a2 supportedPairTypes:(id)a3;
- (void)accessoryBLEPairingDetached:(id)a0 blePairingUUID:(id)a1;
- (void)accessoryBLEPairingStateUpdate:(id)a0 blePairingUUID:(id)a1 validMask:(unsigned int)a2 btRadioOn:(BOOL)a3 pairingState:(int)a4 pairingModeOn:(BOOL)a5;
- (void)accessoryBLEPairingInfoUpdate:(id)a0 blePairingUUID:(id)a1 pairType:(unsigned char)a2 pairInfoList:(id)a3;
- (void)accessoryBLEPairingDataUpdate:(id)a0 blePairingUUID:(id)a1 pairType:(unsigned char)a2 pairData:(id)a3;
- (void)accessoryBLEPairingFinished:(id)a0 blePairingUUID:(id)a1;

@end
