@class NSString;

@interface UIDictationInputModeOptions : NSObject

@property (copy, nonatomic) NSString *invocationSource;
@property (nonatomic) BOOL shouldStayInDictationInputModeIfAutoEndpointed;
@property (nonatomic) BOOL shouldSupressShowingAlternativesAutomatically;

+ (id)dictationInputModeOptionsWithInvocationSource:(id)a0;

- (void).cxx_destruct;

@end
