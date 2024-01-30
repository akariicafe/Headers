@class HMUser, NSString, HMHome, HMSettings, NSObject;
@protocol OS_dispatch_queue;

@interface MPHomeUserMonitor : NSObject <HMSettingsDelegate, HMUserDelegatePrivate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    HMUser *_user;
    HMHome *_home;
    HMSettings *_privateHomeSettings;
    HMSettings *_sharedSettings;
    BOOL _allowExplicitCachedValue;
    BOOL _currentAccessoryPrivateListeningCachedValue;
}

@property (class, readonly, nonatomic) MPHomeUserMonitor *monitorForCurrentUser;
@property (class, nonatomic, getter=isExplicitSettingEnabledForCurrentUser) BOOL explicitSettingEnabledForCurrentUser;
@property (class, nonatomic, getter=isPrivateListeningEnabledForCurrentUserAndAccessory) BOOL privateListeningEnabledForCurrentUserAndAccessory;

@property (nonatomic, getter=isExplicitSettingEnabled) BOOL explicitSettingEnabled;
@property (nonatomic, getter=isPrivateListeningEnabledForCurrentAccessory) BOOL privateListeningEnabledForCurrentAccessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userMonitorWithHomeIdentifiers:(id)a0;
+ (id)userMonitorWithHomeIdentifier:(id)a0;
+ (id)userMonitorWithUserIdentity:(id)a0 fromUserIdentityStore:(id)a1;

- (void)_update;
- (void).cxx_destruct;
- (void)user:(id)a0 didUpdateUserListeningHistoryUpdateControl:(id)a1 forHome:(id)a2;
- (void)_loadAllowExplicitValue;
- (void)_loadCurrentAccessoryPrivateListening;
- (void)_notifyAllowExplicitUpdated;
- (void)_notifyPrivateListeningUpdated;
- (void)_postNotificationWithName:(id)a0;
- (void)_updateUserListeningHistoryControlForAccessory:(id)a0 enable:(BOOL)a1;
- (BOOL)hasAccessoryWithRouteID:(id)a0;
- (id)initWithUser:(id)a0 home:(id)a1;
- (BOOL)privateListeningEnabledForAccessoryWithRouteID:(id)a0;
- (id)privateListeningEnabledForGroupWithRouteIDs:(id)a0;
- (void)setPrivateListeningEnabledForAccessoryWithRouteID:(id)a0 enabled:(BOOL)a1;
- (void)settingsDidUpdate:(id)a0;

@end
