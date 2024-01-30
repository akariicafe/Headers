@protocol PHAJobCoalescerDelegate;

@interface PHAJobCoalescer : NSObject

@property (weak, nonatomic) id<PHAJobCoalescerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)addJob:(id)a0;

@end
