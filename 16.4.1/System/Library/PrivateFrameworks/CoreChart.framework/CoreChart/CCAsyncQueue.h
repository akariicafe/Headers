@class CCVegaWorkerClient, NSMutableArray, NSObject;
@protocol CCAsyncQueueDelegate;

@interface CCAsyncQueue : NSObject {
    CCVegaWorkerClient *_workerClient;
    unsigned long long _nextActionID;
    NSMutableArray *_queue;
    BOOL _isProcessing;
}

@property (weak, nonatomic) NSObject<CCAsyncQueueDelegate> *delegate;

- (unsigned long long)enqueueOperation:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)enqueueOperationWithBlock:(id /* block */)a0;
- (id)initWithWorkerClient:(id)a0;
- (void)keepAliveUntilCurrentOperationIsComplete;
- (void)processOperations;
- (void)startProcessOperations;
- (void)waitForOperation:(unsigned long long)a0;
- (void)waitForPendingOperations;

@end
