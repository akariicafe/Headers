@class NSString;

@interface WFTumblrAccessResource : WFAccessResource

@property (class, copy, nonatomic) NSString *tumblrOAuthToken;
@property (class, copy, nonatomic) NSString *tumblrOAuthTokenSecret;

@property (copy, nonatomic) NSString *OAuthToken;
@property (copy, nonatomic) NSString *OAuthTokenSecret;

- (void).cxx_destruct;
- (void)logOut;
- (id)username;
- (id)resourceName;
- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;
- (BOOL)canLogOut;

@end
