@class NSObject, NSError, NSOperation, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SSVOperation : NSOperation {
    NSOperation *_childOperation;
    NSMutableArray *_childRequests;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (nonatomic) BOOL success;
@property (copy, nonatomic) NSError *error;

- (void)dispatchSync:(id /* block */)a0;
- (void)cancel;
- (void)dispatchAsync:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addChildRequest:(id)a0;
- (void)removeChildRequest:(id)a0;
- (void)runChildOperation:(id)a0;

@end
