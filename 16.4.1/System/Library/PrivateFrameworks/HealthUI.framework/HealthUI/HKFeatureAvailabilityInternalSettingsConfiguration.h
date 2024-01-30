@class NSString, NSArray;

@interface HKFeatureAvailabilityInternalSettingsConfiguration : NSObject

@property (copy, nonatomic) NSString *featureIdentifier;
@property (copy, nonatomic) NSString *userDefaultsDomain;
@property (copy, nonatomic) NSString *userDefaultsFeatureEnabledKey;
@property (copy, nonatomic) NSString *userDefaultsDisabledOverrideKey;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSArray *samplesTypesToDelete;

- (void).cxx_destruct;
- (id)initWithFeatureIdentifier:(id)a0 userDefaultsDomain:(id)a1 userDefaultsFeatureEnabledKey:(id)a2 userDefaultsDisabledOverrideKey:(id)a3 options:(unsigned long long)a4 samplesTypesToDelete:(id)a5;
- (BOOL)requireReboot;
- (BOOL)showDisabledOverride;
- (BOOL)showFeatureEnable;
- (BOOL)syncToWatch;

@end
