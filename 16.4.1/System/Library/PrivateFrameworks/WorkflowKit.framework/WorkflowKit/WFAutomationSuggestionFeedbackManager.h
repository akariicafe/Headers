@interface WFAutomationSuggestionFeedbackManager : NSObject

@property (class, readonly, nonatomic) WFAutomationSuggestionFeedbackManager *sharedManager;

- (id)init;
- (void)trackRoutineWithIdentifier:(id)a0 source:(unsigned long long)a1 completed:(BOOL)a2 interacted:(BOOL)a3;

@end
