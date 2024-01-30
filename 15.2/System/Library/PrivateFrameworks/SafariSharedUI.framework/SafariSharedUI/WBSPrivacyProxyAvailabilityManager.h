@class NSObject;
@protocol OS_dispatch_queue;

@interface WBSPrivacyProxyAvailabilityManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    BOOL _isPrivacyProxyOnInICloudSettings;
    BOOL _isPrivacyProxyPaidTierUnavailableInUserCountry;
    unsigned long long _privacyProxyTrafficBitfield;
    unsigned long long _privacyProxyAccountType;
    int _privacyProxyConfigurationChangeNotificationToken;
}

@property BOOL initialized;
@property (readonly, nonatomic) BOOL isPrivacyProxyOnInICloudSettings;
@property (readonly, nonatomic) BOOL isUserAccountInSubscriberTierForPrivacyProxy;
@property (readonly, nonatomic) BOOL isPrivacyProxyOnForEitherTier;
@property (readonly, nonatomic) BOOL isPrivacyProxyFreeTierAvailable;
@property (readonly, nonatomic) BOOL isPrivacyProxyRestrictedToTrackersByUser;
@property (readonly, nonatomic) BOOL isPrivacyProxyPaidTierUnavailableInUserCountry;
@property (readonly, nonatomic) unsigned long long state;

- (void)_registerForPrivacyProxyChangeNotifications;
- (void)_updatePrivacyProxyStateWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setPrivacyProxyEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)setPrivacyProxyState:(unsigned long long)a0 completionHandler:(id /* block */)a1;

@end
