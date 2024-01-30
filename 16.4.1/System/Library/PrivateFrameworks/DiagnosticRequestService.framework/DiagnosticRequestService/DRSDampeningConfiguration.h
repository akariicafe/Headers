@interface DRSDampeningConfiguration : NSObject

@property (nonatomic) double hysteresis;
@property (nonatomic) unsigned long long countCap;
@property (nonatomic) double acceptanceRate;

+ (id)hangTracerIOSInternalDownsamplingConfiguration;
+ (id)hangTracerIOSInternalNoDownsamplingConfiguration;
+ (id)coreAudioOverloadConfiguration;
+ (id)nandAutoGBBSweepConfiguration;
+ (id)RMEIssueCategoryConfiguration;
+ (id)watchdogdDefaultConfiguration;
+ (id)defaultSignatureDampeningConfiguration;
+ (id)ppsArchiveConfiguration;
+ (id)mailIssueCategoryConfiguration;
+ (id)spindumpMacOSSlowHIDConfiguration_Internal;
+ (id)sentryMacOSAppLaunchConfiguration;
+ (id)_entityName;
+ (id)hangTracerWatchOSInternalOrSeedDownsamplingConfiguration;
+ (id)caHitchesConfiguration;
+ (id)drmResourceUsageConfiguration;
+ (id)memoryToolsDefaultConfiguration;
+ (id)rapidMicroDiagnosticsConfiguration;
+ (id)spindumpMacOSSlowHIDConfiguration_SeedRC;
+ (id)memoryToolsInternalMemgraphOverTimeConfiguration;
+ (id)hangTracerIOSCustomerConfiguration;
+ (id)nandDefaultConfiguration;
+ (id)hangTracerWatchOSInternalOrSeedNoDownsamplingConfiguration;
+ (id)hangTracerIOSSeedConfiguration;

- (id)initWithPlistDict:(id)a0;
- (id)jsonCompatibleDictRepresentation;
- (id)_ON_MOC_QUEUE_moRepresentationInContext:(id)a0 identifier:(id)a1;
- (id)initWithHysteresis:(double)a0 cap:(unsigned long long)a1 acceptanceRate:(double)a2;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToDampeningConfiguration:(id)a0;
- (id)_initWithMO_ON_MOC_QUEUE:(id)a0;

@end
