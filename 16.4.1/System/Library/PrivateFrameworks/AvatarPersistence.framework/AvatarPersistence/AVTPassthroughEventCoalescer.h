@interface AVTPassthroughEventCoalescer : NSObject <AVTEventCoalescer>

@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;
- (void)eventDidOccur:(id /* block */)a0;
- (void)registerEventForCoalescingWithLabel:(id)a0 handler:(id /* block */)a1;

@end
