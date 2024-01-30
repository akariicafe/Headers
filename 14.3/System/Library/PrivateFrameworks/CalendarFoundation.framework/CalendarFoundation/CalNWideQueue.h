@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CalNWideQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (void).cxx_destruct;
- (void)executeBlock:(id /* block */)a0;
- (id)initWithSerialQueue:(id)a0 andWidth:(unsigned long long)a1;

@end
