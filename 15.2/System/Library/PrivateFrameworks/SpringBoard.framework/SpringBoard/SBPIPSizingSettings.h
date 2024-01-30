@interface SBPIPSizingSettings : PTSettings

@property (nonatomic) double landcapeAspectRatioClosedIntervalLowerBound;
@property (nonatomic) double landcapeAspectRatioClosedIntervalUpperBound;
@property (nonatomic) double portraitAspectRatioClosedIntervalLowerBound;
@property (nonatomic) double portraitAspectRatioClosedIntervalUpperBound;
@property (nonatomic) double squareAspectRatioClosedIntervalLowerBound;
@property (nonatomic) double squareAspectRatioClosedIntervalUpperBound;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
