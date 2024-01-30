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
    unsigned long long _privacyProxyServiceStatus;
    BOOL _isPrivacyProxyActiveOnDefaultNetwork;
    int _privacyProxyConfigurationChangeNotificationToken;
    int _privacyProxyServiceStatusChangeNotificationToken;
}

@property BOOL initialized;
@property (readonly, nonatomic) BOOL isPrivacyProxyOnInICloudSettings;
@property (readonly, nonatomic) BOOL isUserAccountInSubscriberTierForPrivacyProxy;
@property (readonly, nonatomic) BOOL isPrivacyProxyOnForEitherTier;
@property (readonly, nonatomic) BOOL isPrivacyProxyFreeTierAvailable;
@property (readonly, nonatomic) BOOL isPrivacyProxyActive;
@property (readonly, nonatomic) BOOL isPrivacyProxyRestrictedToTrackersByUser;
@property (readonly, nonatomic) BOOL isPrivacyProxyPaidTierUnavailableInUserCountry;
@property (readonly, nonatomic) unsigned long long state;

+ (void)openPrivateRelayICloudSettings;

- (void)setPrivacyProxyEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_registerForPrivacyProxyChangeNotifications;
- (void)_updatePrivacyProxyStateWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setPrivacyProxyState:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (BOOL)_isPrivacyProxyActiveForInterface:(id)a0 networkStatuses:(id)a1;
- (void).cxx_destruct;
- (void)_registerForDefaultNetworkInterfaceChangeNotifications;

@end
