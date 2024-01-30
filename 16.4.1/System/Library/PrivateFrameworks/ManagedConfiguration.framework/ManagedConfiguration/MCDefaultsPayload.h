@class NSDictionary;

@interface MCDefaultsPayload : MCPayload {
    NSDictionary *_defaultsByDomain;
}

+ (id)localizedPluralForm;
+ (id)typeStrings;
+ (id)localizedSingularForm;

- (id)domains;
- (id)title;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)defaultsForDomain:(id)a0;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (BOOL)isAllowedToWriteDefaults;
- (id)stubDictionary;

@end
