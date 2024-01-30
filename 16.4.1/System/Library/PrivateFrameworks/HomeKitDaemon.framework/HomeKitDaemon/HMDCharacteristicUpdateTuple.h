@class HMDCharacteristic, HMDCharacteristicResponse;

@interface HMDCharacteristicUpdateTuple : HMFObject

@property (retain, nonatomic) id value;
@property (readonly, nonatomic) HMDCharacteristic *characteristic;
@property (readonly, nonatomic) id updatedValue;
@property (readonly, nonatomic, getter=isBroadcast) BOOL broadcast;
@property (retain, nonatomic) HMDCharacteristicResponse *characteristicResponse;
@property (readonly, nonatomic) unsigned long long reasons;

+ (id)characteristicUpdateTuplesWithCharacteristics:(id)a0 isBroadcast:(BOOL)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCharacteristic:(id)a0 updatedValue:(id)a1 isBroadcast:(BOOL)a2;
- (id)initWithCharacteristic:(id)a0 updatedValue:(id)a1 isBroadcast:(BOOL)a2 reasons:(unsigned long long)a3;

@end
