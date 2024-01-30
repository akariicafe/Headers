@class NSUUID, NSString, NSSet, NSMutableDictionary, HMFMessageDispatcher, NSMutableArray, NSObject, HMDHome;
@protocol OS_dispatch_queue;

@interface HMDZone : HMFObject <HMDHomeMessageReceiver, HMFDumpState, NSSecureCoding, HMDBackingStoreObjectProtocol>

@property (class, readonly) BOOL hasMessageReceiverChildren;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSMutableDictionary *currentRooms;
@property (retain, nonatomic) NSMutableArray *roomUUIDs;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)urlString;
- (id)rooms;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)dumpState;
- (void)_registerForMessages;
- (id)roomWithUUID:(id)a0;
- (id)roomWithName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)removeRoom:(id)a0;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (id)modelObjectWithChangeType:(unsigned long long)a0;
- (id)backingStoreObjects:(long long)a0;
- (void)configure:(id)a0 queue:(id)a1;
- (void)_handleRename:(id)a0;
- (void)_handleAddRoom:(id)a0;
- (void)_handleRemoveRoom:(id)a0;
- (id)initWithName:(id)a0 uuid:(id)a1 home:(id)a2 queue:(id)a3;
- (id)updateZoneWithModel:(id)a0 message:(id)a1;
- (id)assistantObject;
- (id)_handleSetRoomsZoneTransaction:(id)a0 error:(id *)a1;
- (id)_checkForAddValidity:(id)a0 room:(id *)a1;
- (id)_handleRenameZoneTransaction:(id)a0 error:(id *)a1;

@end
