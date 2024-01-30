@class NSString, NSArray, SALocalSearchBusiness2, SAUIImageResource;

@interface SAMovieV2ShowtimeSnippet : SAUISnippet

@property (retain, nonatomic) SAUIImageResource *attributionLogo;
@property (copy, nonatomic) NSString *movieName;
@property (copy, nonatomic) NSArray *showtimes;
@property (retain, nonatomic) SALocalSearchBusiness2 *theater;
@property (copy, nonatomic) NSString *theaterName;

+ (id)showtimeSnippet;
+ (id)showtimeSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
