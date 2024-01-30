@class NSArray, NSDictionary, FCForYouConfig, NSError, FCCachePolicy;
@protocol FCContentContext, FCCoreConfiguration, FCForYouBridgedConfigurationParser, FCBundleSubscriptionManagerType, FCFeedPersonalizing;

@interface FCForYouConfigHeadlinesOperation : FCOperation

@property (retain, nonatomic) FCForYouConfig *resultForYouConfig;
@property (retain, nonatomic) NSDictionary *resultArticleListsByID;
@property (retain, nonatomic) NSDictionary *resultHeadlinesByArticleListID;
@property (retain, nonatomic) NSDictionary *resultHeadlinesByArticleID;
@property (retain, nonatomic) NSDictionary *resultTagsByID;
@property (retain) FCForYouConfig *forYouConfig;
@property (retain) NSError *error;
@property (copy, nonatomic) id<FCCoreConfiguration> configuration;
@property (retain, nonatomic) id<FCContentContext> context;
@property (retain, nonatomic) id<FCFeedPersonalizing> personalizer;
@property (retain, nonatomic) id<FCForYouBridgedConfigurationParser> bridgedConfigurationParser;
@property (retain, nonatomic) id<FCBundleSubscriptionManagerType> bundleSubscriptionManager;
@property (nonatomic) long long fields;
@property (copy, nonatomic) NSArray *additionalArticleListIDs;
@property (copy, nonatomic) NSArray *additionalTagIDs;
@property (nonatomic) BOOL shouldFetchEditorialSectionTags;
@property (retain, nonatomic) FCCachePolicy *forYouConfigCachePolicy;
@property (retain, nonatomic) FCCachePolicy *articleListCachePolicy;
@property (retain, nonatomic) FCCachePolicy *editorialSectionTagCachePolicy;
@property (copy, nonatomic) id /* block */ headlinesCompletionHandler;
@property (copy, nonatomic) id /* block */ headlinesAndTagsCompletionHandler;

- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)forYouConfigRecordID;
- (id)localTodayFeedConfiguration;
- (id)_edgeCacheHint;

@end
