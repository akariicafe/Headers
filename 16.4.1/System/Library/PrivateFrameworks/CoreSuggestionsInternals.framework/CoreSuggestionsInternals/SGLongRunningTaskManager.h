@class NSHashTable;

@interface SGLongRunningTaskManager : NSObject {
    NSHashTable *_tasks;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

+ (id)sharedInstance;

- (void)unregister:(id)a0;
- (id)task;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)taskWithDeadline:(double)a0;
- (void)tellCurrentTasksToDefer;

@end
