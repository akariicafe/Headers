@class NSArray, SALocalSearchBusiness2;

@interface SAMovieV2MovieListSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *movieListCells;
@property (retain, nonatomic) SALocalSearchBusiness2 *theater;

+ (id)movieListSnippet;
+ (id)movieListSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
