@interface RTDeletionRequestRecordIDTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (id)compressData:(id)a0 algorithm:(int)a1;
- (id)decompressData:(id)a0 algorithm:(int)a1;
- (BOOL)dataCompressedWithOriginalSize:(unsigned long long)a0 compressedSize:(unsigned long long)a1;
- (id)deprecatedDecompressData:(id)a0 algorithm:(int)a1;

@end
