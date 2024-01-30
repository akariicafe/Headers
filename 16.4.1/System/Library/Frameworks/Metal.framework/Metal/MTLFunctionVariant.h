@class NSObject;
@protocol OS_dispatch_data;

@interface MTLFunctionVariant : NSObject {
    void *_inputInfo;
    unsigned long long _inputInfoSize;
}

@property (nonatomic) NSObject<OS_dispatch_data> *debugInstrumentationData;

- (void)dealloc;
- (id)initWithCompilerOutput:(id)a0;
- (const void *)inputInfoAndSize:(unsigned long long *)a0;
- (const void *)outputInfoAndSize:(unsigned long long *)a0;
- (void)setInputInfo:(const void *)a0 size:(unsigned long long)a1;
- (void)setOutputInfo:(const void *)a0 size:(unsigned long long)a1;

@end
