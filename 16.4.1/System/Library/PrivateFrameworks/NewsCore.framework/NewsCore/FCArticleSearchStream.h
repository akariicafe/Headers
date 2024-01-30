@class SFMoreResults, NSString, FCCloudContext, NSMutableOrderedSet, SFRankingFeedback;

@interface FCArticleSearchStream : NSObject <FCStreaming>

@property (nonatomic) BOOL fetching;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (copy, nonatomic) NSString *query;
@property (retain, nonatomic) SFMoreResults *moreResults;
@property (retain, nonatomic) SFRankingFeedback *rankingFeedback;
@property (retain, nonatomic) FCCloudContext *cloudContext;
@property (nonatomic) unsigned long long parsecQueryID;
@property (retain, nonatomic) NSMutableOrderedSet *articleSearchResults;
@property (nonatomic) NSString *keyboardInputMode;
@property (nonatomic) double scale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)fetchMoreResultsWithLimit:(unsigned long long)a0 qualityOfService:(long long)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithParsecQueryID:(unsigned long long)a0;

@end
