@class NSArray;

@interface MCCertificateTransparencyPayload : MCPayload

@property (readonly, nonatomic) NSArray *hashDictionaries;
@property (readonly, nonatomic) NSArray *domainRules;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (BOOL)isValidDomainRule:(id)a0;

- (id)stubDictionary;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)subtitle1Label;
- (void).cxx_destruct;
- (id)verboseDescription;

@end
