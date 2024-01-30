@interface SecXPCHelper : NSObject

+ (id)cleanseErrorForXPC:(id)a0;
+ (id)errorFromEncodedData:(id)a0;
+ (id)cleanObjectForXPC:(id)a0;
+ (id)cleanDictionaryForXPC:(id)a0;
+ (id)safeErrorClasses;
+ (id)safeCKErrorPrimitiveClasses;
+ (id)safeErrorPrimitiveClasses;
+ (id)encodedDataFromError:(id)a0;
+ (id)safeErrorCollectionClasses;

@end
