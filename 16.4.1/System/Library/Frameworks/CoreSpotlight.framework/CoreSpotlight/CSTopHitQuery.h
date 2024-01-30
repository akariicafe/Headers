@class NSMutableArray;

@interface CSTopHitQuery : CSUserQuery {
    NSMutableArray *_batches;
}

+ (void)sortSearchableItemsByL2:(id)a0;

- (void)handleFoundItems:(id)a0;
- (unsigned long long)dispatchApplyWidth;
- (void)handleCompletion:(id)a0;
- (id)initWithQueryString:(id)a0 context:(id)a1;
- (void)handleBatches:(id)a0;
- (void)filterRankedResults:(id)a0 hitCount:(unsigned long long)a1;
- (BOOL)isTopHitQuery;
- (id)initWithQueryString:(id)a0 queryContext:(id)a1;
- (id)initWithUserQueryString:(id)a0 queryContext:(id)a1;
- (id)initWithUserString:(id)a0 queryContext:(id)a1;
- (void).cxx_destruct;

@end
