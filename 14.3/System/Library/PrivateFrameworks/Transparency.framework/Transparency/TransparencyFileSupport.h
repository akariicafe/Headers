@interface TransparencyFileSupport : NSObject

+ (long long)directorySizeInKB:(id *)a0;
+ (id)appSupportPath:(id *)a0;
+ (BOOL)deleteFile:(id)a0 error:(id *)a1;
+ (id)readDictionaryFromFile:(id)a0 error:(id *)a1;
+ (BOOL)writeDictionaryToFile:(id)a0 fileName:(id)a1 error:(id *)a2;
+ (BOOL)setProtectionToClassDForURL:(id)a0 error:(id *)a1;
+ (id)readDataFromFile:(id)a0 error:(id *)a1;

@end
