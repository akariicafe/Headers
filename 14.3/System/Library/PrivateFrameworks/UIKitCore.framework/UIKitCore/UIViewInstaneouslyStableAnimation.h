@class NSString;
@protocol UIVectorOperatable;

@interface UIViewInstaneouslyStableAnimation : NSObject <UIIntervalAnimating> {
    id<UIVectorOperatable> _velocity;
}

@property (retain, nonatomic) id<UIVectorOperatable> targetValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)value;
- (void)setVelocity:(id)a0;
- (id)velocity;
- (BOOL)isStable;
- (id)stepWithDelta:(double)a0;
- (id)initWithTargetValue:(id)a0 velocity:(id)a1;

@end
