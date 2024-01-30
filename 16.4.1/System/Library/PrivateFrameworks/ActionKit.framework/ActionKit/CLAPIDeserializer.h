@interface CLAPIDeserializer : NSObject

+ (id)URLRequestWithS3ParametersDictionary:(id)a0 fileName:(id)a1 fileData:(id)a2 fileURL:(id)a3;
+ (id)URLRequestWithS3ParametersDictionary:(id)a0 fileName:(id)a1 fileData:(id)a2;
+ (id)URLRequestWithS3ParametersDictionary:(id)a0 fileName:(id)a1 fileURL:(id)a2;
+ (id)URLRequestWithS3ParametersDictionaryData:(id)a0 fileName:(id)a1 fileData:(id)a2;
+ (id)_URLFromDictionary:(id)a0 forKey:(id)a1;
+ (id)_dateAndTimeFromDictionary:(id)a0 forKey:(id)a1;
+ (id)_dateFromDictionary:(id)a0 forKey:(id)a1;
+ (id)_normalizedObjectFromDictionary:(id)a0 forKey:(id)a1;
+ (id)_unicodeURLFromDictionary:(id)a0 forKey:(id)a1;
+ (id)accountWithAPIDictionary:(id)a0;
+ (id)accountWithJSONDictionaryData:(id)a0;
+ (id)arrayFromJSONData:(id)a0;
+ (id)dictionaryFromJSONData:(id)a0;
+ (id)productsWithJSONArrayData:(id)a0;
+ (id)socketWithJSONDictionary:(id)a0;
+ (id)socketWithJSONDictionaryData:(id)a0;
+ (id)webItemArrayWithAPIArray:(id)a0;
+ (id)webItemArrayWithJSONArrayData:(id)a0;
+ (long long)webItemTypeForTypeString:(id)a0;
+ (id)webItemWithAPIDictionary:(id)a0;
+ (id)webItemWithJSONDictionaryData:(id)a0;

@end
