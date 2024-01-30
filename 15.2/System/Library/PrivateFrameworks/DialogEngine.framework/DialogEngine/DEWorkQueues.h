@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface DEWorkQueues : NSObject

@property (retain) NSMutableDictionary *queues;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)initWithDispatchQueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)advance:(id)a0;
- (void)on:(id)a0 enqueue:(id /* block */)a1;

@end
