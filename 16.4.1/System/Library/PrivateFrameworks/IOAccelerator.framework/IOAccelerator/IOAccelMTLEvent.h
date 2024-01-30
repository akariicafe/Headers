@interface IOAccelMTLEvent : NSObject {
    struct __IOAccelShared { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __IOAccelDevice *x1; unsigned int x2; id /* block */ x3; unsigned long long x4; struct os_unfair_lock_s { unsigned int x0; } x5; struct IOAcceldirtyRingRO *x6; struct IOAcceldirtyRingRW *x7; struct IOAccelDirtyResourceCommand *x8; unsigned int x9; struct os_unfair_lock_s { unsigned int x0; } x10; struct shmemlog_list { struct _s_shmemlog_ *x0; } x11; unsigned long long *x12; } *_sharedRef;
    unsigned int _eventName;
    unsigned long long _globalTraceObjectID;
}

- (void)dealloc;
- (id)initWithShared:(struct __IOAccelShared { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __IOAccelDevice *x1; unsigned int x2; id /* block */ x3; unsigned long long x4; struct os_unfair_lock_s { unsigned int x0; } x5; struct IOAcceldirtyRingRO *x6; struct IOAcceldirtyRingRW *x7; struct IOAccelDirtyResourceCommand *x8; unsigned int x9; struct os_unfair_lock_s { unsigned int x0; } x10; struct shmemlog_list { struct _s_shmemlog_ *x0; } x11; unsigned long long *x12; } *)a0;
- (unsigned int)encodeKernelSignalEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs { unsigned int x0; unsigned short x1; unsigned short x2; unsigned long long x3; } *)a0 value:(unsigned long long)a1;
- (unsigned int)encodeKernelWaitEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs { unsigned int x0; unsigned short x1; unsigned short x2; unsigned long long x3; } *)a0 value:(unsigned long long)a1;
- (unsigned int)encodeKernelWaitEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs { unsigned int x0; unsigned short x1; unsigned short x2; unsigned long long x3; } *)a0 value:(unsigned long long)a1 timeout:(unsigned int)a2;

@end
