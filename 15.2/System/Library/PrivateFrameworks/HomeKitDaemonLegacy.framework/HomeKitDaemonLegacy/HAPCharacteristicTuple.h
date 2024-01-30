@class HAPCharacteristic, NSString;

@interface HAPCharacteristicTuple : HMFObject

@property (retain, nonatomic) HAPCharacteristic *hapCharacteristic;
@property (retain, nonatomic) NSString *serverIdentifier;
@property long long linkType;

- (void).cxx_destruct;
- (id)initWithHAPCharacteristic:(id)a0 serverIdentifier:(id)a1 linkType:(long long)a2;

@end
