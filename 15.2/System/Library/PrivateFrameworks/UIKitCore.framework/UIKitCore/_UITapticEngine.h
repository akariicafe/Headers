@class _UIStatesFeedbackGenerator;

@interface _UITapticEngine : NSObject

@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator;
@property (nonatomic) BOOL feedbackActivated;

- (void).cxx_destruct;
- (void)actuateFeedback:(long long)a0;
- (id)init;
- (void)prepareUsingFeedback:(long long)a0;
- (void)endUsingFeedback:(long long)a0;
- (id)_stateForFeedback:(long long)a0;

@end
