@class NSArray;

@interface MCCertificateRevocationPayload : MCPayload

@property (readonly, nonatomic) NSArray *hashDictionaries;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)stubDictionary;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)subtitle1Label;
- (void).cxx_destruct;
- (id)verboseDescription;

@end
