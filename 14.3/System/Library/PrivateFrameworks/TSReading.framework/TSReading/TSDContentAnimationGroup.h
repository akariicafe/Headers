@class NSArray, CAMediaTimingFunction;

@interface TSDContentAnimationGroup : TSDContentAnimation

@property (copy, nonatomic) NSArray *animations;
@property (nonatomic) double duration;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;

- (void)dealloc;
- (BOOL)i_canProduceAnimation;
- (id)i_endLocation;
- (id)i_animationWithTransformBlock:(id /* block */)a0;

@end
