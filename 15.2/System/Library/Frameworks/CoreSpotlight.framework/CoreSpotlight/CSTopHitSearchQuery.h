@class NSMutableArray;

@interface CSTopHitSearchQuery : CSUserQuery {
    NSMutableArray *_batches;
    unsigned long long _foundItemCount;
    id /* block */ foundItemsHandler;
    id /* block */ completionHandler;
}

- (id /* block */)completionHandler;
- (BOOL)isTopHitQuery;
- (id)initWithQueryString:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)userEngagedWithResult:(id)a0 interactionType:(int)a1;
- (void)setFoundItemsHandler:(id /* block */)a0;
- (unsigned long long)foundItemCount;
- (void)handleFoundItems:(id)a0;
- (void)handleCompletion:(id)a0;
- (void)setCompletionHandler:(id /* block */)a0;
- (id)initWithSearchString:(id)a0 keyboardLanguage:(id)a1 attributes:(id)a2 hitCount:(unsigned long long)a3;
- (id /* block */)foundItemsHandler;
- (void)_handleBatches:(id)a0;

@end
