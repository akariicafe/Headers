@class NSString;
@protocol UIVectorOperatable;

@interface UIViewAnimationComposer : NSObject <UIViewAnimationComposing> {
    double _previousInteractiveUpdateTimestamp;
    id _previousInteractiveUpdateValue;
    id<UIVectorOperatable> _previousTarget;
    BOOL _interactive;
}

@property (retain, nonatomic) id<UIVectorOperatable> targetVelocity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)projectValue:(id)a0 decelerationFactor:(double)a1;
- (id)init;
- (void).cxx_destruct;
- (id)createAnimationFromDescription:(id)a0 currentValue:(id)a1 velocity:(id)a2 targetValue:(id)a3;
- (BOOL)isActive;
- (id)composeAnimation:(id)a0 withNewAnimationDescription:(id)a1 interactive:(BOOL)a2 currentValue:(id)a3 targetValue:(id)a4;

@end
