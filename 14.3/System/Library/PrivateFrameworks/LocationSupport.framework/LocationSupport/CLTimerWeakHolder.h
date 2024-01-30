@class CLTimer;

@interface CLTimerWeakHolder : NSObject

@property (readonly, weak, nonatomic) CLTimer *timer;

+ (id)holderWithTimer:(id)a0;

- (void).cxx_destruct;
- (id)initWithTimer:(id)a0;

@end
