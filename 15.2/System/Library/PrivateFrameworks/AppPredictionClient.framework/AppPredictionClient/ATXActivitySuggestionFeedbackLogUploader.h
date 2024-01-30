@interface ATXActivitySuggestionFeedbackLogUploader : NSObject

+ (void)sendActivitySuggestionEventToCoreAnalytics:(id)a0;
+ (id)_generateCADictionaryForEvent:(id)a0;
+ (id)_arrayToStringOfClasses:(id)a0;

@end
