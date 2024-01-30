@class NSArray;

@interface MCNetworkUsageRulesPayload : MCPayload

@property (copy, nonatomic) NSArray *applicationRules;
@property (copy, nonatomic) NSArray *SIMRules;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)verboseDescription;
- (id)stubDictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)installationWarnings;

@end
