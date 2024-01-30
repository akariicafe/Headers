@interface SKPrivacyController : NSObject

+ (void)requestAuthorization:(id /* block */)a0;
+ (id)_sharedCloudServiceStatusMonitor;
+ (long long)authorizationStatus;
+ (long long)_authorizationStatusFromUnderlyingAuthorizationStatus:(long long)a0;

@end
