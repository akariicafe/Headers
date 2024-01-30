@class NSString, NSDictionary;

@interface ACCBLEPairingAccessory : NSObject

@property (retain, nonatomic) NSString *accessoryUID;
@property (nonatomic) BOOL desiredBLEPairingState;
@property (retain, nonatomic) NSDictionary *accInfo;

- (void).cxx_destruct;
- (id)initWithAccessoryUID:(id)a0 andAccInfo:(id)a1;

@end
