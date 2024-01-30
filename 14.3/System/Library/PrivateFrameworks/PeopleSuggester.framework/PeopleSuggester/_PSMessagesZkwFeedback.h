@class NSString, NSArray;

@interface _PSMessagesZkwFeedback : NSObject

@property (nonatomic) BOOL dryRun;
@property (readonly, copy, nonatomic) NSString *chatGuidEngaged;
@property (readonly, copy, nonatomic) NSArray *suggestions;

- (void).cxx_destruct;
- (id)getTrialID;
- (id)initWithChatGuidEngagaged:(id)a0 suggestions:(id)a1;
- (id)feedbackPayload;
- (unsigned long long)indexOfEngagedSuggestionForChatGuidEngaged;
- (id)reasonTypeForSuggestionIndex:(unsigned long long)a0;
- (id)reasonForSuggestionIndex:(unsigned long long)a0;
- (long long)feedbackActionTypeForSuggestionIndex:(unsigned long long)a0;

@end
