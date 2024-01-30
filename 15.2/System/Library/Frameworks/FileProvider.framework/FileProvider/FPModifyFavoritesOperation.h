@class NSArray;

@interface FPModifyFavoritesOperation : FPTransformOperation {
    NSArray *_ranks;
    BOOL _isUnfavorite;
}

- (id)fp_prettyDescription;
- (void).cxx_destruct;
- (id)replicateForItems:(id)a0;
- (unsigned long long)transformItem:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithItems:(id)a0 favoriteRanks:(id)a1 isUnfavorite:(BOOL)a2;
- (id)initWithItemsToFavorite:(id)a0 favoriteRanks:(id)a1;
- (id)initWithItemsToUnfavorite:(id)a0;

@end
