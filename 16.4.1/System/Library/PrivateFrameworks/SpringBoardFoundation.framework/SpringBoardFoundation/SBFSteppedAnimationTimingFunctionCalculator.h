@class NSMutableDictionary;

@interface SBFSteppedAnimationTimingFunctionCalculator : NSObject {
    NSMutableDictionary *_functionsByName;
}

@property (nonatomic) double percentComplete;

- (void)addTimingFunction:(id)a0 withName:(id)a1;
- (void)addTimingFunction:(id)a0 withName:(id)a1 constrainedToIntervalBetween:(double)a2 and:(double)a3;
- (void)addTimingFunctionWithName:(id)a0 fromNormalizedAnimationSettings:(id)a1;
- (id)timingFunctionNames;
- (id)init;
- (double)valueForFunctionWithName:(id)a0;
- (void).cxx_destruct;

@end
