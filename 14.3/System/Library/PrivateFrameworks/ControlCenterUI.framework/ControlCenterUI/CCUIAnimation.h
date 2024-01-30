@protocol CCUIAnimationParameters;

@interface CCUIAnimation : NSObject <NSCopying>

@property (readonly, copy, nonatomic) id<CCUIAnimationParameters> parameters;
@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) double speed;
@property (readonly, copy, nonatomic) id /* block */ animations;

+ (id)animationWithParameters:(id)a0 delay:(double)a1 animations:(id /* block */)a2;
+ (id)animationWithParameters:(id)a0 animations:(id /* block */)a1;
+ (id)animationWithParameters:(id)a0 delay:(double)a1 speed:(double)a2 animations:(id /* block */)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithParameters:(id)a0 delay:(double)a1 speed:(double)a2 animations:(id /* block */)a3;

@end
