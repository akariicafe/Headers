@class NSData, ACCiAP2ShimAccessory;

@interface ACCBLEPairingAccessory : NSObject

@property (retain, nonatomic) ACCiAP2ShimAccessory *iap2ShimAccessory;
@property (retain, nonatomic) NSData *blePairingUUID;
@property (retain, nonatomic) NSData *supportedPairTypes;
@property (nonatomic) int selectedPairType;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
