@class NSUUID, HMDPhotosPersonManager, NSString, HMCContext, HMDUser, HMFMessageDispatcher, HMDCloudPhotosSettingObserver, HMDCoreDataCloudTransform, HMPhotosPersonManagerSettings, NSObject, NSNotificationCenter, HMDPhotosPersonManagerSettingsModel;
@protocol OS_dispatch_queue;

@interface HMDUserPhotosPersonDataManager : HMFObject <HMDCoreDataCloudChangeListener, HMFLogging, HMFMessageReceiver>

@property (class, readonly, copy) HMPhotosPersonManagerSettings *defaultSettings;

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSUUID *homeUUID;
@property (readonly, copy) NSUUID *userUUID;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) HMCContext *backingStoreContext;
@property (readonly) HMDCoreDataCloudTransform *cloudTransform;
@property (readonly) BOOL supportsFaceClassification;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMDCloudPhotosSettingObserver *cloudPhotosSettingObserver;
@property (weak) HMDUser *user;
@property (retain) HMDPhotosPersonManagerSettingsModel *settingsModel;
@property (retain) HMDPhotosPersonManager *personManager;
@property (copy) id /* block */ personManagerFactory;
@property (readonly, copy) HMPhotosPersonManagerSettings *settings;
@property (readonly, copy) NSUUID *zoneUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (id)settingsModelUUIDWithUUID:(id)a0;

- (void)configure;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)removeCloudDataDueToUserRemoval;
- (void)_handleUpdatedSettingsModel:(id)a0;
- (void)configurePhotosPersonManagerWithSettingsModel:(id)a0;
- (void)handleHomePersonManagerSettingsDidChangeNotification:(id)a0;
- (void)handleUpdatePersonManagerSettingsMessage:(id)a0;
- (void)handleUserCamerasAccessLevelDidChangeNotification:(id)a0;
- (void)handleUserRemoteAccessDidChangeNotification:(id)a0;
- (id)persistedSettingsModel;
- (id)photosPersonManagerZoneUUIDForAnyOtherHomeCurrentUser;
- (void)recoverDueToUUIDChangeFromOldUUID:(id)a0;
- (void)removeCloudDataForZoneUUID:(id)a0 isDueToHomeGraphObjectRemoval:(BOOL)a1;
- (id)settingsModelUUID;
- (void)updateSettingsForCurrentCameraClipsAccess;
- (id)updateSettingsModelWithSettings:(id)a0;
- (void)didInsertOrUpdateModel:(id)a0 changedProperties:(id)a1;
- (void)handleUpdatePersonManagerOwnerSettingsMessage:(id)a0;
- (void)handleUpdatedUserModel:(id)a0;
- (id)initWithUser:(id)a0 messageDispatcher:(id)a1 backingStoreContext:(id)a2 cloudTransform:(id)a3 workQueue:(id)a4 supportsFaceClassification:(BOOL)a5 notificationCenter:(id)a6 cloudPhotosSettingObserver:(id)a7;
- (id)initWithUser:(id)a0 messageDispatcher:(id)a1 workQueue:(id)a2;
- (BOOL)shouldUseUserModelForSettings;

@end
