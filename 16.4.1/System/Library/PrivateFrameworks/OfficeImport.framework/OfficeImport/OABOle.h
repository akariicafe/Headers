@interface OABOle : NSObject

+ (id)stringForCLSID:(struct _SsrwOO_GUID { unsigned int x0; unsigned short x1; unsigned short x2; unsigned char x3[8]; })a0;
+ (BOOL)isBiffCLSID:(id)a0;
+ (BOOL)isChart:(id)a0;
+ (id)read4ByteFromStream:(struct SsrwOOStream { void /* function */ **x0; } *)a0;
+ (id)readAnsiStringFromStream:(struct SsrwOOStream { void /* function */ **x0; } *)a0;
+ (id)readCLSIDFromStream:(struct SsrwOOStream { void /* function */ **x0; } *)a0;
+ (id)readCompressedFromStream:(struct SsrwOOStream { void /* function */ **x0; } *)a0 compressedSize:(unsigned int)a1 uncompressedSize:(unsigned int)a2 cancel:(id)a3;
+ (id)readFromData:(id)a0 cancel:(id)a1;
+ (id)readFromFileName:(id)a0 cancel:(id)a1;
+ (id)readFromParentStorage:(struct SsrwOOStorage { struct _Storage *x0; unsigned short x1[36]; } *)a0 storageName:(id)a1 cancel:(id)a2;
+ (id)readFromStream:(struct SsrwOOStream { void /* function */ **x0; } *)a0 size:(unsigned int)a1 cancel:(id)a2;
+ (BOOL)readSharedInfoFor:(id)a0 fromStorage:(struct SsrwOOStorage { struct _Storage *x0; unsigned short x1[36]; } *)a1;
+ (id)readUnicodeStringFromStream:(struct SsrwOOStream { void /* function */ **x0; } *)a0;

@end
