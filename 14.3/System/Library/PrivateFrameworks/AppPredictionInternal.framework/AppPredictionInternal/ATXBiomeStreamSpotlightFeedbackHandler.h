@class ATXBiomeStreamFeedbackHandler;

@interface ATXBiomeStreamSpotlightFeedbackHandler : NSObject {
    ATXBiomeStreamFeedbackHandler *_inner;
}

+ (id)feedbackHandlerWithFeedbackRouter:(id)a0;

- (void).cxx_destruct;
- (void)persistBookmark;
- (void)processSpotlightFeedback;

@end
