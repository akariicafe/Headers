@interface _CDInteractionFeedbackLogger : NSObject

+ (id)aggdKeyForAdviceSource:(unsigned long long)a0;
+ (id)aggdKeyForPresentationStyle:(unsigned long long)a0;
+ (void)logFeedbackItemSelected:(id)a0 adviceSource:(unsigned long long)a1 presentationStyle:(unsigned long long)a2 itemsShown:(id)a3 bundleID:(id)a4;

@end
