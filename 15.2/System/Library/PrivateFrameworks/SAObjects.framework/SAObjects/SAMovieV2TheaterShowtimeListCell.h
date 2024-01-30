@class SAMovieV2ShowtimeSnippet, SADistance, NSString;

@interface SAMovieV2TheaterShowtimeListCell : SADomainObject

@property (nonatomic) BOOL bookable;
@property (retain, nonatomic) SADistance *relativeDistance;
@property (retain, nonatomic) SAMovieV2ShowtimeSnippet *showtimeSnippet;
@property (copy, nonatomic) NSString *theaterName;

+ (id)theaterShowtimeListCell;
+ (id)theaterShowtimeListCellWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
