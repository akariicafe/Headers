@interface PBReader : OCBReader {
    struct PptObjectFactory { void /* function */ **x0; struct PptEshObjectFactory *x1; } *mPptObjectFactory;
    const void *mBuffer;
}

@property (readonly, nonatomic) void *pptReader;

- (id)read;
- (BOOL)start;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)a0;
- (struct OCCBinaryStreamer { void /* function */ **x0; struct OCCCryptoKey *x1; char *x2; } *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey { } *)a0 baseOutputFilenameInUTF8:(const char *)a1;
- (struct OCCEncryptionInfoReader { void /* function */ **x0; } *)encryptionInfoReader;

@end
