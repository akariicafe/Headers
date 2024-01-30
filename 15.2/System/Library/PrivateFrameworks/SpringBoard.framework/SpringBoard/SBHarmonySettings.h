@class NSString;

@interface SBHarmonySettings : PTSettings

@property (nonatomic) float whitePointAdaptationStrengthStandard;
@property (nonatomic) float whitePointAdaptationStrengthReading;
@property (nonatomic) float whitePointAdaptationStrengthPhoto;
@property (nonatomic) float whitePointAdaptationStrengthVideo;
@property (nonatomic) float whitePointAdaptationStrengthGame;
@property (nonatomic) float whitePointAdaptationUpdateDefaultDuration;
@property (nonatomic) BOOL whitePointAdaptationInteractiveUpdateEnabled;
@property (copy, nonatomic) NSString *whitePointAdaptationInteractiveUpdateTimingFunctionName;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
