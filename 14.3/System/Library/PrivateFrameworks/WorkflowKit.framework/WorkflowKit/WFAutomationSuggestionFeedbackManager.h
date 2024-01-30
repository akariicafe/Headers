@class NSMutableDictionary;

@interface WFAutomationSuggestionFeedbackManager : NSObject <WFApplicationStateObserver>

@property (class, readonly, nonatomic) WFAutomationSuggestionFeedbackManager *sharedManager;

@property (retain, nonatomic) NSMutableDictionary *feedbackMapping;
@property (retain, nonatomic) NSMutableDictionary *identifierMapping;

+ (id)trialIDWithSerializedSuggestion:(id)a0;
+ (id)trialIDWithSuggestion:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applicationContext:(id)a0 applicationStateDidChange:(long long)a1;
- (BOOL)isMockDataEnabled;
- (void)addFeedbackWithType:(unsigned long long)a0 serializedSuggestion:(id)a1 automationIdentifier:(id)a2;
- (void)reportFeedback;
- (void)trackSuggestion:(id)a0 source:(unsigned long long)a1 completed:(BOOL)a2 visible:(BOOL)a3 interacted:(BOOL)a4;
- (void)trackRoutineWithIdentifier:(id)a0 source:(unsigned long long)a1 completed:(BOOL)a2 interacted:(BOOL)a3;

@end
