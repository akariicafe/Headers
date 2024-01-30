@class NSManagedObjectContext;

@interface _PFManagedObjectReferenceQueue : NSObject {
    int _cd_rc;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _spinLock;
    int _flags;
    int _signalRunloop;
    NSManagedObjectContext *_context;
    struct __CFArray { } *_queue;
    struct __CFRunLoopObserver { } *_rlObserver;
    int _processing;
}

- (oneway void)release;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (id)retain;
- (void)finalize;

@end
