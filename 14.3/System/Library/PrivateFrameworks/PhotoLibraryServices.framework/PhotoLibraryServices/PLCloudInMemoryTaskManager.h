@class NSMutableDictionary;

@interface PLCloudInMemoryTaskManager : NSObject {
    NSMutableDictionary *_resourceIDsToDownloadTasks;
    NSMutableDictionary *_taskIDsToDownloadTasks;
}

- (id)init;
- (void).cxx_destruct;
- (void)reportCompletionForResource:(id)a0 withData:(id)a1 error:(id)a2;
- (void)setTransferTask:(id)a0 forResource:(id)a1;
- (BOOL)addClientHandlerAndCreateTaskIfNecessaryForResource:(id)a0 taskIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)reset;
- (void)cancelTaskWithTaskIdentifier:(id)a0;
- (id)_identifierForResource:(id)a0;

@end
