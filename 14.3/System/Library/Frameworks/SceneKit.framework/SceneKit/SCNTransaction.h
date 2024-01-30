@class CAMediaTimingFunction;

@interface SCNTransaction : NSObject

@property (class, nonatomic) double animationDuration;
@property (class, copy, nonatomic) CAMediaTimingFunction *animationTimingFunction;
@property (class, nonatomic) BOOL disableActions;
@property (class, copy, nonatomic) id /* block */ completionBlock;

+ (void)commit;
+ (void)begin;
+ (void)unlock;
+ (unsigned int)currentState;
+ (void)lock;
+ (id)valueForKey:(id)a0;
+ (void)flush;
+ (void)setValue:(id)a0 forKey:(id)a1;
+ (void)postCommandWithContext:(struct __C3DScene { } *)a0 object:(id)a1 applyBlock:(id /* block */)a2;
+ (BOOL)immediateMode;
+ (void)setImmediateMode:(BOOL)a0;
+ (void)postCommandWithContext:(struct __C3DScene { } *)a0 object:(id)a1 keyPath:(id)a2 applyBlock:(id /* block */)a3;
+ (void)commitImmediate;
+ (void)postCommandWithContext:(struct __C3DScene { } *)a0 object:(id)a1 key:(id)a2 applyBlock:(id /* block */)a3;
+ (void)setImmediateModeRestrictedContext:(struct __C3DScene { } *)a0;
+ (struct __C3DScene { } *)immediateModeRestrictedContext;
+ (void)checkUncommittedTransactions;

- (void)commit;
- (void)begin;
- (double)animationDuration;
- (void)setAnimationDuration:(double)a0;
- (void)unlock;
- (void)lock;
- (void)setDisableActions:(BOOL)a0;
- (void)flush;
- (BOOL)disableActions;
- (id)animationTimingFunction;
- (void)setAnimationTimingFunction:(id)a0;

@end
