@class NSDate, SAMovieV2ShowtimeSnippet, NSArray, NSString, NSURL, SAUIAppPunchOut, SAMovieV2TheaterShowtimeListSnippet, SAMovieV2ReviewListSnippet, NSNumber;

@interface SAMovieV2MovieDetailSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *actors;
@property (copy, nonatomic) NSString *adamId;
@property (copy, nonatomic) NSArray *alternateProviderPunchouts;
@property (copy, nonatomic) NSNumber *availableOnItunesForPurchase;
@property (copy, nonatomic) NSNumber *availableOnItunesForRent;
@property (nonatomic) BOOL canBeFavorited;
@property (copy, nonatomic) NSString *canonicalId;
@property (copy, nonatomic) NSArray *directors;
@property (copy, nonatomic) NSArray *genres;
@property (copy, nonatomic) NSURL *hiresTrailerUri;
@property (copy, nonatomic) NSURL *iTunesUri;
@property (nonatomic) BOOL is3d;
@property (nonatomic) BOOL isContainerItem;
@property (copy, nonatomic) NSURL *lowresTrailerUri;
@property (copy, nonatomic) NSURL *movieIdentifier;
@property (retain, nonatomic) SAMovieV2ReviewListSnippet *movieReviewListSnippet;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SAUIAppPunchOut *playOnItunesPunchout;
@property (copy, nonatomic) NSNumber *playTrailer;
@property (copy, nonatomic) NSArray *posterImages;
@property (copy, nonatomic) NSNumber *qualityRating;
@property (copy, nonatomic) NSString *rating;
@property (nonatomic) long long runtimeInMinutes;
@property (retain, nonatomic) SAMovieV2ShowtimeSnippet *showtimeSnippet;
@property (copy, nonatomic) NSArray *studios;
@property (copy, nonatomic) NSString *synopsis;
@property (retain, nonatomic) SAMovieV2TheaterShowtimeListSnippet *theaterShowtimeListSnippet;
@property (copy, nonatomic) NSString *theaterShowtimeSearchRegionDescription;
@property (copy, nonatomic) NSDate *theatricalReleaseDate;
@property (retain, nonatomic) SAUIAppPunchOut *videosPunchout;

+ (id)movieDetailSnippet;
+ (id)movieDetailSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
