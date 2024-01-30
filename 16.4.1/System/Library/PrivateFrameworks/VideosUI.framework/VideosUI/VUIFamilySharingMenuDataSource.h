@class NSArray, NSString, VUIMediaAPIClient;

@interface VUIFamilySharingMenuDataSource : VUILibraryMenuDataSource

@property (retain, nonatomic) NSArray *genres;
@property (nonatomic) BOOL hasFetchedGenres;
@property (nonatomic) BOOL hasFetchedRecentPurchases;
@property (nonatomic) BOOL hasFetchedMovies;
@property (nonatomic) BOOL hasFetchedShows;
@property (nonatomic) BOOL hasRecentPurchases;
@property (nonatomic) BOOL hasMovies;
@property (nonatomic) BOOL hasShows;
@property (retain, nonatomic) VUIMediaAPIClient *mediaClient;
@property (retain, nonatomic) NSString *ownerIdentifier;

- (void).cxx_destruct;
- (id /* block */)_categoryTypesSortComparator;
- (id)_constructGenreMenuItems;
- (id)_constructMainMenuItems;
- (id)_constructVUIMenuDataSource;
- (void)_fetchGenres;
- (void)_fetchMovies;
- (void)_fetchRecentPurchases;
- (void)_fetchShows;
- (BOOL)_hasCompletedAllFetches;
- (void)_notifyDelegatesFetchDidComplete;
- (id)getGenreByGenreTitle:(id)a0;
- (id)initWithValidCategories:(id)a0;
- (void)startFetch;

@end
