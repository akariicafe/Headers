@class NSMutableSet;

@interface CSHashtagQuery : CSSearchQuery {
    NSMutableSet *_hashtags;
}

@property (copy) id /* block */ hashTagCompletionHandler;

- (id)initWithQueryString:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)initWithQueryString:(id)a0 bundleIDs:(id)a1;
- (void)handleFoundAttributes:(id)a0 values:(id)a1 attributesHandler:(id /* block */)a2;
- (void)handleCompletion:(id)a0;

@end
