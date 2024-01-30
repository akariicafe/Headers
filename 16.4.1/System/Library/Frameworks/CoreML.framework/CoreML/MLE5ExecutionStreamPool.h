@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface MLE5ExecutionStreamPool : NSObject

@property (readonly) NSMutableSet *pool;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;

- (id)init;
- (void).cxx_destruct;
- (id)takeOut;
- (void)putBack:(id)a0;

@end
