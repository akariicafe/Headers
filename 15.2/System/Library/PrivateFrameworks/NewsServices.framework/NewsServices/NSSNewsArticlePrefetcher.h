@interface NSSNewsArticlePrefetcher : NSObject

- (id)init;
- (void)prefetchArticlesForArticleIDs:(id)a0;
- (void)cancelPrefetchingArticlesForArticleIDs:(id)a0;

@end
