@class SAMicroblogTwitterPostAuthor, NSString, NSArray, NSURL, SAUIAppPunchOut, SADecoratedString;

@interface SAMicroblogAceMicroblogSearchResult : SADomainObject

@property (retain, nonatomic) SAMicroblogTwitterPostAuthor *globalAuthor;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSArray *resultNews;
@property (copy, nonatomic) NSArray *resultPosts;
@property (copy, nonatomic) NSArray *resultUsers;
@property (retain, nonatomic) SADecoratedString *summary;
@property (copy, nonatomic) NSURL *webAddress;

+ (id)aceMicroblogSearchResult;
+ (id)aceMicroblogSearchResultWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
