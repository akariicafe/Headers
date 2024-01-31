@class NSDictionary;

@interface AVRatingProviders : NSObject

@property (copy, nonatomic) NSDictionary *plist;
@property (readonly, nonatomic) NSDictionary *mapForMovies;
@property (readonly, nonatomic) NSDictionary *mapForTVShows;

+ (id)shared;
+ (id)ratingProvidersWithName:(id)a0;

- (id)init;
- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;
- (void)_loadRatingMapsIfNeeded;
- (void)_loadRatingsMaps;
- (id)_movieMapForRating:(id)a0;
- (id)_tvShowsMapForRating:(id)a0;
- (id)findRatingString:(id)a0;
- (id)findRatingString:(id)a0 domain:(long long)a1 country:(id)a2 shouldPreferTVDomain:(BOOL)a3;

@end
