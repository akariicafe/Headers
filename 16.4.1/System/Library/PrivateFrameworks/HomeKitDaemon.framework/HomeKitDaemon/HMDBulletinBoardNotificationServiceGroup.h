@class NSUUID, NSHashTable, NSArray, NSString, NSSet, HMFMessageDispatcher, HMDBulletinBoardNotification, NSObject;
@protocol OS_dispatch_queue;

@interface HMDBulletinBoardNotificationServiceGroup : HMFObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMFDumpState> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
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

- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (id)initWithCoder:(id)a0;
- (void)_sendNotification:(id)a0;
- (id)dumpState;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_registerNotificationHandlers;
- (id)initWithBulletinBoardNotification:(id)a0;
- (void)_updateAssociatedServicesTable:(id)a0;
- (BOOL)_isSupportedAssociationService:(id)a0;
- (id)_accessoriesInRoom:(id)a0 ofHome:(id)a1;
- (id)_cameraNotificationGeneratingServicesForAccessory:(id)a0;
- (id)_cameraProfileWithID:(id)a0;
- (void)_configureServices;
- (void)_handleBulletinBoardNotificationServiceGroupRequest:(id)a0;
- (BOOL)_isAlarmService:(id)a0;
- (BOOL)_isDefaultRoom:(id)a0 ofHome:(id)a1;
- (BOOL)_isNotificationGeneratingService:(id)a0;
- (id)_prepareServiceGroupPayload;
- (void)_updateAssociatedServices:(id)a0 associatedCameras:(id)a1;
- (id)actionContextForCameraProfileID:(id)a0;
- (void)configureBulletinNotification;
- (void)configureWithWorkQueue:(id)a0 messageDispatcher:(id)a1;
- (void)setAssociatedServicesTable:(id)a0;
- (void)setCameraProfilesTable:(id)a0;

@end
