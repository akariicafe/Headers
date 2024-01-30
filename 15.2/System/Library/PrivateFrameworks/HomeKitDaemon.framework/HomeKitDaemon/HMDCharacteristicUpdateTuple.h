@class HMDCharacteristic;

@interface HMDCharacteristicUpdateTuple : HMFObject

@property (readonly, nonatomic) HMDCharacteristic *characteristic;
@property (readonly, nonatomic) id updatedValue;
@property (readonly, nonatomic, getter=isBroadcast) BOOL broadcast;

+ (id)characteristicUpdateTuplesWithCharacteristics:(id)a0 isBroadcast:(BOOL)a1;

- (void).cxx_destruct;
- (id)initWithCharacteristic:(id)a0 updatedValue:(id)a1 isBroadcast:(BOOL)a2;

@end
