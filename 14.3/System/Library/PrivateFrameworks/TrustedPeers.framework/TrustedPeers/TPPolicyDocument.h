@class NSArray, NSDictionary, NSData, NSSet, TPPolicyVersion;

@interface TPPolicyDocument : NSObject

@property (retain, nonatomic) TPPolicyVersion *version;
@property (retain, nonatomic) NSData *protobuf;
@property (retain, nonatomic) NSArray *modelToCategory;
@property (retain, nonatomic) NSDictionary *categoriesByView;
@property (retain, nonatomic) NSDictionary *introducersByCategory;
@property (retain, nonatomic) NSDictionary *redactions;
@property (retain, nonatomic) NSArray *keyViewMapping;
@property (retain, nonatomic) NSSet *userControllableViewList;
@property (retain, nonatomic) NSSet *piggybackViews;

+ (BOOL)isEqualKeyViewMapping:(id)a0 other:(id)a1;
+ (id)introducersByCategoryFromPb:(id)a0;
+ (id)categoriesByViewFromPb:(id)a0;
+ (id)modelToCategoryFromPb:(id)a0;
+ (void)addKeyViewMapping:(id)a0 toPB:(id)a1;
+ (void)addRedactions:(id)a0 toPB:(id)a1;
+ (void)addIntroducersByCategory:(id)a0 toPB:(id)a1;
+ (void)addCategoriesByView:(id)a0 toPB:(id)a1;
+ (void)addModelToCategory:(id)a0 toPB:(id)a1;
+ (id)modelToCategoryRulesFromArray:(id)a0;
+ (id)dictionaryOfSetsFromDictionaryOfArrays:(id)a0;
+ (id)redactionsFromPb:(id)a0;
+ (id)policyDocWithHash:(id)a0 data:(id)a1;
+ (id)policyDocumentWithVersion:(unsigned long long)a0 modelToCategory:(id)a1 categoriesByView:(id)a2 introducersByCategory:(id)a3 redactions:(id)a4 keyViewMapping:(id)a5 userControllableViewList:(id)a6 piggybackViews:(id)a7 hashAlgo:(long long)a8 error:(id *)a9;
+ (id)policyDocumentWithInternalVersion:(unsigned long long)a0 modelToCategory:(id)a1 categoriesByView:(id)a2 introducersByCategory:(id)a3 redactions:(id)a4 keyViewMapping:(id)a5 userControllableViewList:(id)a6 piggybackViews:(id)a7 hashAlgo:(long long)a8 error:(id *)a9;
+ (id)redactionWithEncrypter:(id)a0 modelToCategory:(id)a1 categoriesByView:(id)a2 introducersByCategory:(id)a3 keyViewMapping:(id)a4 error:(id *)a5;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)encodeProtobuf;
- (id)encodeProtobufWithVersion:(unsigned long long)a0;
- (id)policyWithSecrets:(id)a0 decrypter:(id)a1 error:(id *)a2;
- (BOOL)isEqualToPolicyDocument:(id)a0;
- (id)cloneWithVersionNumber:(unsigned long long)a0;

@end
