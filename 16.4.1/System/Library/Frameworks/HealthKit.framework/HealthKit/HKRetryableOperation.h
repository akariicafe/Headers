@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HKRetryableOperation : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    long long _retryCount;
    NSMutableArray *_pendingOperations;
}

@property (readonly, copy, nonatomic) NSMutableArray *pendingOperations;

- (id)initWithQueue:(id)a0 retryCount:(int)a1;
- (void)_queue_performPendingOperation:(id)a0;
- (void)_queue_performRetryableOperation:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
