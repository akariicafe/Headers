@class NSString;

@interface _CPBundleIdentifierString : NSString {
    NSString *_executablePath;
    NSString *_bundleIdentifierOrProcessName;
    BOOL _isProcessName;
}

- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)_initWithExecutablePath:(id)a0;
- (unsigned long long)length;
- (void)dealloc;
- (BOOL)_isProcessName;
- (void)_loadBundleIdentifierOrProcessName;

@end
