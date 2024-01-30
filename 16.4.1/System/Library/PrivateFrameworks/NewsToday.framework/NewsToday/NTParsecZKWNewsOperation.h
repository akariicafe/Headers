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

- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)performOperation;
- (id)init;
- (void).cxx_destruct;
- (void)setTimeoutDuration:(double)a0;

@end
