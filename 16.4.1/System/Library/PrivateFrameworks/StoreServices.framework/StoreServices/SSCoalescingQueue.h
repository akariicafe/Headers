@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SSCoalescingQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *source;

- (void)executeBlock;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
