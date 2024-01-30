@class HAPCharacteristic, CHIPDevice, CHIPPluginClusterDescription;

@interface CHIPPluginProtocolOperation : NSObject

@property (retain, nonatomic) HAPCharacteristic *characteristic;
@property (retain, nonatomic) CHIPDevice *device;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) CHIPPluginClusterDescription *characteristicDescription;
@property (retain, nonatomic) id value;

- (void).cxx_destruct;
- (id)initWithOperationOfType:(unsigned long long)a0 characteristic:(id)a1 device:(id)a2;
- (id)initWithOperationOfType:(unsigned long long)a0 characteristic:(id)a1 device:(id)a2 primaryArgument:(id)a3;
- (id)initWithOperationOfType:(unsigned long long)a0 targetCharacteristic:(id)a1 targetValue:(id)a2 device:(id)a3;

@end
