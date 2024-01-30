@class NSString, FCFetchOperation, FCArticleContent, NSError, NSObject;
@protocol OS_dispatch_group, FCHeadlineProviding;

@interface FCArticle : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchGroup;
@property (retain, nonatomic) NSError *fetchError;
@property (retain, nonatomic) FCFetchOperation *headlineFetchOperation;
@property (retain, nonatomic) id<FCHeadlineProviding> headline;
@property (retain, nonatomic) FCArticleContent *content;
@property (readonly, nonatomic) NSString *articleID;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 articleID:(id)a1 forceArticleUpdate:(BOOL)a2 qualityOfService:(long long)a3 relativePriority:(long long)a4;
- (id)initWithContext:(id)a0 headline:(id)a1;
- (void)performBlockWhenContentIsLoaded:(id /* block */)a0;
- (void)performBlockWhenFullyLoaded:(id /* block */)a0;

@end
