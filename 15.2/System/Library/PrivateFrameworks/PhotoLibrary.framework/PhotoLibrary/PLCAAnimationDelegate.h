@class NSString;

@interface PLCAAnimationDelegate : NSObject <CAAnimationDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ start;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;

@end
