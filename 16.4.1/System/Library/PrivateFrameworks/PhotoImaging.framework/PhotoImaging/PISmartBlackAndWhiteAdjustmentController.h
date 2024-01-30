@class NSString;

@interface PISmartBlackAndWhiteAdjustmentController : PIAdjustmentController

@property (class, readonly, nonatomic) NSString *strengthKey;
@property (class, readonly, nonatomic) NSString *neutralKey;
@property (class, readonly, nonatomic) NSString *toneKey;
@property (class, readonly, nonatomic) NSString *grainKey;
@property (class, readonly, nonatomic) NSString *hueKey;
@property (class, readonly, nonatomic) NSString *attributeStrengthKey;
@property (class, readonly, nonatomic) NSString *attributeNeutralGammaKey;
@property (class, readonly, nonatomic) NSString *attributeToneKey;
@property (class, readonly, nonatomic) NSString *attributeHueKey;
@property (class, readonly, nonatomic) NSString *attributeGrainKey;

@property (nonatomic) double strength;
@property (nonatomic) double neutral;
@property (nonatomic) double tone;
@property (nonatomic) double grain;
@property (nonatomic) double hue;

+ (id)inputGrainKey;
+ (id)inputHueKey;
+ (id)inputNeutralGammaKey;
+ (id)inputSeedKey;
+ (id)inputStrengthKey;
+ (id)inputToneKey;

@end
