@class NSString, SADistance, SAMovieV2MovieListSnippet;

@interface SAMovieV2TheaterListCell : SADomainObject

@property (retain, nonatomic) SADistance *relativeDistance;
@property (copy, nonatomic) NSString *theaterAddress;
@property (copy, nonatomic) NSString *theaterName;
@property (retain, nonatomic) SAMovieV2MovieListSnippet *theaterShowtimeListSnippet;

+ (id)theaterListCell;
+ (id)theaterListCellWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
