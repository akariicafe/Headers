@class NSString, NSArray;
@protocol FCCoreConfiguration, FCBundleSubscriptionManagerType, FCContentContext;

@interface FCEvergreenArticlesOperation : FCOperation

@property (readonly, nonatomic) id<FCContentContext> context;
@property (readonly, nonatomic) id<FCCoreConfiguration> configuration;
@property (readonly, nonatomic) id<FCBundleSubscriptionManagerType> bundleSubscriptionManager;
@property (retain, nonatomic) NSString *evergreenArticleListID;
@property (retain, nonatomic) NSArray *resultFeedItems;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)prepareOperation;
- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (id)initWithContext:(id)a0 configuration:(id)a1 bundleSubscriptionManager:(id)a2;
- (void)operationWillFinishWithError:(id)a0;
- (id)_promiseArticleRecords;
- (id)_promiseFeedItemsFromArticleRecords:(id)a0;

@end
