@class NSMutableDictionary;

@interface ICPrivacyInfo : NSObject {
    NSMutableDictionary *_cache;
    NSMutableDictionary *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) ICPrivacyInfo *sharedPrivacyInfo;

@property (readonly, nonatomic) BOOL privacyAcknowledgementRequiredForMedia;
@property (readonly, nonatomic) BOOL privacyAcknowledgementRequiredForMusic;

+ (BOOL)_queryPrivacyAcknowledgementRequiredForIdentifier:(id)a0;
+ (id)_onboardingKitPrivacyIdentifierForPrivacyIdentifier:(id)a0;

- (void)_updateForPrivacyAcknowledgementChanged;
- (BOOL)_privacyAcknowledgementRequiredForIdentifier:(id)a0;
- (id)beginObservingPrivacyAcknowledgementForIdentifier:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)endObservingPrivacyAcknowledgementForIdentifier:(id)a0 withToken:(id)a1;
- (void)acknowledgePrivacyPolicyForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)a0;
- (BOOL)privacyAcknowledgementRequiredForIdentifier:(id)a0;
- (BOOL)privacyAcknowledgementRequiredForBundleIdentifier:(id)a0;

@end
