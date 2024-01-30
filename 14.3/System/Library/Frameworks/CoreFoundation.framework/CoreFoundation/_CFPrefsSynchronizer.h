@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface _CFPrefsSynchronizer : NSObject {
    NSObject<OS_dispatch_source> *_synchTimer;
    NSObject<OS_dispatch_queue> *_synchQueue;
    struct __CFSet { } *_dirtySources;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _CFPrefsDirtySourcesLock;
    BOOL _active;
}

- (id)init;

@end
