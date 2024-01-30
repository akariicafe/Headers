@interface AVTPassthroughEventCoalescer : NSObject <AVTEventCoalescer>

@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;
- (void)registerEventForCoalescingWithLabel:(id)a0 handler:(id /* block */)a1;
- (void)eventDidOccur:(id /* block */)a0;

@end
