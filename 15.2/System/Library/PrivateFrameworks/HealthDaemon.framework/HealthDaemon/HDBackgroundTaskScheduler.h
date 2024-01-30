@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HDBackgroundTaskScheduler : NSObject {
    NSMutableDictionary *_clients;
    NSMutableDictionary *_tasksQueuedForDelivery;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

- (void)removeTaskWithName:(id)a0 forClientNamed:(id)a1;
- (id)taskWithName:(id)a0 forClientNamed:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)unregisterClientWithName:(id)a0;
- (void)registerClientWithName:(id)a0 taskHandler:(id /* block */)a1;
- (void)addTask:(id)a0 withName:(id)a1 forClientNamed:(id)a2;

@end
