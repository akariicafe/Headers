@class NSString, OITSUTemporaryDirectory;

@interface OCCDecryptor : NSObject {
    OITSUTemporaryDirectory *mTempDirectory;
    NSString *mBaseStringForOutputFilename;
    struct OCCStreamer { void /* function */ **x0; struct OCCCryptoKey *x1; char *x2; } *mStreamer;
}

@property (readonly, nonatomic) NSString *outputFilename;

+ (id)allocTempFileWithBase:(id)a0 outFilename:(id *)a1 tempDirectory:(id *)a2;
+ (id)agileDescriptorNamespace;
+ (id)agilePasswordKeyEncryptorNamespace;

- (BOOL)decrypt;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isReadProtectedUsingDefaultPassphrase;
- (BOOL)verifyPassphrase:(id)a0;
- (void)deleteOutputFile;
- (BOOL)decryptIntoOutputFile;
- (id)initWithStreamer:(struct OCCStreamer { void /* function */ **x0; struct OCCCryptoKey *x1; char *x2; } *)a0;

@end
