@class NSDictionary, NSArray, NSNumber;

@interface MCDNSSettingsPayload : MCPayload

@property (readonly, copy, nonatomic) NSDictionary *configurationDictionary;
@property (readonly, copy, nonatomic) NSDictionary *dnsSettings;
@property (readonly, copy, nonatomic) NSArray *onDemandRules;
@property (readonly, copy, nonatomic) NSNumber *prohibitDisablement;

+ (id)localizedPluralForm;
+ (id)typeStrings;
+ (id)localizedSingularForm;

- (void).cxx_destruct;
- (id)verboseDescription;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;

@end
