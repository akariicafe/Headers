@class NSMutableDictionary;

@interface FPKernelProcess : FPProcess {
    NSMutableDictionary *_auxData;
}

- (BOOL)_isAlive;
- (void).cxx_destruct;
- (BOOL)_populateTask;
- (void)gatherData;
- (id)initWithBsdInfo:(struct proc_bsdinfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[32]; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; int x19; unsigned long long x20; unsigned long long x21; } *)a0;
- (unsigned long long)_gatherPageSize;
- (id)auxData;

@end
