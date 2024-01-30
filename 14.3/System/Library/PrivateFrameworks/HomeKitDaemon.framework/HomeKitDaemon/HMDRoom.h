@class NSSet, NSString, HMFMessageDispatcher, NSUUID, HMDHome, NSObject, HMDApplicationData;
@protocol OS_dispatch_queue;

@interface HMDRoom : HMFObject <HMFLogging, HMDHomeMessageReceiver, HMFDumpState, NSSecureCoding, HMDBackingStoreObjectProtocol>

@property (class, readonly) BOOL hasMessageReceiverChildren;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *serializedIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (retain, nonatomic) HMDApplicationData *appData;
@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (weak, nonatomic) HMDHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)urlString;
- (void).cxx_destruct;
- (void)dealloc;
- (id)attributeDescriptions;
- (void)logEvent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)dumpState;
- (id)privateDescription;
- (void)_registerForMessages;
- (id)messageDestination;
- (id)logIdentifier;
- (void)encodeWithCoder:(id)a0;
- (void)_handleRenameRequest:(id)a0;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (id)backingStoreObjects:(long long)a0;
- (void)_handleRemoveAppDataModel:(id)a0 message:(id)a1;
- (void)_handleUpdateAppDataModel:(id)a0 message:(id)a1;
- (id)initWithName:(id)a0 uuid:(id)a1 home:(id)a2;
- (void)configure:(id)a0 queue:(id)a1;
- (id)assistantObject;
- (void)_logEventWithViewInformation:(id)a0 source:(unsigned long long)a1;
- (void)_handleUpdateRoomModel:(id)a0 message:(id)a1;

@end
