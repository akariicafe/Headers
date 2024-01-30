@class SAMicroblogTwitterPostAuthor, NSArray, NSString, NSURL, NSDate, SADecoratedString, SAUIAppPunchOut;

@interface SAMicroblogMicroblogSearchResultPost : SAMicroblogMicroblogSearchResultBase

@property (copy, nonatomic) NSDate *creationTime;
@property (retain, nonatomic) SADecoratedString *decoratedContent;
@property (copy, nonatomic) NSArray *embeddedHashtags;
@property (copy, nonatomic) NSArray *embeddedImages;
@property (copy, nonatomic) NSArray *embeddedLinks;
@property (copy, nonatomic) NSArray *embeddedMentions;
@property (nonatomic) long long favoritesCount;
@property (copy, nonatomic) NSString *location;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;
@property (retain, nonatomic) SAMicroblogTwitterPostAuthor *retweetAuthor;
@property (nonatomic) long long retweetCount;
@property (copy, nonatomic) NSURL *webAddress;

+ (id)microblogSearchResultPost;
+ (id)microblogSearchResultPostWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
