@class NSString, NSArray;
@protocol FCCoreConfiguration, FCBundleSubscriptionManagerType, FCContentContext;

@interface FCEvergreenArticlesOperation : FCOperation {
    id<FCContentContext> _context;
    id<FCCoreConfiguration> _configuration;
    id<FCBundleSubscriptionManagerType> _bundleSubscriptionManager;
    NSString *_evergreenArticleListID;
    NSArray *_resultFeedItems;
}

@property (copy, nonatomic) id /* block */ completionHandler;

- (void)performOperation;
- (void)prepareOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithContext:(id)a0 configuration:(id)a1 bundleSubscriptionManager:(id)a2;

@end
