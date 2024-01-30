@class NSArray;

@interface SAMovieMovieListSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *movies;
@property (nonatomic) BOOL shouldShowRottenTomatoesRating;

+ (id)movieListSnippet;
+ (id)movieListSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
