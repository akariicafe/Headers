@interface GEMagicKit : NSObject

+ (struct magic_set { } *)sharedMagicCookie;
+ (id)magicForObject:(id)a0 decompress:(BOOL)a1;
+ (id)rawMagicOutputForObject:(id)a0 cookie:(struct magic_set { } *)a1 flags:(int)a2;
+ (id)typeHierarchyForType:(id)a0;
+ (id)magicForFileAtPath:(id)a0;
+ (id)magicForFileAtURL:(id)a0;
+ (id)magicForData:(id)a0;
+ (id)magicForFileAtPath:(id)a0 decompress:(BOOL)a1;
+ (id)magicForFileAtURL:(id)a0 decompress:(BOOL)a1;
+ (id)magicForData:(id)a0 decompress:(BOOL)a1;

@end
