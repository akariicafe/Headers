@interface AXMTraitDetectorNode : AXMEvaluationNode <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long sampleFrequency;
@property (nonatomic) BOOL shouldEvaluateColorInformation;
@property (nonatomic) double colorDistanceTheshold;

+ (BOOL)isSupported;
+ (id)title;

- (id)_blurValueForVisionObservation:(id)a0;
- (id)_brightnessValueForVisionObservation:(id)a0;
- (void)_evaluateColorInformation:(id)a0;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (void)nodeInitialize;
- (BOOL)requiresVisionFramework;
- (BOOL)validateVisionKitSoftLinkSymbols;

@end
