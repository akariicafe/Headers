@class NSOrderedSet, NSDictionary, PARSession, NSDate, SFRankingFeedback, NSString;

@interface NTParsecZKWNewsOperation : FCOperation

@property (copy, nonatomic) NSDate *fetchDate;
@property (copy, nonatomic) NSOrderedSet *resultSearchResultIDs;
@property (copy, nonatomic) NSDictionary *resultSearchResultsBySearchResultID;
@property (copy, nonatomic) SFRankingFeedback *resultRankingFeedback;
@property (retain, nonatomic) PARSession *session;
@property (copy, nonatomic) id /* block */ newsCompletionHandler;
@property (nonatomic) double scale;
@property (copy, nonatomic) NSString *keyboardInputMode;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)setTimeoutDuration:(double)a0;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
