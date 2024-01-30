@class NSMutableDictionary, CPLResourceTransferTask, NSDate;

@interface PLCloudPendingResourceTask : NSObject {
    CPLResourceTransferTask *_transferTask;
    NSDate *_lastUpdated;
    BOOL _completed;
    BOOL _transferTaskRemoved;
    NSMutableDictionary *_taskIdentifierToProgressBlock;
    NSMutableDictionary *_taskIdentifierToCompletionHandler;
}

- (void)keepAlive;
- (void).cxx_destruct;
- (void)setTransferTask:(id)a0;
- (void)reportCompletionWithError:(id)a0;
- (id)initWithProgressBlock:(id /* block */)a0 completionHandler:(id /* block */)a1 forTaskIdentifier:(id)a2;
- (void)addProgressBlock:(id /* block */)a0 completionHandler:(id /* block */)a1 withTaskIdentifier:(id)a2;
- (id)taskIDs;
- (id)lastUpdated;
- (void)reportProgress:(float)a0;
- (void)cancelTaskWithIdentifier:(id)a0;

@end
