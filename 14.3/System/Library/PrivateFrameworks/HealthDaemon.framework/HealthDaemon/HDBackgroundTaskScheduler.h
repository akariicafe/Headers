@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HDBackgroundTaskScheduler : NSObject {
    NSMutableDictionary *_clients;
    NSMutableDictionary *_tasksQueuedForDelivery;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

- (void)_queue_addTask:(id)a0 withName:(id)a1 forClientNamed:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id)_queue_taskWithName:(id)a0 forClientNamed:(id)a1;
- (void)_queue_registerClientWithName:(id)a0 taskHandler:(id /* block */)a1;
- (void)registerClientWithName:(id)a0 taskHandler:(id /* block */)a1;
- (id)taskWithName:(id)a0 forClientNamed:(id)a1;
- (void)addTask:(id)a0 withName:(id)a1 forClientNamed:(id)a2;
- (void)_queue_removeTaskWithName:(id)a0 forClientNamed:(id)a1;
- (void)removeTaskWithName:(id)a0 forClientNamed:(id)a1;
- (void)_queue_deliverJob:(id)a0 withName:(const char *)a1;
- (void)unregisterClientWithName:(id)a0;

@end
