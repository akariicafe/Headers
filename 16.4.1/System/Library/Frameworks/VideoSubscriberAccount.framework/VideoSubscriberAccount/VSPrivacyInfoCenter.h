@class NSString;

@interface VSPrivacyInfoCenter : NSObject <VSManagedProfileConnectionObserver>

@property (nonatomic) int registrationToken;
@property (nonatomic) long long accountAccessStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPrivacyInfoCenter;

- (void)dealloc;
- (id)init;
- (void)profileConnectionSettingsChanged:(id)a0;
- (void)_invalidateAccountAccessStatus;
- (void)profileConnectionProfileChanged:(id)a0;
- (id)updateAccountAccessStatusWithError:(id)a0;
- (void)updateAccountAccessStatusWithResponse:(id)a0;

@end
