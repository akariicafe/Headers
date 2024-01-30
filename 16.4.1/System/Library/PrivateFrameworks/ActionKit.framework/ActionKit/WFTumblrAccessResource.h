@class NSString;

@interface WFTumblrAccessResource : WFAccessResource

@property (class, copy, nonatomic) NSString *tumblrOAuthToken;
@property (class, copy, nonatomic) NSString *tumblrOAuthTokenSecret;

@property (copy, nonatomic) NSString *OAuthToken;
@property (copy, nonatomic) NSString *OAuthTokenSecret;

+ (id)keychain;
+ (id)userInterfaceClasses;
+ (id)userInterfaceProtocol;

- (id)username;
- (unsigned long long)status;
- (void).cxx_destruct;
- (id)resourceName;
- (id)associatedAppIdentifier;
- (BOOL)canLogOut;
- (void)logOut;
- (void)makeAvailableWithRemoteInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)protectedResourceDescription;

@end
