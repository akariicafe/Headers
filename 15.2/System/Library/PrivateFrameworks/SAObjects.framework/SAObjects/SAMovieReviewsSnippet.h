@class SAMovieMovie;

@interface SAMovieReviewsSnippet : SAUISnippet

@property (retain, nonatomic) SAMovieMovie *movie;

+ (id)reviewsSnippet;
+ (id)reviewsSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
