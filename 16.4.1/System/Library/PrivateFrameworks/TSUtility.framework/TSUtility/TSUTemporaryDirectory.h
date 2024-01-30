@class NSString;

@interface TSUTemporaryDirectory : NSObject {
    NSString *_path;
    BOOL _leak;
}

- (id)path;
- (id)URL;
- (void)dealloc;
- (id)init;
- (void)leakTemporaryDirectory;
- (void)_createDirectoryWithSignature:(id)a0 subdirectory:(id)a1;
- (id)initWithSignature:(id)a0 subdirectory:(id)a1;
- (id)initWithSignature:(id)a0;

@end
