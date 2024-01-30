@interface _PASCompression : NSObject

+ (id)compress:(id)a0 lowMemory:(BOOL)a1;
+ (id)_compress:(id)a0 fast:(BOOL)a1 lowMemory:(BOOL)a2;
+ (id)compress:(id)a0 fast:(BOOL)a1;
+ (id)fastCompress:(id)a0;
+ (id)decompress:(id)a0 maxLength:(long long)a1;
+ (id)decompress:(id)a0;

@end
