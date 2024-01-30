@class NSArray, SAMovieV2MovieDetailSnippet;

@interface SAMovieV2TheaterShowtimeListSnippet : SAUISnippet

@property (retain, nonatomic) SAMovieV2MovieDetailSnippet *movieDetailSnippet;
@property (copy, nonatomic) NSArray *theaterShowtimeListCells;

+ (id)theaterShowtimeListSnippet;
+ (id)theaterShowtimeListSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
