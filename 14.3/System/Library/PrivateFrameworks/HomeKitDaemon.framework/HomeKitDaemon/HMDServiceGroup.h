@class HMDApplicationData, NSString, NSUUID, NSSet, NSMutableDictionary, HMFMessageDispatcher, NSMutableArray, NSObject, HMDHome;
@protocol OS_dispatch_queue;

@interface HMDServiceGroup : HMFObject <HMDHomeMessageReceiver, HMFDumpState, NSSecureCoding, HMDBackingStoreObjectProtocol>

@property (class, readonly) BOOL hasMessageReceiverChildren;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableArray *serviceUUIDs;
@property (retain, nonatomic) NSMutableDictionary *serviceMapping;
@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (retain, nonatomic) HMDApplicationData *appData;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)urlString;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeService:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dumpState;
- (void)_registerForMessages;
- (void)encodeWithCoder:(id)a0;
- (void)_handleRenameRequest:(id)a0;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (id)modelObjectWithChangeType:(unsigned long long)a0;
- (id)backingStoreObjects:(long long)a0;
- (void)_handleRemoveAppDataModel:(id)a0 message:(id)a1;
- (void)_handleUpdateAppDataModel:(id)a0 message:(id)a1;
- (void)configure:(id)a0 queue:(id)a1;
- (id)initWithName:(id)a0 uuid:(id)a1 home:(id)a2 queue:(id)a3;
- (void)fixupServicesForReplacementAccessory:(id)a0;
- (void)removeServicesForAccessory:(id)a0;
- (id)updateServiceGroupWithModel:(id)a0 message:(id)a1;
- (void)fixupServiceGroup;
- (id)assistantObject;
- (void)setServiceIfPresent:(id)a0;
- (id)_handleUpdateServicesTransaction:(id)a0 requestMessage:(id)a1;
- (void)_handleAddServiceRequest:(id)a0;
- (void)_handleRemoveServiceRequest:(id)a0;
- (void)_transactionServiceGroupUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)_handleUpdateNameTransaction:(id)a0 requestMessage:(id)a1;

@end
