@interface WFPinboardAccessResource : WFAccessResource

+ (id)pinboardUsername;
+ (id)pinboardPassword;
+ (id)pinboardToken;

- (id)icon;
- (void)logOut;
- (id)username;
- (id)resourceName;
- (id)name;
- (unsigned long long)globalLevelStatus;
- (id)protectedResourceDescription;
- (BOOL)canLogOut;

@end
