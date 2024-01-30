@class NSOperationQueue;

@interface MCDMediaRemoteSerialQueueManager : NSObject

@property (class, readonly, nonatomic) MCDMediaRemoteSerialQueueManager *sharedInstance;

@property (retain, nonatomic) NSOperationQueue *mediaRemoteSerialQueue;

- (void).cxx_destruct;
- (id)init;
- (void)cancelAllOperations;
- (void)addOperation:(id /* block */)a0 cancelAllOperations:(BOOL)a1;

@end
