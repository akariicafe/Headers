@class NSArray, NSString, SAMovieV2MovieDetailSnippet, NSDate, NSNumber;

@interface SAMovieV2MovieListCell : SADomainObject

@property (copy, nonatomic) NSArray *displayableShowtimes;
@property (retain, nonatomic) SAMovieV2MovieDetailSnippet *movieDetailSnippet;
@property (copy, nonatomic) NSString *movieName;
@property (copy, nonatomic) NSArray *posterImages;
@property (copy, nonatomic) NSNumber *qualityRating;
@property (copy, nonatomic) NSString *rating;
@property (copy, nonatomic) NSDate *theatricalReleaseDate;

+ (id)movieListCell;
+ (id)movieListCellWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
