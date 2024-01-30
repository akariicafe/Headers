@class NSString;

@interface OCCEncryptor : NSObject {
    struct OCCStreamer { void /* function */ **x0; struct OCCCryptoKey *x1; char *x2; } *mStreamer;
}

@property (readonly, nonatomic) NSString *outputFilename;

+ (id)allocTempFileWithBase:(id)a0 filename:(id *)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)encrypt;
- (id)initWithStreamer:(struct OCCStreamer { void /* function */ **x0; struct OCCCryptoKey *x1; char *x2; } *)a0;
- (BOOL)encryptIntoOutputFile;

@end
