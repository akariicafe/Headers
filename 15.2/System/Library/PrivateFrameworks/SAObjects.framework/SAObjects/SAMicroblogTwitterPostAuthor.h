@class NSString, NSURL, NSNumber;

@interface SAMicroblogTwitterPostAuthor : SADomainObject

@property (nonatomic) long long followersCount;
@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSURL *profileImageUrl;
@property (copy, nonatomic) NSString *screenName;
@property (copy, nonatomic) NSNumber *userId;
@property (nonatomic) BOOL verified;

+ (id)twitterPostAuthor;
+ (id)twitterPostAuthorWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
