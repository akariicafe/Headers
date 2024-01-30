@protocol WBSDeallocationSentinelObserver;

@interface _WBSDeallocationSentinel : NSObject

@property (weak, nonatomic) id<WBSDeallocationSentinelObserver> observer;
@property (readonly, nonatomic) id context;

- (void)dealloc;
- (id)initWithObserver:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
