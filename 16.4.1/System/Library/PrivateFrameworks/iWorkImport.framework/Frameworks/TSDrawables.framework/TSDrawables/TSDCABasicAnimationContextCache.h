@interface TSDCABasicAnimationContextCache : TSDCAPropertyAnimationContextCache

@property (readonly, nonatomic) id fromValue;
@property (readonly, nonatomic) id toValue;

- (void).cxx_destruct;
- (id)initWithAnimation:(id)a0;
- (double)percentAtTime:(double)a0;
- (id)valueAtTime:(double)a0 initialValue:(id)a1 groupTimingFactor:(double)a2;

@end
