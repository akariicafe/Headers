@class MTRBaseDevice, HAPCharacteristic, NSDictionary, MTRDevice, HAPCharacteristicWriteRequestTuple, HMMTRClusterDescription, NSString;

@interface HMMTRProtocolOperation : NSObject <HMFLogging>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) HMMTRClusterDescription *characteristicDescription;
@property (retain, nonatomic) id value;
@property (readonly, nonatomic) NSDictionary *clusterIDCharacteristicMap;
@property (retain, nonatomic) HAPCharacteristic *characteristic;
@property (retain, nonatomic) MTRBaseDevice *device;
@property (readonly, nonatomic) MTRDevice *matterDevice;
@property (nonatomic) unsigned long long endpoint;
@property (retain) HAPCharacteristicWriteRequestTuple *writeRequestTuple;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithOperationOfType:(unsigned long long)a0 characteristic:(id)a1 device:(id)a2 clusterIDCharacteristicMap:(id)a3;
- (id)initWithOperationOfType:(unsigned long long)a0 characteristic:(id)a1 device:(id)a2 primaryArgument:(id)a3 clusterIDCharacteristicMap:(id)a4;
- (id)initWithOperationOfType:(unsigned long long)a0 characteristic:(id)a1 matterDevice:(id)a2 clusterIDCharacteristicMap:(id)a3;
- (id)initWithOperationOfType:(unsigned long long)a0 targetCharacteristic:(id)a1 targetValue:(id)a2 device:(id)a3 clusterIDCharacteristicMap:(id)a4;
- (id)initWithOperationOfType:(unsigned long long)a0 targetCharacteristic:(id)a1 targetValue:(id)a2 matterDevice:(id)a3 clusterIDCharacteristicMap:(id)a4;

@end
