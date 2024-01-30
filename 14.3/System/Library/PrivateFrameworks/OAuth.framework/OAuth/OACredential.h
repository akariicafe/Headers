@class NSString;

@interface OACredential : NSObject

@property (copy, nonatomic) NSString *consumerKey;
@property (copy, nonatomic) NSString *consumerSecret;
@property (copy, nonatomic) NSString *oauthToken;
@property (copy, nonatomic) NSString *oauthTokenSecret;

- (id)signingKey;
- (void)dealloc;

@end
