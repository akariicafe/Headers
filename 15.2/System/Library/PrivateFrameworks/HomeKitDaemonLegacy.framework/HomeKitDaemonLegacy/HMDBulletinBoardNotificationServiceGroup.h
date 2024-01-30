@class NSUUID, NSHashTable, NSArray, NSString, NSSet, HMFMessageDispatcher, HMDBulletinBoardNotification, NSObject;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDBulletinBoardNotificationServiceGroup : HMFObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMFDumpState> {
    id<HMFLocking> _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) HMFMessageDispatcher *msgDispatcher;
@property (readonly, copy, nonatomic) NSHashTable *cameraProfilesTable;
@property (readonly, copy, nonatomic) NSHashTable *associatedServicesTable;
@property (retain, nonatomic) NSSet *cameraProfileUUIDs;
@property (retain, nonatomic) NSSet *associatedServiceUUIDs;
@property (weak) HMDBulletinBoardNotification *bulletinBoardNotification;
@property (retain, nonatomic) NSArray *associatedServices;
@property (retain, nonatomic) NSArray *cameraProfiles;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)dumpState;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void)_sendNotification:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)_registerNotificationHandlers;
- (id)initWithBulletinBoardNotification:(id)a0;
- (void)configureWithWorkQueue:(id)a0 messageDispatcher:(id)a1;
- (void)_handleBulletinBoardNotificationServiceGroupRequest:(id)a0;
- (BOOL)_isSupportedAssociationService:(id)a0;
- (BOOL)_isAlarmService:(id)a0;
- (BOOL)_isNotificationGeneratingService:(id)a0;
- (void)configureBulletinNotification;
- (BOOL)_isDefaultRoom:(id)a0 ofHome:(id)a1;
- (id)_accessoriesInRoom:(id)a0 ofHome:(id)a1;
- (id)_cameraNotificationGeneratingServicesForAccessory:(id)a0;
- (void)_configureServices;
- (void)_updateAssociatedServices:(id)a0 associatedCameras:(id)a1;
- (void)_updateAssociatedServicesTable:(id)a0;
- (id)_prepareServiceGroupPayload;
- (void)setCameraProfilesTable:(id)a0;
- (void)setAssociatedServicesTable:(id)a0;
- (id)_cameraProfileWithID:(id)a0;
- (id)actionContextForCameraProfileID:(id)a0;

@end
