@class NSString;

@interface SBCAAnimationBlockDelegate : NSObject <CAAnimationDelegate>

@property (copy, nonatomic) id /* block */ animationDidStartHandler;
@property (copy, nonatomic) id /* block */ animationDidStopHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end
