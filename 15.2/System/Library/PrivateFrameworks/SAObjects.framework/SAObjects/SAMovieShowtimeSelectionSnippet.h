@class SAMovieMovie;

@interface SAMovieShowtimeSelectionSnippet : SAUISnippet

@property (retain, nonatomic) SAMovieMovie *movie;

+ (id)showtimeSelectionSnippet;
+ (id)showtimeSelectionSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
