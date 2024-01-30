@class ATXActivitySuggestionFeedbackStream, ATXActivitySuggestionsFeedbackHistogramHelper;

@interface ATXActivitySuggestionsFeedbackProcessor : NSObject {
    ATXActivitySuggestionFeedbackStream *_feedbackStream;
    ATXActivitySuggestionsFeedbackHistogramHelper *_feedbackHistogramHelper;
}

- (void).cxx_destruct;
- (id)init;
- (void)processFeedbackWithXPCActivity:(id)a0;
- (id)initWithFeedbackStream:(id)a0 feedbackHistogramHelper:(id)a1;
- (id)_activitySuggestionsFeedbackBookmark;

@end
