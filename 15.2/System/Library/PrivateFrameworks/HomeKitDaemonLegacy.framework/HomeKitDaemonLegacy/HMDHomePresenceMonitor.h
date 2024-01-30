@class HMDHomePresenceUpdate, NSString, NSDictionary, NSMutableDictionary, HMDHomePresence, HMDBackgroundTaskAgentTimer;
@protocol HMFLocking;

@interface HMDHomePresenceMonitor : HMDHomePresenceBase <HMFLogging, NSSecureCoding> {
    id<HMFLocking> _lock;
    NSMutableDictionary *_presenceMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *presenceMap;
@property (retain, nonatomic) HMDHomePresence *currentHomePresence;
@property (retain, nonatomic) HMDHomePresenceUpdate *homePresenceUpdate;
@property (readonly, nonatomic) HMDBackgroundTaskAgentTimer *btaAuditTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (void)removeUser:(id)a0;
- (void)timerFired:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)_registerForMessages;
- (void)residentChanged;
- (void)addNewUser:(id)a0;
- (void)configure:(id)a0 messageDispatcher:(id)a1;
- (void)registerQueriableAwdMetrics;
- (void)_submitHomePresenceMetric;
- (void)handleHomeDataLoadedNotification:(id)a0;
- (void)_auditPresenceMap;
- (void)_startAuditTimer;
- (void)_preparePresenceMap;
- (void)_removeNonExistingUsers;
- (void)_addUser:(id)a0;
- (void)handleUserPresenceUpdate:(id)a0;
- (void)handleUserPresenceUpdateNotification:(id)a0;
- (void)handleUserHomePresencePayload:(id)a0 device:(id)a1 remoteUserPairingIdentity:(id)a2 completion:(id /* block */)a3;
- (void)_updateUserPresence:(id)a0 presenceAuth:(id)a1 completion:(id /* block */)a2;
- (void)_evaluatePresence:(id)a0 newUserPresence:(id)a1 presenceStatusUpdateReason:(id)a2;
- (void)_submitPresenceReportMetricWithPayload:(id)a0 error:(id)a1;

@end
