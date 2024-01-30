@interface C3DEngineNotificationQueueTransientWrapper : NSObject {
    id _queue;
}

- (void)dealloc;
- (struct __C3DEngineNotificationQueue { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; struct __CFDictionary *x2; struct os_unfair_lock_s { unsigned int x0; } x3; double x4; BOOL x5; BOOL x6; BOOL x7; void *x8; } *)engineNotificationQueue;
- (void)setEngineNotificationQueue:(struct __C3DEngineNotificationQueue { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; struct __CFDictionary *x2; struct os_unfair_lock_s { unsigned int x0; } x3; double x4; BOOL x5; BOOL x6; BOOL x7; void *x8; } *)a0;

@end
