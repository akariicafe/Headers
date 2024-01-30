@interface SPUIFeedbackManager : NSObject

+ (id)feedbackListener;
+ (void)didAppearFromSource:(unsigned long long)a0 withQueryId:(unsigned long long)a1 queryString:(id)a2;
+ (void)didDisappearWithReason:(unsigned long long)a0 withQueryId:(unsigned long long)a1;
+ (void)flushFeedbackWithCompletion:(id /* block */)a0;
+ (void)cardViewDidDisappearWithEvent:(unsigned long long)a0 withQueryId:(unsigned long long)a1;
+ (void)didClearInputWithEvent:(unsigned long long)a0 withQueryId:(unsigned long long)a1;

@end
