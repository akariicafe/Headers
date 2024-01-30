@class NSString;

@interface _MTLPipelineCache : NSObject <MTLPipelineCache>

@property (readonly) BOOL writable;
@property (readonly) struct MTLCompilerCache { void /* function */ **x0; id x1; int x2; int x3; } *cache;
@property BOOL disableRunTimeCompilation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)write;
- (void)dealloc;
- (id)initWithFilePath:(id)a0 readOnly:(BOOL)a1 deviceInfo:(const struct MTLTargetDeviceArch { unsigned long long x0; unsigned int x1; char *x2; } *)a2;

@end
