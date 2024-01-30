@class NSMutableArray;

@interface CSTopHitSearchQuery : CSUserQuery {
    NSMutableArray *_batches;
    unsigned long long _foundItemCount;
    id /* block */ foundItemsHandler;
    id /* block */ completionHandler;
}

- (id)initWithSearchString:(id)a0 keyboardLanguage:(id)a1 attributes:(id)a2 hitCount:(unsigned long long)a3;
- (void).cxx_destruct;
- (BOOL)isTopHitQuery;
- (id /* block */)foundItemsHandler;
- (void)handleFoundItems:(id)a0;
- (void)setFoundItemsHandler:(id /* block */)a0;
- (void)_handleBatches:(id)a0;
- (id)initWithQueryString:(id)a0 context:(id)a1;
- (void)userEngagedWithResult:(id)a0 interactionType:(int)a1;
- (unsigned long long)foundItemCount;
- (void)handleCompletion:(id)a0;
- (void)setCompletionHandler:(id /* block */)a0;
- (id /* block */)completionHandler;

@end
