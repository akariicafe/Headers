@class NFLFeedSettings, NFLRankedLayoutRequest;

@interface NFLRankedLayoutGenerationOperation : NSOperation

@property (copy) NFLRankedLayoutRequest *request;
@property (retain, nonatomic) NFLFeedSettings *feedSettings;
@property (copy) id /* block */ rankedLayoutGenerationCompletion;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 feedSettings:(id)a1;
- (void)main;

@end
