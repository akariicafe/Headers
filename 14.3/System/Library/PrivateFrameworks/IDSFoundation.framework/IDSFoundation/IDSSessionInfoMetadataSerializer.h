@interface IDSSessionInfoMetadataSerializer : NSObject

+ (id)serializeSessionInfoMetadata:(id)a0;
+ (void)_writeStringToByteBuffer:(id)a0 buffer:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; } *)a1;
+ (void)_writeNumberToByteBuffer:(id)a0 buffer:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; } *)a1;
+ (void)_writeDictionaryToByteBuffer:(id)a0 buffer:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; } *)a1;
+ (void)_writeArrayToByteBuffer:(id)a0 buffer:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; } *)a1;
+ (id)_readArrayFromByteArray:(char *)a0 byteBuffer:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; } *)a1;
+ (id)_readDictionaryFromByteArray:(char *)a0 byteBuffer:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; } *)a1;
+ (id)deserializeSessionInfoMetadata:(id)a0;

@end
