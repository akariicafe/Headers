@class NSDictionary;

@interface MCFeatureFlagsPayload : MCPayload

@property (readonly, nonatomic) NSDictionary *featureFlagsConfiguration;
@property (readonly, nonatomic) unsigned long long featureFlagCount;
@property (readonly, nonatomic) unsigned long long disclosureCount;

+ (BOOL)isConfigurationValid:(id)a0 error:(id *)a1;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)invalidConfigurationErrorWithUnderlyingError:(id)a0;
- (BOOL)isAllowedToWriteFeatureFlags;
- (id)title;
- (id)stubDictionary;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (void).cxx_destruct;
- (id)verboseDescription;

@end
