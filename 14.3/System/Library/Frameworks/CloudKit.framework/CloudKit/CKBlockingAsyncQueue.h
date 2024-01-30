@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CKBlockingAsyncQueue : NSObject

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned int qosClass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *queueSema;

- (void)performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithWidth:(unsigned long long)a0 qosClass:(unsigned int)a1;
- (void)performBarrierBlock:(id /* block */)a0;
- (id)initWithWidth:(unsigned long long)a0;

@end
