@interface WFPinboardAccessResource : WFAccessResource

+ (id)userInterfaceClasses;
+ (id)userInterfaceProtocol;
+ (id)pinboardPassword;
+ (id)pinboardToken;
+ (id)pinboardUsername;

- (id)icon;
- (id)username;
- (unsigned long long)status;
- (id)name;
- (id)resourceName;
- (BOOL)canLogOut;
- (void)logOut;
- (void)makeAvailableWithRemoteInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)protectedResourceDescription;

@end
