@class NSHashTable;

@interface SGLongRunningTaskManager : NSObject {
    NSHashTable *_tasks;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

+ (id)sharedInstance;

- (id)task;
- (id)taskWithDeadline:(double)a0;
- (void).cxx_destruct;
- (void)unregister:(id)a0;
- (id)init;
- (void)tellCurrentTasksToDefer;
- (void)dealloc;

@end
