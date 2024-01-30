@class NSString;

@interface _CPBundleIdentifierString : NSString {
    NSString *_executablePath;
    NSString *_bundleIdentifierOrProcessName;
    BOOL _isProcessName;
}

- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (BOOL)_isProcessName;
- (id)_initWithExecutablePath:(id)a0;
- (void)dealloc;
- (void)_loadBundleIdentifierOrProcessName;

@end
