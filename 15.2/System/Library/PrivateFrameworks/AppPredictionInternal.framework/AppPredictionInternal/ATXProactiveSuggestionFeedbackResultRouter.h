@class NSDictionary;

@interface ATXProactiveSuggestionFeedbackResultRouter : NSObject {
    NSDictionary *_feedbackListeners;
}

- (id)initWithFeedbackListeners:(id)a0;
- (void)handleNewFeedbackResult:(id)a0;
- (void)_initializeFeedbackListenersDictWith:(id)a0;
- (id)clientModelIdsWithFeedbackListeners;
- (void).cxx_destruct;
- (id)init;

@end
