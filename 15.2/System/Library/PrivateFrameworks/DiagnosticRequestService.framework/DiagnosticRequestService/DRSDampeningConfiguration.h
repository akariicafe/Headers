@interface DRSDampeningConfiguration : NSObject

@property (nonatomic) double hysteresis;
@property (nonatomic) unsigned long long countCap;
@property (nonatomic) double acceptanceRate;

+ (id)defaultSignatureDampeningConfiguration;
+ (id)rapidMicroDiagnosticsConfiguration;
+ (id)spindumpMacOSSlowHIDConfiguration_SeedRC;
+ (id)memoryToolsInternalMemgraphOverTimeConfiguration;
+ (id)hangTracerInternalDownsamplingConfiguration;
+ (id)spindumpMacOSSlowHIDConfiguration_Internal;
+ (id)hangTracerInternalNoDownsamplingConfiguration;
+ (id)sentryMacOSAppLaunchConfiguration;
+ (id)nandDefaultConfiguration;
+ (id)hangTracerSeedConfiguration;
+ (id)coreAudioOverloadConfiguration;
+ (id)memoryToolsDefaultConfiguration;
+ (id)_entityName;
+ (id)drmResourceUsageConfiguration;
+ (id)hangTracerCustomerConfiguration;

- (id)initWithHysteresis:(double)a0 cap:(unsigned long long)a1 acceptanceRate:(double)a2;
- (id)jsonCompatibleDictRepresentation;
- (id)description;
- (id)_ON_MOC_QUEUE_moRepresentationInContext:(id)a0 identifier:(id)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToDampeningConfiguration:(id)a0;
- (id)debugDescription;
- (id)_initWithMO_ON_MOC_QUEUE:(id)a0;

@end
