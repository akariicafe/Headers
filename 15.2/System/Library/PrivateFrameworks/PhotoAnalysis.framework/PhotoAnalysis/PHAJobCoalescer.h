@protocol PHAJobCoalescerDelegate;

@interface PHAJobCoalescer : NSObject

@property (weak, nonatomic) id<PHAJobCoalescerDelegate> delegate;

- (void)addJob:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
