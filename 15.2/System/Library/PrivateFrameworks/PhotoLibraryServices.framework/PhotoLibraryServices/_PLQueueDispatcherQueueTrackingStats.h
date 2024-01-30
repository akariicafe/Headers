@interface _PLQueueDispatcherQueueTrackingStats : NSObject {
    struct _PLQueueDispatcherBlockDebugInfoEntry { void *x0; struct _PLQueueDispatcherBlockDebugInfoEntry *x1; unsigned long long x2; id x3; } *head;
    struct _PLQueueDispatcherBlockDebugInfoEntry { void *x0; struct _PLQueueDispatcherBlockDebugInfoEntry *x1; unsigned long long x2; id x3; } *tail;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
}

@end
