@class NSUUID, NSString, HMDSnapshotFile, HMDNotificationRegistration, HMFMessageDispatcher, NSDictionary, NSMutableArray, NSObject, NSMapTable, HMDAccessory;
@protocol OS_dispatch_queue;

@interface HMDSnapshotSlotManager : HMFObject <HMFLogging>

@property (retain) HMDSnapshotFile *mostRecentSnapshot;
@property (readonly, nonatomic) NSMapTable *snapshotSlots;
@property (readonly, weak, nonatomic) HMDAccessory *accessory;
@property (readonly, nonatomic) NSString *logID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly, nonatomic) NSString *imageCacheDirectory;
@property (readonly, nonatomic) NSMutableArray *filesToCleanup;
@property (readonly, nonatomic) HMDNotificationRegistration *notificationRegistration;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy) NSDictionary *encodedMostRecentSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)registerForMessages;
- (void)_handleProcessStateChange:(id)a0;
- (id)logIdentifier;
- (void)handleProcessStateChange:(id)a0;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1 imageCacheDirectory:(id)a2 logID:(id)a3 uniqueIdentifier:(id)a4 msgDispatcher:(id)a5;
- (void)handleReleaseSnapshot:(id)a0;
- (id)createSlotForSnapshotFile:(id)a0 requestMessages:(id)a1 updateGenerationCounter:(BOOL)a2;
- (id)encodedMostRecentSnapshotForMessage:(id)a0;
- (void)backboardServicesRelaunched:(id)a0;
- (void)setupMostRecentSnapshot;
- (id)findMostRecentSnapshot;
- (void)_updateMostRecentSnapshot:(id)a0 updateGenerationCounter:(BOOL)a1;
- (BOOL)shouldUpdateMostRecentSnapshotWithSnapshot:(id)a0;

@end
