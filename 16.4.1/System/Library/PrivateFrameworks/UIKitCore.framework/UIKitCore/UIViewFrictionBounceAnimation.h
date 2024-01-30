@class NSString;
@protocol UIVectorOperatable;

@interface UIViewFrictionBounceAnimation : NSObject <UIIntervalAnimating> {
    id _stableTarget;
    id _intermediate;
    id _current;
    id _epsilon;
    double _deceleration;
    double _bounce;
}

@property (retain, nonatomic) id<UIVectorOperatable> targetValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setVelocity:(id)a0;
- (id)stepWithDelta:(double)a0;
- (BOOL)isStable;
- (id)velocity;
- (void).cxx_destruct;
- (id)initWithCurrent:(id)a0 target:(id)a1;
- (id)updatedTarget;

@end
