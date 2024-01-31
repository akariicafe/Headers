@interface CNSharedProfileAnimationGenerator : NSObject

+ (id)log;

- (void)applyBlurFilterToLayer:(id)a0 inputRadius:(double)a1;
- (id)coinFlipSpringAnimationWithKeyPath:(id)a0 fromValue:(double)a1 toValue:(double)a2;
- (id)peekABooFinalSpringAnimationWithKeyPath:(id)a0 fromValue:(double)a1 toValue:(double)a2;
- (id)peekABooIntermediateSpringAnimationWithKeyPath:(id)a0 fromValue:(double)a1 toValue:(double)a2;
- (void)performCoinFlipAnimationForAnimatingAvatarView:(id)a0 pendingNickname:(id)a1 contact:(id)a2 completionHandler:(id /* block */)a3;
- (void)performCoinFlipAnimationForAnimatingAvatarView:(id)a0 toAvatarImage:(id)a1 completionHandler:(id /* block */)a2;
- (void)performCoinFlipAnimationForAnimatingAvatarView:(id)a0 toContact:(id)a1 rightToLeft:(BOOL)a2 avatarSize:(struct CGSize { double x0; double x1; })a3 completionHandler:(id /* block */)a4;
- (void)performPeekABooAnimationForAnimatingAvatarView:(id)a0 pendingNickname:(id)a1 contact:(id)a2 completionHandler:(id /* block */)a3;
- (id)springAnimationWithKeyPath:(id)a0 fromValue:(double)a1 toValue:(double)a2 stiffness:(double)a3 damping:(double)a4 mass:(double)a5;

@end
