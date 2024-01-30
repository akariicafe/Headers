@class NSString, NSUUID, NSMutableDictionary;
@protocol HMDCompositeSettingControllerManagerStateTransitionDelegate, HMDCompositeSettingControllerManagerStateManagerDataSource, HMDCompositeSettingNotificationRegistrationProviding;

@interface HMDCompositeSettingControllerManagerStateManager : NSObject <HMFLogging, HMDCompositeSettingControllerManagerStateManager> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_homeUUIDToState;
}

@property (readonly, nonatomic) unsigned long long notificationOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) id<HMDCompositeSettingNotificationRegistrationProviding> notificationRegistrationProvider;
@property (readonly, weak) id<HMDCompositeSettingControllerManagerStateTransitionDelegate> delegate;
@property (readonly, copy) NSUUID *uuid;
@property (readonly, weak) id<HMDCompositeSettingControllerManagerStateManagerDataSource> dataSource;

+ (id)logCategory;

- (void)_registerForNotifications;
- (id)logIdentifier;
- (void)_unregisterForNotifications;
- (void).cxx_destruct;
- (void)_computeResidentStateChangeForHome:(id)a0;
- (void)_createStateForHomeUUIDIfNotExist:(id)a0;
- (void)_handleAccessoryLanguagesChangedNotification:(id)a0;
- (void)_handleAccessoryRemovedNotification:(id)a0;
- (void)_handleCompositeSettingsControllerConfiguredNotification:(id)a0;
- (void)_handleHomeAdded:(id)a0;
- (void)_handleResidentDeviceUpdated:(id)a0;
- (void)_handleSiriEndpointProfileCreation:(id)a0;
- (void)_handleSiriEndpointProfileSettingsUpdate:(id)a0;
- (id)initWithDataSource:(id)a0 notificationRegistrationProvider:(id)a1 subscribeWithOptions:(unsigned long long)a2 delegate:(id)a3 uuid:(id)a4;
- (long long)stateForHomeUUID:(id)a0;

@end
