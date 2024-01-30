@class NSUUID, NSString, NSArray, NSSet, HMDEventTriggerExecutionSession, NSDictionary, NSObject, HMPresenceEventActivation;
@protocol OS_dispatch_queue;

@interface HMDPresenceEvent : HMDEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver, HMDTriggerEventProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) BOOL hasMessageReceiverChildren;

@property (retain) NSString *presenceType;
@property (copy) NSDictionary *users;
@property (copy) NSArray *userUUIDs;
@property BOOL currentStatus;
@property (weak) HMDEventTriggerExecutionSession *executionSession;
@property (readonly, nonatomic) HMPresenceEventActivation *activation;
@property (readonly, nonatomic) unsigned long long activationGranularity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isActive;
- (void).cxx_destruct;
- (void)_registerForMessages;
- (id)createPayload;
- (void)_removeAllUsers;
- (BOOL)_activate:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_addUser:(id)a0;
- (void)_evaluatePresenceEventForHomePresenceUpdate:(id)a0;
- (BOOL)_evaluateWithHomePresence:(id)a0 presenceType:(id)a1 users:(id)a2;
- (void)_handleHomePresenceUpdate:(id)a0;
- (void)_handleUpdateRequest:(id)a0;
- (id)_presenceTypeForClient;
- (void)_transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)_transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)_updateUsers:(id)a0 home:(id)a1;
- (id)analyticsPresenceEventData;
- (id)analyticsTriggerEventData;
- (BOOL)compatibleWithUser:(id)a0;
- (void)configure:(id)a0 messageDispatcher:(id)a1 queue:(id)a2 delegate:(id)a3;
- (id)createClientPayload;
- (id)createDaemonPayload;
- (id)createPresenceEventPayload:(BOOL)a0;
- (void)didEndExecutionSession:(id)a0;
- (id)emptyModelObject;
- (BOOL)evaluateWithHomePresence:(id)a0;
- (BOOL)evaluateWithHomePresenceUpdate:(id)a0 presenceType:(id)a1;
- (BOOL)evaluateWithUserPresence:(id)a0 presenceType:(id)a1;
- (void)handleRemovalOfUser:(id)a0 transaction:(id)a1;
- (id)initWithModel:(id)a0 home:(id)a1;
- (BOOL)isCompatibleWithEvent:(id)a0;
- (id)modelObjectWithChangeType:(unsigned long long)a0;
- (id)thisUser;

@end
