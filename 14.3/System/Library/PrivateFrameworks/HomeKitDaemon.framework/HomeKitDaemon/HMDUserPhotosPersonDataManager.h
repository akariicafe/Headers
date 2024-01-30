@class NSUUID, NSString, HMDUser, HMFMessageDispatcher, HMDCloudPhotosSettingObserver, NSObject, HMPhotosPersonManagerSettings, HMBLocalZone, HMDPhotosPersonManager;
@protocol OS_dispatch_queue;

@interface HMDUserPhotosPersonDataManager : HMFObject <HMFLogging, HMFMessageReceiver>

@property (class, readonly, copy) HMPhotosPersonManagerSettings *defaultSettings;

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSUUID *userUUID;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) HMBLocalZone *localZone;
@property (readonly) BOOL supportsFaceClassification;
@property (weak) HMDUser *user;
@property (copy) HMPhotosPersonManagerSettings *settings;
@property (retain) HMDPhotosPersonManager *personManager;
@property (readonly) HMDCloudPhotosSettingObserver *cloudPhotosSettingObserver;
@property (copy) id /* block */ personManagerFactory;
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
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)removeCloudData;
- (id)updateSettingsModelWithSettings:(id)a0;
- (id)initWithUser:(id)a0 messageDispatcher:(id)a1 localZone:(id)a2 workQueue:(id)a3 supportsFaceClassification:(BOOL)a4 cloudPhotosSettingObserver:(id)a5;
- (id)settingsModel;
- (void)updateSettingsForCurrentCameraClipsAccess;
- (void)handleUpdatePersonManagerSettingsMessage:(id)a0;
- (void)handleFetchSettingsMessage:(id)a0;
- (void)handleUserCamerasAccessLevelDidChangeNotification:(id)a0;
- (void)handleUserRemoteAccessDidChangeNotification:(id)a0;
- (void)handleHomePersonManagerSettingsDidChangeNotification:(id)a0;
- (void)configurePhotosPersonManagerWithSettingsModel:(id)a0;
- (id)settingsModelUUID;
- (void)removeCloudDataForZoneUUID:(id)a0;
- (id)photosPersonManagerZoneUUIDForAnyOtherHomeCurrentUser;
- (id)initWithUser:(id)a0 messageDispatcher:(id)a1 localZone:(id)a2 workQueue:(id)a3;
- (void)recoverDueToUUIDChangeFromOldUUID:(id)a0;
- (void)handleUpdatedSettingsModel:(id)a0 previousSettingsModel:(id)a1;

@end
