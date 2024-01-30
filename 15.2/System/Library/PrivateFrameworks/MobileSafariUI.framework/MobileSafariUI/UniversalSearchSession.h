@class WBSParsecDFeedbackDispatcher;

@interface UniversalSearchSession : WBSParsecDSession

@property (readonly, nonatomic) WBSParsecDFeedbackDispatcher *feedbackDispatcher;

+ (id)sharedSession;
+ (BOOL)shouldUseSearchFoundation;

- (void)session:(id)a0 bag:(id)a1 didLoadWithError:(id)a2;

@end
