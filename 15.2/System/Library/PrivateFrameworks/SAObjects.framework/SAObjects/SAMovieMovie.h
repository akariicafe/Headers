@class NSArray, NSString, NSURL, SALocalSearchReviewList, NSNumber, NSDate;

@interface SAMovieMovie : SADomainObject

@property (copy, nonatomic) NSArray *actors;
@property (copy, nonatomic) NSArray *directors;
@property (copy, nonatomic) NSArray *genres;
@property (copy, nonatomic) NSURL *hiResTrailerUri;
@property (copy, nonatomic) NSURL *iTunesUri;
@property (nonatomic) BOOL is3d;
@property (copy, nonatomic) NSNumber *isAvailableOnItunesForPurchase;
@property (copy, nonatomic) NSNumber *isAvailableOnItunesForRent;
@property (copy, nonatomic) NSURL *lowResTrailerUri;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *posterImages;
@property (copy, nonatomic) NSURL *posterUri;
@property (copy, nonatomic) NSNumber *qualityRating;
@property (copy, nonatomic) NSString *rating;
@property (retain, nonatomic) SALocalSearchReviewList *reviews;
@property (copy, nonatomic) NSURL *rottenTomatoesUri;
@property (nonatomic) long long runtimeInMinutes;
@property (copy, nonatomic) NSArray *studios;
@property (copy, nonatomic) NSString *synopsis;
@property (copy, nonatomic) NSString *theaterShowtimeSearchRegionDescription;
@property (copy, nonatomic) NSArray *theaterShowtimes;
@property (copy, nonatomic) NSDate *theatricalReleaseDate;

+ (id)movie;
+ (id)movieWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
