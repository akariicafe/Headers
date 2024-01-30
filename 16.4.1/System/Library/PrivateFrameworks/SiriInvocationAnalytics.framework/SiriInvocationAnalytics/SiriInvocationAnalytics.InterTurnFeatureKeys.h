@class NSString;

@interface SiriInvocationAnalytics.InterTurnFeatureKeys : NSObject

@property (class, nonatomic, readonly) NSString *SECONDS_TILL_NEXT_REQUEST_KEY;
@property (class, nonatomic, readonly) NSString *PHONETIC_RESTATE_SCORE_NEXT_REQ_KEY;
@property (class, nonatomic, readonly) NSString *TEXT_SIMILARITY_SCORE_WITH_NEXT_REQ_KEY;
@property (class, nonatomic, readonly) NSString *SECONDS_TILL_NEXT_CONVERSATION_KEY;
@property (class, nonatomic, readonly) NSString *PHONETIC_RESTATE_SCORE_NEXT_CONV_KEY;
@property (class, nonatomic, readonly) NSString *TEXT_SIMILARITY_NEXT_CONVERSATION_KEY;
@property (class, nonatomic, readonly) NSString *CONFIRMATION_FOLLOWED_KEY;
@property (class, nonatomic, readonly) NSString *CANCELLATION_FOLLOWED_KEY;

- (id)init;
- (void).cxx_destruct;

@end
