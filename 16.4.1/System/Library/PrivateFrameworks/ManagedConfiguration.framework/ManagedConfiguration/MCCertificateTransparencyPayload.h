@class NSArray;

@interface MCCertificateTransparencyPayload : MCPayload

@property (readonly, nonatomic) NSArray *hashDictionaries;
@property (readonly, nonatomic) NSArray *domainRules;

+ (BOOL)isValidDomainRule:(id)a0;
+ (id)localizedPluralForm;
+ (id)typeStrings;
+ (id)localizedSingularForm;

- (void).cxx_destruct;
- (id)verboseDescription;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)stubDictionary;
- (id)subtitle1Label;

@end
