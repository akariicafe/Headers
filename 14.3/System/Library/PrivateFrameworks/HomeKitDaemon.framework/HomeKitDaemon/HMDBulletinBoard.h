@class HMDHomeManager, NSMutableDictionary, HMDLogEventDispatcher, NSString, NSObject, HMDUserNotificationCenter;
@protocol HMDFileManager, OS_dispatch_queue;

@interface HMDBulletinBoard : HMFObject <HMFLogging, NSSecureCoding, HMDCameraBulletinBoard>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) id<HMDFileManager> fileManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMDUserNotificationCenter *notificationCenter;
@property (retain, nonatomic) NSMutableDictionary *characteristicTuples;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (retain) Class persistentStoreClass;
@property (retain) Class doorbellBulletinUtilitiesClass;
@property (retain) HMDLogEventDispatcher *logEventDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)sharedBulletinBoard;
+ (BOOL)isBulletinSupportedForNonSecureCharacteristicType:(id)a0 serviceType:(id)a1;
+ (BOOL)isCriticalNonSecureServiceType:(id)a0;
+ (id)bulletinSupportedCharacteristicsForService:(id)a0;
+ (id)_targetCurrentCharacteristicTypeMap;
+ (id)_supportedSecureServices;
+ (id)_supportedNonSecureServices;
+ (BOOL)isBulletinSupportedForCharacteristicType:(id)a0 serviceType:(id)a1;
+ (id)characteristicTupleKeyFromServiceContextID:(id)a0 currentType:(id)a1;
+ (BOOL)presentationValueOfCharacteristic:(id)a0 equalTo:(id)a1;

- (void)archive;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)configureHomeManager:(id)a0;
- (void)refreshHomeBadgeNumber;
- (void)removeBulletinsForAccessory:(id)a0;
- (id)updateBulletinForFirmwareUpdateInHome:(id)a0;
- (void)insertBulletinsForChangedCharacteristics:(id)a0 changedByThisDevice:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithNotificationCenter:(id)a0 fileManager:(id)a1 workQueue:(id)a2;
- (void)_insertImageBulletinsForChangedCharacteristics:(id)a0 snapshotData:(id)a1 completion:(id /* block */)a2;
- (void)_updateCharacteristicTupleFor:(id)a0 withCurrentType:(id)a1 changedByThisDevice:(BOOL)a2;
- (BOOL)_shouldPostBulletinOnCurrentValueChangeForCharacteristic:(id)a0;
- (BOOL)_hasDuplicateBulletinForCharacteristic:(id)a0;
- (id)_insertRequestWithTitle:(id)a0 snapshotData:(id)a1 message:(id)a2 requestIdentifier:(id)a3 date:(id)a4 bulletinType:(unsigned long long)a5 actionURL:(id)a6 bulletinContext:(id)a7 actionContext:(id)a8;
- (void)removeBulletinWithRecordID:(id)a0;
- (id)_requestWithRecordID:(id)a0;
- (void)_removeBulletinsUsingPredicate:(id)a0;
- (id)_doorbellPressNotificationsNearDate:(id)a0 forCameraProfile:(id)a1;
- (id)notificationRequestsForCameraClipUUIDs:(id)a0;
- (id)bulletinReasonForChangedCharacteristic:(id)a0;
- (void)updateMessageForDoorbellPressNotificationRequestWithIdentifier:(id)a0 cameraProfile:(id)a1;
- (void)_submitLogEventForDoorbellPressedBulletinWithDate:(id)a0 significantEvents:(id)a1;
- (id)removeRedundantSignificantEventNotificationsForSignificantEvents:(id)a0;
- (void)_updateDoorbellUserInfo:(id)a0 withSignificantEventUserInfo:(id)a1;
- (id)messageForChangedCharacteristic:(id)a0 withSignificantEvents:(id)a1;
- (BOOL)updateDoorbellNotificationsNearDate:(id)a0 forBulletin:(id)a1;
- (id)_copyItemAtURL:(id)a0 toDirectory:(id)a1;
- (id)attachmentsWithFileURL:(id)a0;
- (void)_submitLogEventForSignificantEventBulletin:(id)a0;
- (void)insertImageBulletinsForChangedCharacteristics:(id)a0 snapshotData:(id)a1 completion:(id /* block */)a2;
- (void)insertCameraClipSignificantEventBulletin:(id)a0;
- (id)doorbellPressNotificationsNearDate:(id)a0 forCameraProfile:(id)a1;
- (id)insertBulletinForIncomingInvitation:(id)a0;
- (id)insertBulletinForSecureTrigger:(id)a0;
- (void)insertReachabilityEventBulletinForAccessory:(id)a0 reachable:(BOOL)a1 date:(id)a2;
- (void)insertHomeHubReachabilityBulletinForHome:(id)a0 reachable:(BOOL)a1;
- (void)removeBulletinsForHome:(id)a0;
- (void)removeBulletinsForService:(id)a0;
- (void)removeBulletinsForTrigger:(id)a0;
- (void)removeAllBulletins;
- (BOOL)isTargetCharacteristic:(id)a0 matchCurrentCharacteristic:(id)a1;
- (void)insertCameraAccessModeChangedBulletin:(id)a0;

@end
