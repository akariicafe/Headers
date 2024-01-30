@class NSArray;

@interface DOCFavoritesManager : DOCItemCollectionObserver

@property (readonly) NSArray *favoritedLocations;
@property (readonly) BOOL isGathering;

+ (id)sharedManager;
+ (id)favoritesCollection;

- (void)removeFavorite:(id)a0 completion:(id /* block */)a1;
- (void)addFavorite:(id)a0 completion:(id /* block */)a1;
- (void)favoriteItems:(id)a0 ranks:(id)a1 completion:(id /* block */)a2;
- (id)_newlyComputedRanksForItems:(id)a0;
- (void)_reverseInsertAll:(id)a0 atIndex:(long long)a1 completion:(id /* block */)a2;
- (void)insertFavorite:(id)a0 atIndex:(long long)a1 completion:(id /* block */)a2;
- (void)insertFavorites:(id)a0 atIndex:(long long)a1 completion:(id /* block */)a2;
- (void)moveFavorite:(id)a0 toTargetIndex:(long long)a1 completion:(id /* block */)a2;
- (void)redistributeRanksCompletion:(id /* block */)a0;
- (void)runInMainThread:(id /* block */)a0;
- (void)updateFavoritesRanksToMatchOrderedFavorites:(id)a0 completion:(id /* block */)a1;

@end
