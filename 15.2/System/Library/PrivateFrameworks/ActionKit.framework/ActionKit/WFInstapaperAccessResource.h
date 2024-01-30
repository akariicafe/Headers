@class NSString;

@interface WFInstapaperAccessResource : WFAccessResource

@property (class, retain, nonatomic) NSString *instapaperUsername;
@property (class, retain, nonatomic) NSString *instapaperToken;
@property (class, retain, nonatomic) NSString *instapaperTokenSecret;

+ (void)initialize;
+ (id)keychain;
+ (id)userInterfaceProtocol;
+ (id)userInterfaceClasses;

- (id)resourceName;
- (unsigned long long)status;
- (id)username;
- (void)logOut;
- (id)protectedResourceDescription;
- (id)associatedAppIdentifier;
- (BOOL)canLogOut;
- (void)makeAvailableWithRemoteInterface:(id)a0 completionHandler:(id /* block */)a1;

@end
