@class NSUUID, NSSet;

@interface CPActivitySessionManager : NSObject <CopresenceCore.CPApplicationObserverProtocol, CPSystemStateObserverObserver, CPAudioPolicyStateObserver, CPActivitySessionManager> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ groupUUID;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ featureFlags;
    void /* unknown type, empty encoding */ systemStateObserver;
    void /* unknown type, empty encoding */ audioRoutePolicyManager;
    void /* unknown type, empty encoding */ serverBag;
    void /* unknown type, empty encoding */ _activitySessions;
    void /* unknown type, empty encoding */ applicationController;
    void /* unknown type, empty encoding */ applicationLauncher;
    void /* unknown type, empty encoding */ _activitySessionCreation;
    void /* unknown type, empty encoding */ $__lazy_storage_$_protectedStorage;
    void /* unknown type, empty encoding */ topicsObserver;
    void /* unknown type, empty encoding */ _topicsObserverGenerator;
}

@property (class, nonatomic, readonly) BOOL supportsMultipleActivitySessions;

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSSet *activitySessions;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ handedOff;

- (void)audioPolicyManager:(id)a0 sharePlayAllowedStateChanged:(BOOL)a1;
- (void)applicationController:(id)a0 bundleIdentifierChanged:(id)a1;
- (void)systemStateObserver:(id)a0 sharePlayAllowedStateChanged:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)a0 groupUUID:(id)a1 activities:(id)a2 applicationController:(id)a3 delegate:(id)a4 queue:(id)a5 systemStateObserver:(id)a6;
- (id)createActivitySessionWithTuActivitySession:(id)a0;
- (void)leaveActivitySessionWithUUID:(id)a0;
- (void)presentSessionDismissalAlertForActivitySessionUUID:(id)a0 allowingCancellation:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)removeActivitySessionWithUUID:(id)a0 usingHandle:(id)a1;
- (void)updateActivitySessionWithUUID:(id)a0 activity:(id)a1;
- (void)refreshDataCryptors;
- (void)resetSessions;
- (void)resetNonScreenSharingSessions;
- (void)updateVirtualParticipantIdentifier:(unsigned long long)a0;

@end
