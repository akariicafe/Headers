@interface OCBReader : OCDEncryptedReader

@property (nonatomic) struct OcBinaryReader { void /* function */ **x0; } *binaryReader;
@property (nonatomic) struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *file;
@property (readonly, nonatomic) struct OCCEncryptionInfoReader { void /* function */ **x0; } *encryptionInfoReader;

- (id)read;
- (void)dealloc;
- (void)closeFile;
- (BOOL)start;
- (id)initWithCancelDelegate:(id)a0;
- (BOOL)retainDecryptorWithErrorCode:(int *)a0;
- (BOOL)isBinaryReader;
- (struct OCCBinaryStreamer { void /* function */ **x0; struct OCCCryptoKey *x1; char *x2; } *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey { void /* function */ **x0; char *x1; char *x2; char *x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a0 baseOutputFilenameInUTF8:(const char *)a1;
- (id)allocDecryptorWithCryptoKey:(struct OCCCryptoKey { void /* function */ **x0; char *x1; char *x2; char *x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a0 baseOutputFilename:(id)a1;
- (void)restartReaderToUseDecryptedDocument;

@end
