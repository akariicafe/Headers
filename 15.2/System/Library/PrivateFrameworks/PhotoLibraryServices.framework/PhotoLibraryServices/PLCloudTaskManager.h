@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PLCloudTaskManager : NSObject {
    NSMutableDictionary *_pendingTaskForTaskIdentifier;
    NSMutableDictionary *_highPriorityResourceToTaskIdentifierMap;
    NSMutableDictionary *_lowPriorityResourceToTaskIdentifierMap;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

- (id)_taskIdentifiersForResourceIdentifier:(id)a0 highPriority:(BOOL)a1;
- (void)cancelTaskWithTaskIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)reportCompletionForResourceIdentifier:(id)a0 highPriority:(BOOL)a1 withError:(id)a2;
- (id)_taskForResourceIdentifier:(id)a0 highPriority:(BOOL)a1;
- (void)_removeTaskIdentifiersForResourceIdentifier:(id)a0 highPriority:(BOOL)a1;
- (void).cxx_destruct;
- (void)_setTaskIdentifiers:(id)a0 forResourceIdentifier:(id)a1 highPriority:(BOOL)a2;
- (id)init;
- (void)reportProgress:(float)a0 forResourceIdentifier:(id)a1 highPriority:(BOOL)a2;
- (id)getPendingTaskForTaskIdentifier:(id)a0;
- (void)setPendingTaskWithTransferTask:(id)a0 withTaskIdentifier:(id)a1;
- (BOOL)addProgressBlock:(id /* block */)a0 completionHandler:(id /* block */)a1 forResourceIdentifier:(id)a2 highPriority:(BOOL)a3 withTaskIdentifier:(id)a4;
- (void)reset;

@end
