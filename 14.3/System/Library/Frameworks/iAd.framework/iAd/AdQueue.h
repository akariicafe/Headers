@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AdQueue : NSObject

@property (retain, nonatomic) NSMutableArray *array;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;

- (id)init;
- (void).cxx_destruct;
- (id)dequeue;
- (void)enqueue:(id)a0;
- (unsigned long long)count;

@end
