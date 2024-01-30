@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

@interface _UIImpactFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration

@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *feedback;
@property (copy, nonatomic) id /* block */ feedbackUpdateBlock;
@property (nonatomic) double minimumInterval;

+ (id)softConfiguration;
+ (id)strongConfiguration;
+ (id)lightConfiguration;
+ (id)defaultConfiguration;
+ (id)rigidConfiguration;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)feedbackKeyPaths;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)requiredSupportLevel;

@end
