@class NSString, CPLResourceTransferTask, NSArray, NSMapTable;

@interface PLCloudInMemoryDownloadTask : NSObject {
    NSMapTable *_taskIDsToCompletionHandlers;
}

@property (readonly, copy, nonatomic) NSString *resourceID;
@property (retain, nonatomic) CPLResourceTransferTask *transferTask;
@property (readonly, nonatomic, getter=isCompleted) BOOL completed;
@property (readonly, weak, nonatomic) NSArray *taskIDs;

- (void)cancelClientWithTaskID:(id)a0;
- (void)reportCompletionWithData:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)addClientWithTaskID:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithResourceID:(id)a0 taskID:(id)a1 completionHandler:(id /* block */)a2;

@end
