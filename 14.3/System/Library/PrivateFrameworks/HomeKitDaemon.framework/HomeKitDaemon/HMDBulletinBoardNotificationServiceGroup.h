@class NSHashTable, NSUUID, NSArray, NSString, NSSet, HMFMessageDispatcher, NSObject, HMDBulletinBoardNotification;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDBulletinBoardNotificationServiceGroup : HMFObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMFDumpState> {
    id<HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly, copy, nonatomic) NSHashTable *cameraProfilesTable;
@property (readonly, copy, nonatomic) NSHashTable *associatedServicesTable;
@property (retain, nonatomic) NSSet *cameraProfileUUIDs;
@property (retain, nonatomic) NSSet *associatedServiceUUIDs;
@property (readonly, weak, nonatomic) HMDBulletinBoardNotification *bulletinBoardNotification;
@property (retain, nonatomic) NSArray *associatedServices;
@property (retain, nonatomic) NSArray *cameraProfiles;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_sendNotification:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dumpState;
- (id)initWithBulletinBoardNotification:(id)a0;
- (void)_registerNotificationHandlers;
- (id)logIdentifier;
- (void)encodeWithCoder:(id)a0;
- (void)_handleBulletinBoardNotificationServiceGroupRequest:(id)a0;
- (id)_prepareServiceGroupPayload;
- (void)_configureServices;
- (BOOL)_isNotificationGeneratingService:(id)a0;
- (BOOL)_isDefaultRoom:(id)a0 ofHome:(id)a1;
- (id)_accessoriesInRoom:(id)a0 ofHome:(id)a1;
- (id)_cameraNotificationGeneratingServicesForAccessory:(id)a0;
- (BOOL)_isSupportedAssociationService:(id)a0;
- (BOOL)_isAlarmService:(id)a0;
- (void)_updateAssociatedServices:(id)a0 associatedCameras:(id)a1;
- (void)_updateAssociatedServicesTable:(id)a0;
- (void)setCameraProfilesTable:(id)a0;
- (void)setAssociatedServicesTable:(id)a0;
- (id)_cameraProfileWithID:(id)a0;
- (void)configureMsgDispatcher:(id)a0;
- (void)configureBulletinNotification;
- (id)actionContextForCameraProfileID:(id)a0;

@end
