@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

@interface _UIDragSnappingFeedbackGeneratorConfiguration : _UIDragFeedbackGeneratorConfiguration

@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *objectSnappedFeedback;

+ (id)defaultConfiguration;

- (id)feedbackKeyPaths;
- (void).cxx_destruct;

@end
