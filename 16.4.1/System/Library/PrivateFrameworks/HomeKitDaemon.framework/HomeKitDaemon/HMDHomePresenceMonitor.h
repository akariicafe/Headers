@class HMDHomePresenceUpdate, NSString, NSDictionary, NSMutableDictionary, HMDHomePresence;

@interface HMDHomePresenceMonitor : HMDHomePresenceBase <HMFLogging, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_presenceMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *timerID;
@property (readonly, copy, nonatomic) NSDictionary *presenceMap;
@property (retain, nonatomic) HMDHomePresence *currentHomePresence;
@property (retain, nonatomic) HMDHomePresenceUpdate *homePresenceUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)removeUser:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_registerForMessages;
- (void)_addUser:(id)a0;
- (void)_auditPresenceMap;
- (void)_evaluatePresence:(id)a0 newUserPresence:(id)a1 presenceStatusUpdateReason:(id)a2;
- (void)_preparePresenceMap;
- (void)_reEvaluatePresenceWithReason:(id)a0;
- (void)_removeNonExistingUsers;
- (void)_startAuditTimer;
- (void)_updateUserPresence:(id)a0 presenceAuth:(id)a1 completion:(id /* block */)a2;
- (void)addNewUser:(id)a0;
- (void)configure:(id)a0 messageDispatcher:(id)a1;
- (void)handleTimerFiredNotification:(id)a0;
- (void)handleUserHomePresencePayload:(id)a0 device:(id)a1 user:(id)a2 completion:(id /* block */)a3;
- (void)handleUserPresenceUpdate:(id)a0;
- (void)handleUserPresenceUpdateNotification:(id)a0;
- (void)_handlePrimaryResidentChangedNotification:(id)a0;
- (void)_handlePrivilegeUpdate:(id)a0;
- (void)_populatePresenceMapFromWorkingStore;
- (void)_saveUserPresenceToWorkingStore:(id)a0 forUser:(id)a1;

@end
