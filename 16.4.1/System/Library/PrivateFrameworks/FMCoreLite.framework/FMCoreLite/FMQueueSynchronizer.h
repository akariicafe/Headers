@class NSObject;
@protocol OS_dispatch_queue;

@interface FMQueueSynchronizer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)conditionalSync:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
