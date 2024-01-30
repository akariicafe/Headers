@class NSString, NSObject;
@protocol OS_dispatch_queue, AVTUILogger;

@interface AVTEventCoalescer : NSObject <AVTEventCoalescer>

@property (copy, nonatomic) id /* block */ eventHandler;
@property (copy, nonatomic) NSString *eventLabel;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) double delay;
@property (nonatomic) BOOL eventDeliveryScheduled;

- (void).cxx_destruct;
- (void)eventDidOccur:(id /* block */)a0;
- (id)initWithDelay:(double)a0 queue:(id)a1 logger:(id)a2;
- (void)registerEventForCoalescingWithLabel:(id)a0 handler:(id /* block */)a1;

@end
