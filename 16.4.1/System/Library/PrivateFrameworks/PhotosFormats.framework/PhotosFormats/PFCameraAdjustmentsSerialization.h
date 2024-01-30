@interface PFCameraAdjustmentsSerialization : NSObject

+ (Class)unarchiver:(id)a0 cannotDecodeObjectOfClassName:(id)a1 originalClasses:(id)a2;
+ (BOOL)deserializeDictionary:(id)a0 toFilters:(id *)a1 portraitMetadata:(id *)a2 error:(id *)a3;
+ (id)deserializedAdjustmentsFromData:(id)a0 error:(id *)a1;
+ (id)_errorWithMessage:(id)a0 code:(long long)a1;
+ (id)serializedAdjustments:(id)a0 error:(id *)a1;
+ (id)serializedDictionaryForFilters:(id)a0 portraitMetadata:(id)a1 error:(id *)a2;

@end
