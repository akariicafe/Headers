@class HAPCharacteristic;

@interface HAPCharacteristicConfigurationRequestTuple : HMFObject

@property (retain, nonatomic) HAPCharacteristic *characteristic;
@property (nonatomic) BOOL broadcastEnable;
@property (nonatomic) unsigned long long broadcastInterval;

+ (id)configurationTupleForCharacteristic:(id)a0 broadcastEnable:(BOOL)a1 broadcastInterval:(unsigned long long)a2;

- (void).cxx_destruct;

@end
