@class PTPointSettings, NSString, PTFrameRateRangeSettings, BSAnimationSettings;

@interface SBFAnimationSettings : PTSettings <PTSettingsKeyPathObserver> {
    BSAnimationSettings *_exportedSettings;
}

@property (nonatomic) long long animationType;
@property (nonatomic) double delay;
@property (nonatomic) unsigned long long frameRate;
@property (nonatomic) unsigned long long curve;
@property (retain, nonatomic) PTPointSettings *controlPoint1Settings;
@property (retain, nonatomic) PTPointSettings *controlPoint2Settings;
@property (retain, nonatomic) PTFrameRateRangeSettings *preferredFrameRateRange;
@property (nonatomic) double duration;
@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (nonatomic) double epsilon;
@property (nonatomic) double initialVelocity;
@property (readonly, nonatomic) double calculatedDuration;
@property (nonatomic) double speed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)settingsControllerModule;
+ (id)_moduleWithSectionTitle:(id)a0;
+ (BOOL)ignoresKey:(id)a0;
+ (id)_moduleWithSectionTitle:(id)a0 delay:(BOOL)a1 frameRate:(BOOL)a2;

- (void)setDefaultValues;
- (void)setFrameRateRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a0 highFrameRateReason:(unsigned int)a1;
- (id)BSAnimationSettings;
- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDefaultValues;

@end
