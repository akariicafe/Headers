@class NSMutableDictionary;

@interface SBFSteppedAnimationTimingFunctionCalculator : NSObject {
    NSMutableDictionary *_functionsByName;
}

@property (nonatomic) double percentComplete;

- (void)addTimingFunctionWithName:(id)a0 fromNormalizedAnimationSettings:(id)a1;
- (void)addTimingFunction:(id)a0 withName:(id)a1 constrainedToIntervalBetween:(double)a2 and:(double)a3;
- (void).cxx_destruct;
- (id)init;
- (double)valueForFunctionWithName:(id)a0;
- (id)timingFunctionNames;
- (void)addTimingFunction:(id)a0 withName:(id)a1;

@end
