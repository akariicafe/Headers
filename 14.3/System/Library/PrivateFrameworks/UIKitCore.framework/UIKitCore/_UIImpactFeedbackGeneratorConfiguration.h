@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

@interface _UIImpactFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration

@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *feedback;
@property (copy, nonatomic) id /* block */ feedbackUpdateBlock;
@property (nonatomic) double minimumInterval;

+ (id)defaultConfiguration;
+ (id)softConfiguration;
+ (id)rigidConfiguration;
+ (id)lightConfiguration;
+ (id)strongConfiguration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)feedbackKeyPaths;
- (BOOL)isEqual:(id)a0;
- (long long)requiredSupportLevel;

@end
