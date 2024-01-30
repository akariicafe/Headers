@class NSUUID, NSString, NSSet, NSMutableDictionary, HMDEventTriggerExecutionSession, NSMutableArray, NSObject, HMPresenceEventActivation;
@protocol OS_dispatch_queue;

@interface HMDPresenceEvent : HMDEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver, HMDTriggerEventProtocol>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) BOOL hasMessageReceiverChildren;

@property (retain, nonatomic) NSString *presenceType;
@property (readonly, nonatomic) HMPresenceEventActivation *activation;
@property (readonly, nonatomic) NSMutableDictionary *users;
@property (readonly, nonatomic) NSMutableArray *userUUIDs;
@property (nonatomic) BOOL currentStatus;
@property (weak, nonatomic) HMDEventTriggerExecutionSession *executionSession;
@property (readonly, nonatomic) unsigned long long activationGranularity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)removeUser:(id)a0;
- (BOOL)isActive;
- (void)_registerForMessages;
- (void)encodeWithCoder:(id)a0;
- (id)emptyModelObject;
- (void)_transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)_transactionObjectRemoved:(id)a0 message:(id)a1;
- (BOOL)_activate:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)modelObjectWithChangeType:(unsigned long long)a0;
- (id)createPayload;
- (id)initWithModel:(id)a0 home:(id)a1;
- (void)_handleUpdateRequest:(id)a0;
- (id)analyticsTriggerEventData;
- (void)_addUser:(id)a0;
- (void)_updateUsers:(id)a0 payload:(id)a1 home:(id)a2;
- (void)configure:(id)a0 messageDispatcher:(id)a1 queue:(id)a2 delegate:(id)a3;
- (id)createClientPayload;
- (id)createDaemonPayload;
- (id)presenceTypeForClient;
- (void)_handleHomePresenceUpdate:(id)a0;
- (void)_evaluatePresenceEventForHomePresenceUpdate:(id)a0;
- (BOOL)evaluateWithHomePresenceUpdate:(id)a0;
- (BOOL)evaluateWithUserPresence:(id)a0;
- (BOOL)evaluateWithHomePresence:(id)a0;
- (id)thisUser;
- (void)_removeAllUsers;
- (void)_updatePresenceType:(id)a0 payload:(id)a1;
- (id)analyticsPresenceEventData;
- (void)didEndExecutionSession:(id)a0;
- (id)createPresenceEventPayload:(BOOL)a0;
- (BOOL)compatibleWithUser:(id)a0;

@end
