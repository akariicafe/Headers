@interface OABBlip : NSObject

+ (id)delayedSubBlipWithMetafileInfo:(const void *)a0;
+ (id)dibFileContentsWithDibBlipData:(const struct OcBinaryData { void /* function */ **x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; char *x5; BOOL x6; struct SsrwOOStream *x7; } *)a0;
+ (int)blipTypeForBlipSignature:(int)a0;
+ (id)compressMetafileData:(id)a0 info:(void *)a1;
+ (id)readBlipFromBse:(id)a0;
+ (id)readBlipFromEshBlip:(struct EshBlip { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; struct UID { unsigned char x0[16]; } x3; } *)a0;
+ (void)setMetafileBoundsFromPictData:(id)a0 info:(void *)a1;
+ (id)subBlipWithMetafileInfo:(const void *)a0;
+ (struct EshBlip { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; struct UID { unsigned char x0[16]; } x3; } *)writeBlip:(id)a0;
+ (void)writeBlip:(id)a0 toBlipStoreEntry:(struct EshBSE { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; struct EshBlip *x3; unsigned short *x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned short x8; int x9; unsigned char x10; int x11; int x12; unsigned char x13; unsigned char x14; struct UID { unsigned char x0[16]; } x15; } *)a1;
+ (void)writeEmptyBlipStoreEntry:(struct EshBSE { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; struct EshBlip *x3; unsigned short *x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned short x8; int x9; unsigned char x10; int x11; int x12; unsigned char x13; unsigned char x14; struct UID { unsigned char x0[16]; } x15; } *)a0;

@end
