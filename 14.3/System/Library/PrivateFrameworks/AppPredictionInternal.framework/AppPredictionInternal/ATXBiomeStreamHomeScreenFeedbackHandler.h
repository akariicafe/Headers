@class ATXBiomeStreamFeedbackHandler;

@interface ATXBiomeStreamHomeScreenFeedbackHandler : NSObject {
    ATXBiomeStreamFeedbackHandler *_inner;
}

+ (id)feedbackHandlerWithFeedbackRouter:(id)a0;

- (void).cxx_destruct;
- (void)persistBookmark;
- (void)processHomeScreenFeedback;

@end
