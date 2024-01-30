@class NSString;

@interface JFXEffectAnimationDelegate : NSObject <CAAnimationDelegate>

@property (nonatomic) BOOL animationDidBegin;
@property (nonatomic) BOOL animationDidEnd;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;
- (void)animateWithCompletion:(id /* block */)a0;

@end
