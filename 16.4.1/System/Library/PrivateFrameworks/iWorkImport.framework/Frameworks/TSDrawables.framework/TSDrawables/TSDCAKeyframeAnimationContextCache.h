@class NSArray;

@interface TSDCAKeyframeAnimationContextCache : TSDCAPropertyAnimationContextCache

@property (readonly, nonatomic) NSArray *values;
@property (readonly, nonatomic) NSArray *keyTimes;
@property (readonly, nonatomic) NSArray *timingFunctions;

- (void).cxx_destruct;
- (id)initWithAnimation:(id)a0;
- (double)percentAtTime:(double)a0;
- (id)valueAtTime:(double)a0 initialValue:(id)a1 groupTimingFactor:(double)a2;

@end
