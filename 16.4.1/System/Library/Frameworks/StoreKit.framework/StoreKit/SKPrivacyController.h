@interface SKPrivacyController : NSObject

+ (long long)authorizationStatus;
+ (void)requestAuthorization:(id /* block */)a0;
+ (id)_sharedCloudServiceStatusMonitor;
+ (long long)_authorizationStatusFromUnderlyingAuthorizationStatus:(long long)a0;

@end
