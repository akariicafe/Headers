@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CalNWideQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (void)executeBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithSerialQueue:(id)a0 andWidth:(unsigned long long)a1;

@end
