@class NSMutableSet;

@interface CSHashtagQuery : CSSearchQuery {
    NSMutableSet *_hashtags;
}

@property (copy) id /* block */ hashTagCompletionHandler;

- (void)handleFoundAttributes:(id)a0 values:(id)a1 attributesHandler:(id /* block */)a2;
- (id)initWithQueryString:(id)a0 bundleIDs:(id)a1;
- (void)handleCompletion:(id)a0;
- (id)initWithQueryString:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
