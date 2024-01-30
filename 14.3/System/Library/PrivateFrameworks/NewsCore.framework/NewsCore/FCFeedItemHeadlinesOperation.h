@class NSArray, NSMapTable, NSDictionary;
@protocol FCContentContext, FCFeedPersonalizing, FCCoreConfiguration;

@interface FCFeedItemHeadlinesOperation : FCOperation

@property (retain, nonatomic) NSArray *resultHeadlines;
@property (retain, nonatomic) NSMapTable *resultHeadlinesByFeedItem;
@property (copy, nonatomic) id<FCCoreConfiguration> configuration;
@property (retain, nonatomic) id<FCContentContext> context;
@property (copy, nonatomic) NSArray *feedItems;
@property (retain, nonatomic) id<FCFeedPersonalizing> personalizer;
@property (copy, nonatomic) NSMapTable *feedItemScoreProfiles;
@property (nonatomic) long long feedPersonalizationConfigurationSet;
@property (nonatomic) BOOL shouldFilterHeadlinesWithoutSourceChannels;
@property (copy, nonatomic) id /* block */ rapidUpdateRefreshTest;
@property (copy, nonatomic) NSDictionary *feedContextByFeedID;
@property (copy, nonatomic) NSDictionary *feedIDsByArticleID;
@property (copy, nonatomic) id /* block */ headlinesCompletionHandler;
@property (copy, nonatomic) id /* block */ headlinesMapCompletionHandler;

- (id)init;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)_fetchUnadornedHeadlinesWithCompletionHandler:(id /* block */)a0;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
