@class NSString, NSArray;

@interface HKFeatureAvailabilityInternalSettingsConfiguration : NSObject

@property (copy, nonatomic) NSString *featureIdentifier;
@property (copy, nonatomic) NSString *userDefaultsDomain;
@property (copy, nonatomic) NSString *userDefaultsKey;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSArray *samplesTypesToDelete;

- (void).cxx_destruct;
- (id)initWithFeatureIdentifier:(id)a0 userDefaultsDomain:(id)a1 userDefaultsKey:(id)a2 options:(unsigned long long)a3 samplesTypesToDelete:(id)a4;
- (BOOL)showFeatureEnable;
- (BOOL)syncToWatch;
- (BOOL)requireReboot;

@end
