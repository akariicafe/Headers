@class NSString;

@interface VSPrivacyInfoCenter : NSObject <MCProfileConnectionObserver>

@property (nonatomic) int registrationToken;
@property (nonatomic) long long accountAccessStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPrivacyInfoCenter;

- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (id)init;
- (void)dealloc;
- (void)updateAccountAccessStatusWithResponse:(id)a0;
- (id)updateAccountAccessStatusWithError:(id)a0;
- (void)_invalidateAccountAccessStatus;

@end
