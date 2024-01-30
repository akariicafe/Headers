@protocol STDebouncerDelegate;

@interface STDebouncer : NSObject

@property (nonatomic) double minCoalescenceInterval;
@property (nonatomic) double maxCoalescenceInterval;
@property (retain) id value;
@property (weak, nonatomic) id<STDebouncerDelegate> delegate;

- (void)_timeout;
- (void)_idle;
- (void).cxx_destruct;
- (void)bounce:(id)a0;
- (void)_delegate;
- (id)initWithMinCoalescenceInterval:(double)a0 maxCoalescenceInterval:(double)a1;

@end
