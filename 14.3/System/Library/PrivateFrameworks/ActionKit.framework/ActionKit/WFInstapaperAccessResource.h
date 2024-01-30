@interface WFInstapaperAccessResource : WFAccessResource

+ (void)initialize;
+ (id)instapaperUsername;
+ (id)instapaperToken;
+ (id)instapaperTokenSecret;

- (void)logOut;
- (id)username;
- (id)resourceName;
- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;
- (BOOL)canLogOut;

@end
