@class NSArray, NSDictionary, NSSet, FCCachePolicy;
@protocol FCContentContext, FCCoreConfiguration;

@interface FCMultiSourceHeadlinesOperation : FCOperation

@property (retain, nonatomic) NSDictionary *resultArticleListHeadlinesByArticleListID;
@property (retain, nonatomic) NSDictionary *resultArticleListsByID;
@property (retain, nonatomic) NSDictionary *resultArticleIDHeadlinesByArticleID;
@property (copy, nonatomic) NSArray *networkEvents;
@property (copy, nonatomic) id<FCCoreConfiguration> configuration;
@property (retain, nonatomic) id<FCContentContext> context;
@property (copy, nonatomic) NSArray *articleListIDs;
@property (copy, nonatomic) NSSet *articleIDs;
@property (retain, nonatomic) FCCachePolicy *cachePolicyForArticleLists;
@property (nonatomic) BOOL shouldBypassRecordSourcePersistence;
@property (retain, nonatomic) NSDictionary *heldRecordsByType;
@property (copy, nonatomic) id /* block */ headlinesCompletionHandler;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
