@class _UIStatesFeedbackGenerator;

@interface _UITapticEngine : NSObject

@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator;
@property (nonatomic) BOOL feedbackActivated;

- (id)init;
- (void).cxx_destruct;
- (void)prepareUsingFeedback:(long long)a0;
- (void)endUsingFeedback:(long long)a0;
- (id)_stateForFeedback:(long long)a0;
- (void)actuateFeedback:(long long)a0;

@end
