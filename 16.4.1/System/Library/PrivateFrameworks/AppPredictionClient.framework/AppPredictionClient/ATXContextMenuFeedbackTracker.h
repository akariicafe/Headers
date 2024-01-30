@interface ATXContextMenuFeedbackTracker : NSObject

+ (void)_logContextMenuFeedbackWithMenuActionType:(int)a0 suggestion:(id)a1 consumerSubType:(unsigned char)a2 tracker:(id)a3;
+ (id)_suggestionStringForProactiveSuggestion:(id)a0;
+ (void)logContextMenuFeedbackForDismissOnceWithSuggestion:(id)a0 consumerSubType:(unsigned char)a1 tracker:(id)a2;
+ (void)logContextMenuFeedbackForNeverShowAgainWithSuggestion:(id)a0 consumerSubType:(unsigned char)a1 tracker:(id)a2;

@end
