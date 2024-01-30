@class NSString, HMFMessageDispatcher, NSSet, NSUUID, HMDSymptomManager, NSObject, HMDAccessory;
@protocol OS_dispatch_queue;

@interface HMDAccessorySymptomHandler : HMFObject <HMDAccessorySymptomsDelegate, NSSecureCoding, HMFLogging, HMDHomeMessageReceiver>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) BOOL hasMessageReceiverChildren;

@property (readonly, nonatomic) HMDSymptomManager *symptomManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly, nonatomic) NSSet *symptoms;
@property (retain, nonatomic) NSSet *syncedSymptoms;
@property (retain, nonatomic) NSSet *localSymptoms;
@property (retain, nonatomic) NSUUID *sfDeviceIdentifier;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, weak, nonatomic) HMDAccessory *accessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)logIdentifier;
- (void)encodeWithCoder:(id)a0;
- (void)refreshCurrentDeviceSymptoms;
- (void)_refreshCurrentDeviceSymptoms;
- (void)configureWithWorkQueue:(id)a0 messageDispatcher:(id)a1;
- (id)initWithAccessory:(id)a0 syncedSymptoms:(id)a1 symptomManager:(id)a2;
- (void)handleCurrentDeviceSymptomsChangedNotification:(id)a0;
- (void)_registerMessages;
- (void)_handleFixErrorMessage:(id)a0;
- (void)_updateBackingStoreModelWithNewSyncedSymptoms:(id)a0;
- (id)_filteredAccessorySymptomsForSymptoms:(id)a0;
- (id)_filteredMediaSystemSymptomsForSymptoms:(id)a0;
- (void)_sendStatusUpdate;
- (void)_updateStateWithNewBroadcastedSymptoms:(id)a0;
- (void)_updateStateWithNewLocalSymptoms:(id)a0;
- (void)_updateStateWithNewSFDeviceIdentifier:(id)a0;
- (id)initWithAccessory:(id)a0 syncedSymptoms:(id)a1;
- (void)symptomManager:(id)a0 didChangeBroadcastedSymptoms:(id)a1;
- (void)symptomManager:(id)a0 didChangeLocalSymptoms:(id)a1;
- (void)symptomManager:(id)a0 didChangeSFDeviceIdentifier:(id)a1;
- (void)handleAccessoryDeviceUpdated;
- (void)handleNewSyncedSymptoms:(id)a0 message:(id)a1;

@end
