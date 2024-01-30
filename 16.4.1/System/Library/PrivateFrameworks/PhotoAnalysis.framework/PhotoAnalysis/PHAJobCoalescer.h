@protocol PHAJobCoalescerDelegate;

@interface PHAJobCoalescer : NSObject

@property (weak, nonatomic) id<PHAJobCoalescerDelegate> delegate;

- (void)addJob:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
