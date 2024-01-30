@class SAMovieMovie;

@interface SAMovieMovieSnippet : SAUISnippet

@property (retain, nonatomic) SAMovieMovie *movie;
@property (nonatomic) BOOL playTrailer;

+ (id)movieSnippet;
+ (id)movieSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
