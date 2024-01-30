@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CalLimitingQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
}

- (void).cxx_destruct;
- (void)executeBlock;
- (id)queue;
- (id)initWithQueue:(id)a0 andBlock:(id /* block */)a1;

@end
