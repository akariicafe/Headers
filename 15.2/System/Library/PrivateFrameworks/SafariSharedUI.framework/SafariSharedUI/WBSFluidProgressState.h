@class NSString, WBSFluidProgressAnimation;

@interface WBSFluidProgressState : NSObject {
    double _webKitProgressValue;
    double _linearFunctionM;
    double _linearFunctionB;
    double _startTimeForFluidProgress;
    double _lastTimeProgressValueWasUpdated;
    long long _fluidProgressAnimationPhase;
    double _previousDestinationPosition;
    double _animationDuration;
    double _minProgressPosition;
}

@property (readonly, nonatomic) double fluidProgressValue;
@property (readonly, nonatomic) WBSFluidProgressAnimation *nextFluidProgressAnimation;
@property (readonly, nonatomic) BOOL isFluidProgressStalled;
@property (nonatomic) long long fluidProgressType;
@property (copy, nonatomic) NSString *loadURL;
@property (nonatomic) double minProgressPosition;
@property (nonatomic) long long fluidProgressAnimationPhase;
@property (nonatomic) BOOL hasCompletedLoad;
@property (nonatomic) BOOL hasCanceledLoad;
@property (nonatomic) BOOL hasCommittedLoad;
@property (nonatomic) BOOL shouldAnimateUsingInitialPosition;

+ (double)_estimatedLoadTimeRemainingFromProgressValue:(double)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (double)_animationDuration;
- (void)setWebKitProgressValue:(double)a0;
- (void)updateFluidProgressValue;
- (void)updateNextFluidProgressAnimation;
- (void)_updateLinearFunction;
- (double)secondsElapsedSinceLoadBegan;
- (double)_fractionCompleteAtElapsedTime:(double)a0;
- (double)_adjustProgressPosition:(double)a0;
- (double)_nextProgressPosition:(double)a0;
- (double)_estimatedLoadTimeRemaining;

@end
