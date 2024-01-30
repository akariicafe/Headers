@interface SecXPCHelper : NSObject

+ (id)cleanDictionaryForXPC:(id)a0;
+ (id)safeErrorClasses;
+ (id)safeErrorPrimitiveClasses;
+ (id)errorFromEncodedData:(id)a0;
+ (id)encodedDataFromError:(id)a0;
+ (id)safeCKErrorPrimitiveClasses;
+ (id)cleanObjectForXPC:(id)a0;
+ (id)safeErrorCollectionClasses;
+ (id)cleanseErrorForXPC:(id)a0;

@end
