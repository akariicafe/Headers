@interface MTLFunctionVariant : NSObject {
    void *_inputInfo;
    unsigned long long _inputInfoSize;
}

- (void)dealloc;
- (id)initWithCompilerOutput:(id)a0;
- (const void *)inputInfoAndSize:(unsigned long long *)a0;
- (void)setInputInfo:(const void *)a0 size:(unsigned long long)a1;
- (const void *)outputInfoAndSize:(unsigned long long *)a0;
- (void)setOutputInfo:(const void *)a0 size:(unsigned long long)a1;

@end
