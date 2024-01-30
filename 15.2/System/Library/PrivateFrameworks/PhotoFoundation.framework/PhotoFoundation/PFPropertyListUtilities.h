@interface PFPropertyListUtilities : NSObject

+ (id)_filterDictionary:(id)a0 block:(id /* block */)a1;
+ (id)propertyListObjectFromEncodedData:(id)a0 expectedClass:(Class)a1 options:(unsigned long long)a2 error:(id *)a3;
+ (id)propertyListObjectFromEncodedData:(id)a0 expectedClass:(Class)a1 options:(unsigned long long)a2;
+ (id)dictionaryFromEncodedData:(id)a0;
+ (id)arrayFromEncodedData:(id)a0;
+ (id)mutableDictionaryFromEncodedData:(id)a0;
+ (id)mutableArrayFromEncodedData:(id)a0;
+ (id)encodedDataWithPropertyListObject:(id)a0 format:(unsigned long long)a1 error:(id *)a2;
+ (id)encodedDataWithPropertyListObject:(id)a0;
+ (id)filterPropertyListNoData:(id)a0;
+ (BOOL)canEncodeInPropertyList:(id)a0;
+ (id)filterPropertyList:(id)a0 block:(id /* block */)a1;
+ (id)filterPropertyList:(id)a0;
+ (id)_filterArray:(id)a0 block:(id /* block */)a1;

@end
