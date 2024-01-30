@class HAPCharacteristic, NSString;

@interface HAPAccessoryReachabilityProfile : HMFObject <HAPAccessoryReachabilityProfile>

@property (retain, nonatomic) HAPCharacteristic *sleepIntervalCharacteristic;
@property (retain, nonatomic) HAPCharacteristic *pollCharacteristic;
@property (nonatomic) double sleepInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (double)timeIntervalFromMillisecondNumberValue:(id)a0;

- (id)initWithProfile:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDiscoveredServices:(id)a0;

@end
