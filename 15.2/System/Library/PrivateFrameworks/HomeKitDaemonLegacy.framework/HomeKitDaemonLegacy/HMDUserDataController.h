@class NSUUID, NSString, HMFTimer, NSArray, NSDictionary, HMBModel, NSMutableSet, NSObject, NSNotificationCenter, HMFUnfairLock;
@protocol HMDUserDataControllerTimerCreator, HMDSettingsControllerProtocol, HMDUserDataControllerDelegate, OS_dispatch_queue, HMDUserDataControllerDataSource;

@interface HMDUserDataController : NSObject <HMDAssistantAccessControlModelUpdateReceiver, HMDMediaContentProfileAccessControlModelUpdateReceiver, HMDUserListeningHistoryUpdateControlModelUpdateReceiver, HMDSharedUserDataModelUpdateReceiver, HMFLogging, HMFTimerDelegate> {
    BOOL _isModifyingState;
}

@property (readonly) HMFUnfairLock *lock;
@property (readonly) NSUUID *homeUUID;
@property (readonly) NSUUID *userUUID;
@property (readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, weak) id<HMDUserDataControllerDelegate> delegate;
@property (readonly, weak) id<HMDUserDataControllerDataSource> dataSource;
@property (readonly) id<HMDUserDataControllerTimerCreator> timerCreator;
@property (retain) NSUUID *sharedSettingsRootUUID;
@property (retain) NSUUID *assistantAccessControlModelUUID;
@property (retain) NSMutableSet *assistantAccessControlAccessoryUUIDs;
@property BOOL assistantAccessControlRequiresAuthenticationForSecureRequests;
@property BOOL assistantAccessControlActivityNotificationsEnabledForPersonalRequests;
@property (retain) NSUUID *mediaContentProfileAccessControlModelUUID;
@property (retain) NSMutableSet *mediaContentProfileAccessControlAccessories;
@property (retain) NSUUID *userListeningHistoryUpdateControlModelUUID;
@property (retain) NSMutableSet *userListeningHistoryUpdateControlModelAccessories;
@property (retain) NSUUID *privateSettingsRootUUID;
@property unsigned long long state;
@property (retain, nonatomic) HMFTimer *sharedZoneFirstLoadTimer;
@property (retain, nonatomic) HMFTimer *privateZoneFirstLoadTimer;
@property (retain) NSNotificationCenter *notificationCenter;
@property (readonly) BOOL isCurrentUser;
@property (readonly) id<HMDSettingsControllerProtocol> sharedSettingsController;
@property (readonly) id<HMDSettingsControllerProtocol> privateSettingsController;
@property (readonly, copy) NSArray *assistantAccessControlAccessoriesToEncode;
@property (readonly, copy) NSArray *mediaContentProfileAccessControlAccessoriesToEncode;
@property (readonly, copy) NSArray *userListeningHistoryUpdateControlModelAccessoriesToEncode;
@property (readonly, copy) NSDictionary *sharedSettingValuesByKeyPathForAWD;
@property (readonly, copy) NSDictionary *privateSettingValuesByKeyPathForAWD;
@property (readonly, copy) HMBModel *assistantAccessControlModelToReset;
@property (readonly) BOOL isInitialized;
@property (readonly) BOOL isRecognizeMyVoiceEnabled;
@property (readonly) BOOL hasUserSeenRMVNewLanguageNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)timerDidFire:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)handleRemovedAccessory:(id)a0;
- (void)setHasUserSeenRMVNewLanguageNotification:(BOOL)a0;
- (void)userListeningHistoryUpdateControlModelUpdated:(id)a0 previousModel:(id)a1 completion:(id /* block */)a2;
- (void)sharedUserDataModelUpdated:(id)a0 previousModel:(id)a1 completion:(id /* block */)a2;
- (void)mediaContentProfileAccessControlModelUpdated:(id)a0 previousModel:(id)a1 completion:(id /* block */)a2;
- (void)assistantAccessControlModelUpdated:(id)a0 previousModel:(id)a1 completion:(id /* block */)a2;
- (long long)sharedSettingsControllerRunState;
- (void)userListeningHistoryUpdateControlModelRemoved:(id)a0 completion:(id /* block */)a1;
- (void)mediaContentProfileAccessControlModelRemoved:(id)a0 completion:(id /* block */)a1;
- (void)assistantAccessControlModelRemoved:(id)a0 completion:(id /* block */)a1;
- (id)initWithDelegate:(id)a0 dataSource:(id)a1 queue:(id)a2 userID:(id)a3 homeID:(id)a4 sharedSettingsController:(id)a5 privateSettingsController:(id)a6 timerCreator:(id)a7 isCurrentUser:(BOOL)a8;
- (id)initWithDelegate:(id)a0 dataSource:(id)a1 queue:(id)a2 userID:(id)a3 homeID:(id)a4 sharedSettingsController:(id)a5 privateSettingsController:(id)a6 isCurrentUser:(BOOL)a7;
- (void)eventDidInitializePrivateZone;
- (void)eventDidInitializeSharedZone;
- (void)initializeSharedZoneController:(id)a0 userDataModel:(id)a1;
- (id)_migrateUserListeningHistoryUpdateControlWithUserCurrentDataModel:(id)a0 transaction:(id)a1 settingModels:(id)a2;
- (BOOL)_userListeningHistoryValueFromModels:(id)a0;
- (id)_keyPathToModelFromKeyPath:(id)a0 models:(id)a1;
- (void)initializePrivateZoneController:(id)a0 userDataModel:(id)a1;
- (void)performFirstRunOperationsOnSharedZoneController:(id)a0;
- (void)_startSharedZoneFirstLoadTimer;
- (void)_invalidateSharedZoneFirstLoadTimer;
- (void)performFirstRunOperationsOnPrivateZoneController:(id)a0;
- (void)_startPrivateZoneFirstLoadTimer;
- (void)_invalidatePrivateZoneFirstLoadTimer;
- (void)_startupSharedZone;
- (void)_startupPrivateZone;
- (void)handleStartForZoneController:(id)a0;
- (void)handleAssistantAccessControlAccessoryUUIDsUpdated:(id)a0 requireAuthenticationForSecureRequests:(BOOL)a1 activityNotificationsEnabledForPersonalRequests:(BOOL)a2 completion:(id /* block */)a3;
- (void)handleMediaContentProfileAccessControlUpdatedAccessoryUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)handleUserListeningHistoryUpdateControlUpdatedAccessoryUUIDs:(id)a0 completion:(id /* block */)a1;
- (id)updateListeningHistoryModelToReset;

@end
