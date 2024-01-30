@class NSString, CAMediaTimingFunction;

@interface TSDCAAnimationContextCache : NSObject <TSDCAAnimationContextCacheProtocol>

@property (readonly, nonatomic) CAMediaTimingFunction *timingFunction;
@property (readonly, nonatomic) double beginTime;
@property (readonly, nonatomic) double timeOffset;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSString *fillMode;
@property (readonly, nonatomic) BOOL autoreverses;
@property (readonly, nonatomic) double repeatCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAnimation:(id)a0;
- (double)animationPercentFromAnimationTime:(double)a0;
- (double)percentAtTime:(double)a0;
- (BOOL)shouldUseInitialValueAtAnimationTime:(double)a0;
- (id)valueAtTime:(double)a0 initialValue:(id)a1;
- (id)valueAtTime:(double)a0 initialValue:(id)a1 groupTimingFactor:(double)a2;
- (id)valueForKeyPath:(id)a0 atTime:(double)a1 animationCache:(id)a2;
- (double)workingPercentFromAnimationTime:(double)a0;

@end
