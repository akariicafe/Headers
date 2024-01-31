@class NSString, NSDictionary, NSData;

@interface ACCBLEPairingAccessory : NSObject

@property (retain, nonatomic) NSString *accessoryUID;
@property (nonatomic) BOOL desiredBLEPairingState;
@property (retain, nonatomic) NSDictionary *accInfo;
@property (retain, nonatomic) NSData *blePairingUUID;
@property (retain, nonatomic) NSData *supportedPairTypes;
@property (nonatomic) BOOL blePairingFinished;

- (void).cxx_destruct;
- (id)initWithAccessoryUID:(id)a0 blePairingUUID:(id)a1 andAccInfo:(id)a2 supportedPairTypes:(id)a3;

@end
