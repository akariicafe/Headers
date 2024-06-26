@class NSMutableDictionary, NoBackhaulHandlerState, AWDAgent, AnalyticsWorkspace, NSObject, ImpoExpoService, CellFallbackHandler, NSMutableArray, PowerStateRelay, CARAutomaticDNDStatus, NSString, NSArray, NetworkAnalyticsStateRelay;
@protocol OS_dispatch_source;

@interface NoBackhaulHandler : ExpertSystemHandlerCore <ICMPPingProbeDelegate, ManagedEventInfoProtocol> {
    unsigned int _administrativeState;
    NSMutableArray *_pendingEventDescriptions;
    NoBackhaulHandlerState *_currentState;
    NSArray *_states;
    NetworkAnalyticsStateRelay *_cellRelay;
    NetworkAnalyticsStateRelay *_wifiRelay;
    CellFallbackHandler *_rnfRelay;
    PowerStateRelay *_powerRelay;
    NSMutableArray *_tcpProgressProbes;
    NSString *_clearSSID;
    NSString *_obscuredSSID;
    NSMutableDictionary *_history;
    NSMutableDictionary *_multiplier;
    AnalyticsWorkspace *_workspace;
    ImpoExpoService *_ieService;
    NSObject<OS_dispatch_source> *maintenanceTimer;
    AWDAgent *_awdAgent;
    BOOL _observingSystemSettingsRelay;
    id _foregroundObserver;
    id _wifiEpochObserver;
    id _relayReadyObserver;
    unsigned long long networkBlacklistTime;
    unsigned long long defRoutePacketsIn;
    id _foregroundAppObserver;
    BOOL _verifyDefaultGateway;
    NSMutableDictionary *_activeICMPProbes;
    NSMutableDictionary *_icmpProbeStates;
    long long _pingCount;
    long long _pingSuccessCount;
    double _interPingInterval;
    long long _pingBurstCount;
    double _interBurstInterval;
    double _pingTimeout;
    CARAutomaticDNDStatus *_automaticDNDStatus;
    unsigned long long _cellUsageAtBrokenEntry;
    unsigned long long _totalCellUsageInBroken;
}

@property (nonatomic) BOOL systemForeground;
@property (nonatomic) BOOL callInForeground;
@property (nonatomic) BOOL dndWhileDriving;
@property (nonatomic) unsigned int activationIdentifier;
@property (nonatomic) unsigned long long stepper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)internalStateDictionary;
+ (long long)_nwInterfaceTypeFromAPSDQualifier:(unsigned long long)a0;
+ (id)configureClass:(id)a0;

- (BOOL)noteSymptom:(id)a0;
- (id)internalStateDictionary;
- (void)_completeInitialization;
- (void)_administrativeDisable;
- (void)_stopMaintenanceTimer;
- (void)generateInfoForId:(unsigned long long)a0 context:(const char *)a1 uuid:(id)a2 completionBlock:(id /* block */)a3;
- (void)icmpPingProbe:(id)a0 completedIterations:(unsigned long long)a1 successfulCount:(unsigned long long)a2 withError:(id)a3;
- (int)read:(id)a0 returnedValues:(id)a1;
- (void)_fetchDampeningHistory;
- (id)init;
- (void).cxx_destruct;
- (void)_setClearSSID:(id)a0;
- (int)configureInstance:(id)a0;
- (void)_administrativeEnable;
- (BOOL)subscribeCarKitNotifications;
- (void)apsdFailing:(BOOL)a0 onInterface:(long long)a1;
- (BOOL)_nudgeState;
- (void)_dumpState;
- (void)dealloc;
- (id)_currentState;
- (void)_bringStateToIdle;
- (BOOL)idleExitAction:(id)a0;
- (BOOL)idleEntryAction:(id)a0;
- (void)addPendingEventDescription:(id)a0;
- (BOOL)positiveEntryAction:(id)a0;
- (void)_updateSSID:(id)a0;
- (void)clientFeedback:(BOOL)a0;
- (BOOL)brokenExitAction:(id)a0;
- (BOOL)activeExitAction:(id)a0;
- (void)dampeningSetPrecedent;
- (void)reportAutoBugCaptureCaseWithDomain:(id)a0 type:(id)a1 subtype:(id)a2 subtypeContext:(id)a3 events:(id)a4;
- (BOOL)dampeningCheck;
- (void)_performConnectivityTestToDefaultGateways:(id)a0;
- (void)_startMaintenanceTimerFor:(id)a0 delay:(unsigned long long)a1 interval:(unsigned long long)a2 capWindowTo:(unsigned long long)a3;
- (id)initTestInstanceWithCellRelay:(id)a0 wifiRelay:(id)a1 rnfRelay:(id)a2 powerRelay:(id)a3;
- (BOOL)positiveExitAction:(id)a0;
- (void)changedSSIDto:(id)a0;
- (void)_idempotentInitializationFromIdleWithCellRelay:(id)a0 wifiRelay:(id)a1 rnfRelay:(id)a2 powerRelay:(id)a3;
- (void)drainPendingEventDescriptions;
- (void)_setObscuredSSID:(id)a0;
- (void)_assessProgressFromBaseline:(struct xtcpprogress_indicators { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; } *)a0 toMetrics:(struct xtcpprogress_indicators { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; } *)a1;
- (BOOL)activeEntryAction:(id)a0;
- (void)_idempotentInitializationFromIdle;
- (void)_captureProgressFor:(id)a0 since:(id)a1 interval:(unsigned long long)a2 capWindowTo:(unsigned long long)a3 iteration:(unsigned long long)a4 renewTest:(id /* block */)a5;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)resumedDefRouteProgress;
- (void)dampeningReset;
- (BOOL)processSymptom:(id)a0;
- (void)_postUpwards:(unsigned long long)a0;
- (id)_states;
- (BOOL)brokenEntryAction:(id)a0;

@end
