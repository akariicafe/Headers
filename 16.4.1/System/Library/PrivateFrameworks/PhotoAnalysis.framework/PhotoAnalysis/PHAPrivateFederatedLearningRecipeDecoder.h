@interface PHAPrivateFederatedLearningRecipeDecoder : NSObject

+ (id)castObject:(id)a0 withName:(id)a1 toClass:(Class)a2 error:(id *)a3;
+ (id)decodeRecipeUserInfo:(id)a0 attachmentURLs:(id)a1 photoLibrary:(id)a2 graphManager:(id)a3 decodingError:(id *)a4;
+ (id)decodingErrorWithMessage:(id)a0;
+ (id)objectOfClass:(Class)a0 forKey:(id)a1 inDictionary:(id)a2 error:(id *)a3;
+ (id)optionalObjectOfClass:(Class)a0 forKey:(id)a1 inDictionary:(id)a2 error:(id *)a3;

@end
