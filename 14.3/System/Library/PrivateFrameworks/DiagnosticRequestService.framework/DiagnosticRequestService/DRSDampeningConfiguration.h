@interface DRSDampeningConfiguration : NSObject

@property (nonatomic) double hysteresis;
@property (nonatomic) unsigned long long countCap;
@property (nonatomic) double acceptanceRate;

+ (id)_entityName;
+ (id)defaultSignatureDampeningConfiguration;
+ (id)nandDefaultConfiguration;
+ (id)hangTracerNoDownsamplingConfiguration;
+ (id)hangTracerDownsamplingConfiguration;
+ (id)sentryMacOSAppLaunchConfiguration;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithHysteresis:(double)a0 cap:(unsigned long long)a1 acceptanceRate:(double)a2;
- (id)_initWithMO_ON_MOC_QUEUE:(id)a0;
- (id)jsonCompatibleDictRepresentation;
- (BOOL)isEqualToDampeningConfiguration:(id)a0;
- (id)_ON_MOC_QUEUE_moRepresentationInContext:(id)a0 identifier:(id)a1;

@end
