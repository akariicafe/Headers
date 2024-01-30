@interface SKPrivacyController : NSObject

+ (id)sharedInstance;
+ (void)validatePermissionsExpiryWithCompletion:(id /* block */)a0;
+ (BOOL)_hasEntitlementForAuthorizationExemption;

- (long long)authorizationStatus;
- (void)requestAuthorization:(id /* block */)a0;

@end
