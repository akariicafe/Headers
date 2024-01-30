@interface AXMTraitDetectorNode : AXMEvaluationNode <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long sampleFrequency;
@property (nonatomic) BOOL shouldEvaluateColorInformation;
@property (nonatomic) double colorDistanceTheshold;

+ (BOOL)isSupported;
+ (id)title;

- (void)nodeInitialize;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (BOOL)requiresVisionFramework;
- (void)_evaluateColorInformation:(id)a0;
- (id)_blurValueForVisionObservation:(id)a0;
- (id)_brightnessValueForVisionObservation:(id)a0;

@end
