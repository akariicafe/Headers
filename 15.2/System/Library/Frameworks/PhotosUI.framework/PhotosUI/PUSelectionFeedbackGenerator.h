@class UISelectionFeedbackGenerator;

@interface PUSelectionFeedbackGenerator : NSObject

@property (readonly, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator;

- (void)prepareFeedback;
- (void)performFeedback;
- (void).cxx_destruct;
- (id)init;

@end
