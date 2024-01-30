@class NSString;

@interface _HMPrivacySettingsProvider : NSObject <_HMPrivacySettingsProvider>

@property (readonly) unsigned long long cachedAuthorizationStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)queryAuthorizationStatus;
- (void)requestAccessWithQueue:(id)a0 completion:(id /* block */)a1;

@end
