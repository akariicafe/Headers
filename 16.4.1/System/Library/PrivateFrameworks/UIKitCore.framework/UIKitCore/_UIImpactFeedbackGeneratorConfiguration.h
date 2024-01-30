@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

@interface _UIImpactFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration

@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *feedback;
@property (copy, nonatomic) id /* block */ feedbackUpdateBlock;
@property (nonatomic) double minimumInterval;

+ (id)lightConfiguration;
+ (id)defaultConfiguration;
+ (id)rigidConfiguration;
+ (id)softConfiguration;
+ (id)strongConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)feedbackKeyPaths;
- (BOOL)isEqual:(id)a0;
- (long long)requiredSupportLevel;
- (void).cxx_destruct;

@end
