@class SBHarmonySettings, CBClient, NSMutableArray;

@interface SBHarmonyController : NSObject {
    CBClient *_client;
    SBHarmonySettings *_harmonySettings;
    NSMutableArray *_suppressionAssertions;
    long long _suppressedWhitePointAdaptationEnabled;
    long long _suppressedBlueLightReductionEnabled;
}

@property (readonly, nonatomic) BOOL supportsWhitePointAdaptation;
@property (nonatomic, getter=isWhitePointAdaptationEnabled) BOOL whitePointAdaptationEnabled;
@property (nonatomic) long long whitePointAdaptivityStyle;
@property (readonly, nonatomic) BOOL supportsBlueLightReduction;
@property (readonly, nonatomic) SBHarmonySettings *harmonySettings;

+ (id)sharedInstance;

- (id)_adaptationClient;
- (void)transitionFromWhitePointAdaptivityStyleWithStyles:(id)a0 toWhitePointAdaptivityStyleWithStyles:(id)a1 fromPercentage:(double)a2 toPercentage:(double)a3 animationSettings:(id)a4;
- (float)whitePointAdaptationStrengthForWhitePointAdaptivityStyle:(long long)a0;
- (id)init;
- (void)setWhitePointAdaptationStrength:(float)a0 forWhitePointAdaptivityStyle:(long long)a1;
- (void)setWhitePointAdaptivityStyle:(long long)a0 animationSettings:(id)a1;
- (void)setWhitePointAdaptivityStyleWithStyles:(id)a0 animationSettings:(id)a1;
- (void).cxx_destruct;

@end
