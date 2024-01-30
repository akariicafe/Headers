@class NSObject;
@protocol OS_xpc_object;

@interface CFPrefsDaemon : NSObject {
    NSObject<OS_xpc_object> *_listener;
    const char *_name;
    int _role;
    struct __CFSet { } *_sourceCache;
    struct __CFBag { } *_sourceCacheUsageCounts;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sourceCacheLock;
    struct __CFSet { } *_deadSourceShmemIndexes;
    struct { unsigned long long buckets[64]; } _deadManagedSourceBitSet;
    BOOL _testMode;
    _Atomic unsigned int *_shmem;
}

@end
