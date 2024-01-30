@class NSString, SALocalSearchReviewList;

@interface SAMovieV2ReviewListSnippet : SAUISnippet

@property (copy, nonatomic) NSString *movieName;
@property (retain, nonatomic) SALocalSearchReviewList *reviewList;

+ (id)reviewListSnippet;
+ (id)reviewListSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
