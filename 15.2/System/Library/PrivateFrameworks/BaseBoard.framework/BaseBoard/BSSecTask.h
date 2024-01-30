@interface BSSecTask : NSObject {
    struct __SecTask { } *_lock_taskRef;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)dealloc;

@end
