@class NSArray;

@interface MCCertificateRevocationPayload : MCPayload

@property (readonly, nonatomic) NSArray *hashDictionaries;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)verboseDescription;
- (id)stubDictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)subtitle1Label;

@end
