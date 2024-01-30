@class NSString;

@interface OITSUTemporaryDirectory : NSObject {
    NSString *_path;
    BOOL _leak;
}

- (id)initWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)URL;
- (id)path;
- (void)dealloc;
- (id)initWithSignature:(id)a0 subdirectory:(id)a1 error:(id *)a2;
- (BOOL)_createDirectoryWithSignature:(id)a0 subdirectory:(id)a1 error:(id *)a2;
- (id)initWithSignature:(id)a0 error:(id *)a1;
- (id)initForWritingToURL:(id)a0 error:(id *)a1;
- (void)leakTemporaryDirectory;

@end
