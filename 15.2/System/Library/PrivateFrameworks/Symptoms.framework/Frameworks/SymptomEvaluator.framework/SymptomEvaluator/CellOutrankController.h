@class NSString, NWNetworkAgentRegistration, NSSet, NSMutableDictionary, NEPolicySession, NEPathControllerNetworkAgent, NSObject, FlowBasedIconAdviser;
@protocol OS_dispatch_queue;

@interface CellOutrankController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id _foregroundAppObserver;
    NSMutableDictionary *_activeApps;
    NSMutableDictionary *_activeFallbackClients;
    NEPathControllerNetworkAgent *_neAgent;
    NWNetworkAgentRegistration *_neAgentRegistration;
    NEPolicySession *_nePolicySession;
    int _nePolicyCount;
    unsigned int _nePolicyOrderSeqno;
    int _outrankEffectiveToken;
    BOOL _cellIconSettingDampening;
    NSSet *_cellIconAlwaysSetApps;
    FlowBasedIconAdviser *_flowBasedIconAdviser;
    NSString *_cellInterfaceName;
    BOOL _cellOutranksWiFi;
    BOOL _cellOutrankEffective;
    BOOL _cellOutrankIcon;
    BOOL _graceTimerRunning;
    BOOL _evictionTimerRunning;
    double _cellIconChangeTime;
    double _cellOutrankChangeTime;
    double _cellIconAccumulatedDuration;
    double _cellOutrankAccumulatedDuration;
    double _cellOutrankFGExploitDuration;
    double _cellOutrankFGNonExploitDuration;
    double _cellCurrentUsageTimerStartTime;
    unsigned int _cellOutrankIconSetEvents;
    int _numAppsExploitingOutrank;
    int _numAppsNonExploitingOutrank;
    unsigned int _currentUsage;
    double _activeAppsCacheRetainPeriod;
    double _activeAppsCacheGracePeriod;
    double _cellIconOnDebounceInterval;
    double _cellIconOffDebounceInterval;
    double _outrankFlowMontiorMinSamplePeriod;
    double _outrankFlowMontiorSamplePeriodThroughputThreshold;
}

@property (nonatomic) BOOL cellOutrankEffective;
@property (nonatomic) unsigned int currentUsage;
@property (readonly, nonatomic) int neAgentInstanceNumber;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *cellInterfaceName;
@property (nonatomic) BOOL cellOutranksWiFi;
@property (readonly, nonatomic) BOOL cellOutrankIcon;
@property (readonly, nonatomic) double cellOutrankPossibleDuration;
@property (readonly, nonatomic) double cellOutrankIconSetDuration;
@property (readonly, nonatomic) double cellOutrankFGExploitDuration;
@property (readonly, nonatomic) double cellOutrankFGNonExploitDuration;
@property (readonly, nonatomic) unsigned int cellOutrankIconSetEvents;
@property (readonly, nonatomic) int numForegroundAppsExploitingOutrank;
@property (readonly, nonatomic) int numForegroundAppsNonExploitingOutrank;

+ (id)sharedInstance;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)removeAllPolicies;
- (void)reportABCCase:(id)a0;
- (void)cleanupNEPolicy;
- (void)assessIconState;
- (void)assertFallbackForClient:(id)a0 process:(id)a1;
- (void)ensureMaintenanceTimer;
- (void)setConfiguration:(id)a0;
- (void)deleteAssertionTracker:(id)a0;
- (void)unassertFallbackForClient:(id)a0;
- (void)checkInvariants:(id)a0;
- (void)restoreDefaults;
- (void).cxx_destruct;
- (void)_foregroundAppActivity:(id)a0 uuid:(id)a1 isForeground:(BOOL)a2;
- (id)init;
- (void)deleteAllAssertionTrackers;
- (BOOL)updatePolicy;
- (id)getState:(BOOL)a0;
- (void)didSampleFlows;
- (BOOL)applyPolicyDelta;
- (void)_updateExploitNumbers;

@end
