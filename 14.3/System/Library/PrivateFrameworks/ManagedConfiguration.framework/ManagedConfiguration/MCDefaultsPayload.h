@class NSDictionary;

@interface MCDefaultsPayload : MCPayload {
    NSDictionary *_defaultsByDomain;
}

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)verboseDescription;
- (id)stubDictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (BOOL)isAllowedToWriteDefaults;
- (id)defaultsForDomain:(id)a0;
- (id)title;
- (id)domains;

@end
