@interface IOGPUMTLEvent : NSObject {
    struct __IOGPUDevice { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; unsigned int x1; unsigned int x2; unsigned int *x3; unsigned int **x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; struct os_unfair_lock_s { unsigned int x0; } x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; struct IOGPUDeviceCommPage *x15; struct IOGPUClientSharedGlobalRO *x16; id /* block */ x17; struct os_unfair_lock_s { unsigned int x0; } x18; struct shmemlog_list { struct _s_shmemlog_ *x0; } x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; struct IOGPUDeviceConfigData { unsigned int x0; unsigned int x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned int x9; unsigned int x10; } x23; } *_deviceRef;
    unsigned int _eventName;
    unsigned long long _globalTraceObjectID;
}

@property (nonatomic) BOOL enableBarrier;

- (id)initWithDevice:(struct __IOGPUDevice { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; unsigned int x1; unsigned int x2; unsigned int *x3; unsigned int **x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; struct os_unfair_lock_s { unsigned int x0; } x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; struct IOGPUDeviceCommPage *x15; struct IOGPUClientSharedGlobalRO *x16; id /* block */ x17; struct os_unfair_lock_s { unsigned int x0; } x18; struct shmemlog_list { struct _s_shmemlog_ *x0; } x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; struct IOGPUDeviceConfigData { unsigned int x0; unsigned int x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned int x9; unsigned int x10; } x23; } *)a0;
- (void)dealloc;
- (unsigned int)_encodeIOGPUKernelSignalEventCommandArgs:(struct IOGPUKernelCommandSignalOrWaitEventArgs { unsigned int x0; unsigned int x1; unsigned long long x2; } *)a0 value:(unsigned long long)a1;
- (unsigned int)_encodeIOGPUKernelWaitEventCommandArgs:(struct IOGPUKernelCommandSignalOrWaitEventArgs { unsigned int x0; unsigned int x1; unsigned long long x2; } *)a0 value:(unsigned long long)a1 timeout:(unsigned int)a2;

@end
