@interface WFPinboardAccessResource : WFAccessResource

+ (id)userInterfaceProtocol;
+ (id)userInterfaceClasses;
+ (id)pinboardUsername;
+ (id)pinboardPassword;
+ (id)pinboardToken;

- (id)resourceName;
- (unsigned long long)status;
- (id)username;
- (id)icon;
- (id)name;
- (void)logOut;
- (id)protectedResourceDescription;
- (BOOL)canLogOut;
- (void)makeAvailableWithRemoteInterface:(id)a0 completionHandler:(id /* block */)a1;

@end
