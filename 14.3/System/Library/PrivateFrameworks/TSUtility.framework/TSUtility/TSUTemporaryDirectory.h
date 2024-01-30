@class NSString;

@interface TSUTemporaryDirectory : NSObject {
    NSString *_path;
    BOOL _leak;
}

- (id)URL;
- (id)path;
- (id)init;
- (void)dealloc;
- (void)leakTemporaryDirectory;
- (id)initWithSignature:(id)a0;
- (id)initWithSignature:(id)a0 subdirectory:(id)a1;
- (void)_createDirectoryWithSignature:(id)a0 subdirectory:(id)a1;

@end
