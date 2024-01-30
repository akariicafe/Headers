@class NSDictionary, NSArray;

@interface MCSetupAssistantPayload : MCPayload

@property (readonly, nonatomic) NSDictionary *configuration;
@property (readonly, nonatomic) NSArray *skipKeys;

+ (id)localizedPluralForm;
+ (id)typeStrings;
+ (id)localizedSingularForm;

- (void).cxx_destruct;
- (id)verboseDescription;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;

@end
