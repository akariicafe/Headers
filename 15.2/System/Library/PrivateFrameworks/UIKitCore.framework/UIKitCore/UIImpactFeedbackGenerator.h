@class _UIImpactFeedbackGeneratorConfiguration;

@interface UIImpactFeedbackGenerator : UIFeedbackGenerator {
    long long _style;
}

@property (readonly, nonatomic, getter=_impactConfiguration) _UIImpactFeedbackGeneratorConfiguration *impactConfiguration;

+ (Class)_configurationClass;

- (id)_stats_key;
- (id)_ui_descriptionBuilder;
- (id)initWithStyle:(long long)a0 coordinateSpace:(id)a1;
- (id)initWithStyle:(long long)a0;
- (void)impactOccurredWithIntensity:(double)a0;
- (void)_impactOccurredWithIntensity:(double)a0;
- (id)_styleString;
- (void)impactOccurred;

@end
