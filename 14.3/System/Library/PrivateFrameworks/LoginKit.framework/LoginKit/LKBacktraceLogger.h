@interface LKBacktraceLogger : NSObject

@property (nonatomic) unsigned int trackedThread;

- (id)getBacktraceFromTrackedThread;
- (void)trackCurrentThread;
- (id)_getBacktraceFromThread:(unsigned int)a0;
- (struct __darwin_arm_thread_state64 { unsigned long long x0[29]; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; })_getThreadStateForThread:(unsigned int)a0;
- (unsigned long long)_getPCFromThreadState:(struct __darwin_arm_thread_state64 { unsigned long long x0[29]; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; })a0;
- (unsigned long long)_getLRFromThreadState:(struct __darwin_arm_thread_state64 { unsigned long long x0[29]; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; })a0;
- (unsigned long long)_getFPFromThreadState:(struct __darwin_arm_thread_state64 { unsigned long long x0[29]; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; })a0;
- (BOOL)_copyFrameInformation:(unsigned long long)a0 destination:(unsigned long long)a1 size:(unsigned long long)a2;
- (void)_symbolicateBuffer:(const unsigned long long *)a0 symbolsBuffer:(struct dl_info { char *x0; void *x1; char *x2; void *x3; } *)a1 count:(int)a2;
- (id)_logWithSymbol:(struct dl_info { char *x0; void *x1; char *x2; void *x3; } *)a0 address:(unsigned long long)a1 index:(int)a2;

@end
