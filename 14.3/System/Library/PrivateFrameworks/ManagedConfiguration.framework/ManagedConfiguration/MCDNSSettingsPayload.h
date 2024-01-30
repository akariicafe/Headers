@class NSDictionary, NSArray, NSNumber;

@interface MCDNSSettingsPayload : MCPayload

@property (readonly, copy, nonatomic) NSDictionary *configurationDictionary;
@property (readonly, copy, nonatomic) NSDictionary *dnsSettings;
@property (readonly, copy, nonatomic) NSArray *onDemandRules;
@property (readonly, copy, nonatomic) NSNumber *prohibitDisablement;

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
