@interface PXSearchLoggingUtility : NSObject

@property (nonatomic) BOOL nextTokenSuggestionTappedInCurrentSearchSession;
@property (nonatomic) BOOL wordCompletionTappedInCurrentSearchSession;

- (void)setNextTokenSuggestionTappedInCurrentSearchSession;
- (void)setWordCompletionTappedInCurrentSearchSession;
- (void)logCurrentState;

@end
