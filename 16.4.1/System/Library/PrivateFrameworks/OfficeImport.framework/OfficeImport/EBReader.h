@class NSString;

@interface EBReader : OCBReader {
    struct XlObjectFactory { void /* function */ **x0; struct XlEshObjectFactory *x1; } *mXlObjectFactory;
    const void *mBuffer;
}

@property (retain, nonatomic) NSString *temporaryDirectory;
@property (readonly, nonatomic) void *xlReader;
@property (nonatomic) BOOL useStringOptimization;
@property (nonatomic) BOOL isFileStructuredStorage;

- (id)read;
- (void)dealloc;
- (BOOL)start;
- (void).cxx_destruct;
- (struct OCCBinaryStreamer { void /* function */ **x0; struct OCCCryptoKey *x1; char *x2; } *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey { } *)a0 baseOutputFilenameInUTF8:(const char *)a1;
- (struct OCCEncryptionInfoReader { void /* function */ **x0; } *)encryptionInfoReader;
- (id)initWithCancelDelegate:(id)a0;

@end
