@class NSString;

@interface BUTemporaryDirectory : NSObject {
    NSString *_path;
    BOOL _leak;
}

- (id)path;
- (id)URL;
- (void)dealloc;
- (id)initWithError:(id *)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_createDirectoryWithSignature:(id)a0 subdirectory:(id)a1 error:(id *)a2;
- (id)initForWritingToURL:(id)a0 error:(id *)a1;
- (id)initWithSignature:(id)a0 error:(id *)a1;
- (id)initWithSignature:(id)a0 subdirectory:(id)a1 error:(id *)a2;
- (void)leakTemporaryDirectory;

@end
