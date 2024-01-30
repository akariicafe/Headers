@class NSArray, NSOperationQueue;

@interface CATBatchRemoteTaskOperation : CATOperation {
    NSArray *mRemoteTasks;
    NSOperationQueue *mQueue;
}

@property (readonly, copy, nonatomic) NSArray *remoteTaskOperations;

- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (id)initWithRemoteTaskOperations:(id)a0;
- (void)cancelSubOperations;
- (void)remoteTaskDidFinish:(id)a0;
- (id)initWithTaskClient:(id)a0 requests:(id)a1;

@end
