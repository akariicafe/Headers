@class NSMutableDictionary;

@interface SBFSteppedAnimationTimingFunctionCalculator : NSObject {
    NSMutableDictionary *_functionsByName;
}

@property (nonatomic) double percentComplete;

- (id)init;
- (void).cxx_destruct;
- (void)addTimingFunctionWithName:(id)a0 fromNormalizedAnimationSettings:(id)a1;
- (double)valueForFunctionWithName:(id)a0;
- (void)addTimingFunction:(id)a0 withName:(id)a1 constrainedToIntervalBetween:(double)a2 and:(double)a3;
- (id)timingFunctionNames;
- (void)addTimingFunction:(id)a0 withName:(id)a1;

@end
