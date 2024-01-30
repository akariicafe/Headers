@interface CKVRawSpeechProfileExtractor : NSObject

+ (id)extractItemsFromRawSpeechProfile:(id)a0 metadata:(id)a1 converterClass:(Class)a2 error:(id *)a3;
+ (id)extractLocaleFromRawSpeechProfile:(id)a0 error:(id *)a1;
+ (id)_extractUserDataFromRawSpeechProfile:(id)a0 error:(id *)a1;
+ (id)_dictionaryFromUserDataArray:(id)a0 error:(id *)a1;
+ (BOOL)_isValidCategoryWithName:(id)a0 data:(id)a1 error:(id *)a2;
+ (id)_extractEntitiesFromCategoryData:(id)a0 categoryName:(id)a1 error:(id *)a2;
+ (id)_extractNamespaceFromCategoryName:(id)a0 error:(id *)a1;
+ (id)_convertItemsFromEntities:(id)a0 categoryName:(id)a1 categoryMetadata:(id)a2 converterClass:(Class)a3 error:(id *)a4;

@end
