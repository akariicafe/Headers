@class NSString;

@interface SFBlockBasedCAAnimationDelegate : NSObject <CAAnimationDelegate>

@property (copy, nonatomic) id /* block */ animationDidStopBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationDelegateWithDidStopBlock:(id /* block */)a0;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;
- (void)associateLifetimeWithAnimation:(id)a0;

@end
