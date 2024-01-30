@class NSDictionary;

@interface MCDomainsPayload : MCPayload

@property (retain, nonatomic) NSDictionary *restrictions;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)invalidDomainPatternErrorWithPattern:(id)a0;
+ (BOOL)isPatternValid:(id)a0 outError:(id *)a1;

- (id)stubDictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;

@end
