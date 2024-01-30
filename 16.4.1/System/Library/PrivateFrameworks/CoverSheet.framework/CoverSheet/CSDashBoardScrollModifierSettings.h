@interface CSDashBoardScrollModifierSettings : PTSettings

@property (nonatomic) long long strategy;
@property (nonatomic) double maxScrollDistance;
@property (nonatomic) BOOL cancelScrollingIfTooMuchDrag;
@property (nonatomic) double accumulatedDragThresholdPercentage;
@property (nonatomic) double maxDragFromVerticalPerFrame;
@property (nonatomic) double powerOfVerticalDirectionSine2;
@property (nonatomic) double inertialMultiplierSigmoidBase;
@property (nonatomic) double inertialMultiplierSigmoidRange;
@property (nonatomic) double inertialMultiplierSigmoidPivot;
@property (nonatomic) double inertialMultiplierSigmoidAlpha;
@property (nonatomic) double minPercentageSigmoidBase;
@property (nonatomic) double minPercentageSigmoidRange;
@property (nonatomic) double minPercentageSigmoidPivot;
@property (nonatomic) double minPercentageSigmoidAlpha;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
