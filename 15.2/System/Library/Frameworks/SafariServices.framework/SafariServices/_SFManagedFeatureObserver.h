@class NSString, LAContext;

@interface _SFManagedFeatureObserver : NSObject <MCProfileConnectionObserver> {
    BOOL _cachedAuthenticationRequiredToAutoFill;
    LAContext *_context;
}

@property (readonly, nonatomic) BOOL authenticationRequiredToAutoFill;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedObserver;

- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (BOOL)_isUserEnrolledInBiometricAuthentication;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
