@class NSDictionary;

@interface MCDefaultsPayload : MCPayload {
    NSDictionary *_defaultsByDomain;
}

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)title;
- (id)domains;
- (id)stubDictionary;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)defaultsForDomain:(id)a0;
- (BOOL)isAllowedToWriteDefaults;
- (void).cxx_destruct;
- (id)verboseDescription;

@end
