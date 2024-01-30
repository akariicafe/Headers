@interface CLEmergencyLocationUsabilityCriteria : NSObject

@property (nonatomic) BOOL vuncCheckRequiredForUsability;
@property (nonatomic) BOOL altitudeStitchingEnabled;
@property (nonatomic) double maxUsableAge;
@property (nonatomic) double maxUsableHunc;
@property (nonatomic) double maxUsableVunc;
@property (nonatomic) unsigned int minUsableIntegrity;

- (id)init;
- (void)printUsabilityCriteria:(id)a0;

@end
