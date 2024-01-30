@class ICUserIdentity, NSMutableDictionary;

@interface ICPrivacyInfo : NSObject {
    ICUserIdentity *_userIdentity;
    NSMutableDictionary *_cache;
    NSMutableDictionary *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) ICPrivacyInfo *sharedPrivacyInfo;

@property (readonly, nonatomic) BOOL privacyAcknowledgementRequiredForMedia;
@property (readonly, nonatomic) BOOL privacyAcknowledgementRequiredForMusic;

+ (id)_onboardingKitPrivacyIdentifierForPrivacyIdentifier:(id)a0;
+ (id)sharedPrivacyInfoForUserIdentity:(id)a0;

- (id)initWithIdentity:(id)a0;
- (BOOL)privacyAcknowledgementRequiredForBundleIdentifier:(id)a0;
- (BOOL)_queryPrivacyAcknowledgementRequiredForIdentifier:(id)a0;
- (BOOL)_privacyAcknowledgementRequiredForIdentifier:(id)a0;
- (BOOL)privacyAcknowledgementRequiredForIdentifier:(id)a0;
- (void)acknowledgePrivacyPolicyForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)a0;
- (void)endObservingPrivacyAcknowledgementForIdentifier:(id)a0 withToken:(id)a1;
- (id)init;
- (id)beginObservingPrivacyAcknowledgementForIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)_updateForPrivacyAcknowledgementChanged;
- (id)description;
- (id)_accountForPrivacyInfo;
- (void).cxx_destruct;

@end
