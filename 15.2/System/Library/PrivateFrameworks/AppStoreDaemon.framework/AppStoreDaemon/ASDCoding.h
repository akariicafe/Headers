@interface ASDCoding : NSObject

+ (BOOL)securelyEncodeObject:(id)a0 forKey:(id)a1 withCoder:(id)a2 error:(id *)a3;
+ (id)_findNonSecureClassesFromObject:(id)a0;
+ (id)createDataByEncodingError:(id)a0;
+ (id)createErrorByDecodingData:(id)a0;

@end
