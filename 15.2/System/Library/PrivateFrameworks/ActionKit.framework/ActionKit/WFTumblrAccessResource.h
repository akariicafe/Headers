@class NSString;

@interface WFTumblrAccessResource : WFAccessResource

@property (class, copy, nonatomic) NSString *tumblrOAuthToken;
@property (class, copy, nonatomic) NSString *tumblrOAuthTokenSecret;

@property (copy, nonatomic) NSString *OAuthToken;
@property (copy, nonatomic) NSString *OAuthTokenSecret;

+ (id)keychain;
+ (id)userInterfaceProtocol;
+ (id)userInterfaceClasses;

- (id)resourceName;
- (unsigned long long)status;
- (id)username;
- (void).cxx_destruct;
- (void)logOut;
- (id)protectedResourceDescription;
- (id)associatedAppIdentifier;
- (BOOL)canLogOut;
- (void)makeAvailableWithRemoteInterface:(id)a0 completionHandler:(id /* block */)a1;

@end
