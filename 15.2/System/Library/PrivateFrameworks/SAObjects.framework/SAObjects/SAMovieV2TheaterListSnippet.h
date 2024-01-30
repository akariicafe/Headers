@class NSArray;

@interface SAMovieV2TheaterListSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *theaterListCells;

+ (id)theaterListSnippet;
+ (id)theaterListSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
