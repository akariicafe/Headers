@class HMDApplicationData, NSString, NSArray, NSUUID, NSSet, NSMutableDictionary, NSDictionary, HMFMessageDispatcher, NSObject, HMFUnfairLock, NSMutableArray, HMDHome;
@protocol OS_dispatch_queue;

@interface HMDServiceGroup : HMFObject <HMDHomeMessageReceiver, HMFDumpState, NSSecureCoding, HMDBackingStoreObjectProtocol> {
    HMFUnfairLock *_lock;
    NSMutableArray *_serviceUUIDs;
}

@property (class, readonly) BOOL hasMessageReceiverChildren;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *urlString;
@property (readonly, copy) NSDictionary *assistantObject;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableDictionary *serviceMapping;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (retain, nonatomic) HMDApplicationData *appData;
@property (readonly, copy) NSArray *serviceUUIDs;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, copy) NSUUID *spiClientIdentifier;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dumpState;
- (void)removeService:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)_registerForMessages;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)_handleRenameRequest:(id)a0;
- (id)modelObjectWithChangeType:(unsigned long long)a0;
- (id)backingStoreObjects:(long long)a0;
- (void)_handleUpdateAppDataModel:(id)a0 message:(id)a1;
- (void)_handleRemoveAppDataModel:(id)a0 message:(id)a1;
- (void)fixupServiceGroup;
- (id)updateServiceGroupWithModel:(id)a0 message:(id)a1;
- (void)configure:(id)a0 queue:(id)a1;
- (id)initWithName:(id)a0 uuid:(id)a1 home:(id)a2 queue:(id)a3;
- (void)removeServicesForAccessory:(id)a0;
- (void)fixupServicesForReplacementAccessory:(id)a0;
- (void)setServiceIfPresent:(id)a0;
- (void)_handleAddServiceRequest:(id)a0;
- (void)_handleRemoveServiceRequest:(id)a0;
- (void)_transactionServiceGroupUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)_handleUpdateServicesTransaction:(id)a0;

@end
