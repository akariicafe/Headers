@class NSSet, NSDictionary;

@interface GCDeviceConfigurationEvaluator : NSObject

@property (copy, nonatomic) NSSet *configurationsIN;
@property (copy, nonatomic) NSDictionary *deviceManagersIN;
@property (copy, nonatomic) NSDictionary *physicalDevicesIN;
@property (readonly, nonatomic) NSSet *viableConfigurationsOUT;
@property (readonly, nonatomic) NSDictionary *deviceOwnersOUT;

- (void).cxx_destruct;
- (void)evaluate;
- (unsigned long long)viableConfigurations:(id *)a0 deviceOwners:(id *)a1;

@end
