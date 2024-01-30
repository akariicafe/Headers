@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

@interface _UIDragSnappingFeedbackGeneratorConfiguration : _UIDragFeedbackGeneratorConfiguration

@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *objectSnappedFeedback;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)feedbackKeyPaths;

@end
