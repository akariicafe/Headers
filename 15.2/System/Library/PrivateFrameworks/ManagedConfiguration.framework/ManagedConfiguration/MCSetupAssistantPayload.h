@class NSDictionary, NSArray;

@interface MCSetupAssistantPayload : MCPayload

@property (readonly, nonatomic) NSDictionary *configuration;
@property (readonly, nonatomic) NSArray *skipKeys;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)stubDictionary;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (void).cxx_destruct;
- (id)verboseDescription;

@end
