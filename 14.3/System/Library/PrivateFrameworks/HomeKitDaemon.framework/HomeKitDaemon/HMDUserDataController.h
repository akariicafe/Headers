@class NSUUID, NSString, HMFTimer, NSArray, NSDictionary, HMBModel, NSMutableSet, NSObject, HMFUnfairLock;
@protocol HMDSettingsControllerProtocol, HMDUserDataControllerDelegate, OS_dispatch_queue, HMDUserDataControllerTimerCreator;

@interface HMDUserDataController : NSObject <HMDAssistantAccessControlModelUpdateReceiver, HMDMediaContentProfileAccessControlModelUpdateReceiver, HMFLogging, HMFTimerDelegate> {
    BOOL _isModifyingState;
}

@property (readonly) HMFUnfairLock *lock;
@property (readonly) NSUUID *homeUUID;
@property (readonly) NSUUID *userUUID;
@property (readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, weak) id<HMDUserDataControllerDelegate> delegate;
@property (readonly) id<HMDUserDataControllerTimerCreator> timerCreator;
@property (retain) NSUUID *sharedSettingsRootUUID;
@property (retain) NSUUID *assistantAccessControlModelUUID;
@property (retain) NSMutableSet *assistantAccessControlAccessoryUUIDs;
@property BOOL assistantAccessControlRequiresAuthenticationForSecureRequests;
@property (retain) NSUUID *mediaContentProfileAccessControlModelUUID;
@property (retain) NSMutableSet *mediaContentProfileAccessControlAccessories;
@property (retain) NSUUID *privateSettingsRootUUID;
@property unsigned long long state;
@property (retain, nonatomic) HMFTimer *sharedZoneFirstLoadTimer;
@property (retain, nonatomic) HMFTimer *privateZoneFirstLoadTimer;
@property (readonly) id<HMDSettingsControllerProtocol> sharedSettingsController;
@property (readonly) id<HMDSettingsControllerProtocol> privateSettingsController;
@property (readonly, copy) NSArray *assistantAccessControlAccessoriesToEncode;
@property (readonly, copy) NSArray *mediaContentProfileAccessControlAccessoriesToEncode;
@property (readonly, copy) NSDictionary *sharedSettingValuesByKeyPathForAWD;
@property (readonly, copy) NSDictionary *privateSettingValuesByKeyPathForAWD;
@property (readonly, copy) HMBModel *assistantAccessControlModelToReset;
@property (readonly) BOOL isInitialized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void)encodeWithCoder:(id)a0;
- (void)handleRemovedAccessory:(id)a0;
- (void)assistantAccessControlModelUpdated:(id)a0 previousModel:(id)a1 completion:(id /* block */)a2;
- (void)mediaContentProfileAccessControlModelUpdated:(id)a0 previousModel:(id)a1 completion:(id /* block */)a2;
- (id)initWithDelegate:(id)a0 queue:(id)a1 userID:(id)a2 homeID:(id)a3 sharedSettingsController:(id)a4 privateSettingsController:(id)a5 timerCreator:(id)a6;
- (void)eventDidInitializeSharedZone;
- (void)eventDidInitializePrivateZone;
- (void)initializeSharedZoneController:(id)a0 userDataModel:(id)a1;
- (void)_invalidateSharedZoneFirstLoadTimer;
- (void)_startSharedZoneFirstLoadTimer;
- (void)initializePrivateZoneController:(id)a0 userDataModel:(id)a1;
- (void)_invalidatePrivateZoneFirstLoadTimer;
- (void)_startPrivateZoneFirstLoadTimer;
- (void)performFirstRunOperationsOnSharedZoneController:(id)a0;
- (void)performFirstRunOperationsOnPrivateZoneController:(id)a0;
- (void)_startupSharedZone;
- (void)_startupPrivateZone;
- (void)assistantAccessControlModelRemoved:(id)a0 completion:(id /* block */)a1;
- (void)mediaContentProfileAccessControlModelRemoved:(id)a0 completion:(id /* block */)a1;
- (id)initWithDelegate:(id)a0 queue:(id)a1 userID:(id)a2 homeID:(id)a3 sharedSettingsController:(id)a4 privateSettingsController:(id)a5;
- (void)handleStartForZoneController:(id)a0;
- (void)handleAssistantAccessControlAccessoryUUIDsUpdated:(id)a0 requireAuthenticationForSecureRequests:(BOOL)a1 completion:(id /* block */)a2;
- (void)handleMediaContentProfileAccessControlUpdatedAccessoryUUIDs:(id)a0 completion:(id /* block */)a1;

@end
