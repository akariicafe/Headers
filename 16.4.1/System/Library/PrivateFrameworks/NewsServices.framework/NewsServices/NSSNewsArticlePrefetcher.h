@interface NSSNewsArticlePrefetcher : NSObject

- (id)init;
- (void)cancelPrefetchingArticlesForArticleIDs:(id)a0;
- (void)prefetchArticlesForArticleIDs:(id)a0;

@end
