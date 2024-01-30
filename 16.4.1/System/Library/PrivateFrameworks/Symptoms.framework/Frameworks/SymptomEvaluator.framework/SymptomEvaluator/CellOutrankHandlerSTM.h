@class CellOutrankHandlerState, NSArray, NSPredicate, COSMStateSummary, NSObject, NSMutableDictionary;
@protocol OS_dispatch_source;

@interface CellOutrankHandlerSTM : ExpertSystemHandlerCore {
    unsigned int _administrativeState;
    CellOutrankHandlerState *_currentState;
    NSArray *_states;
    NSObject<OS_dispatch_source> *maintenanceTimer;
    COSMStateSummary *_lastStateSummaryCausingChange;
    double _lastStateSummaryCausingChangeTimestamp;
    COSMStateSummary *_lastStateSummaryProcessed;
    double _lastStateSummaryTimestamp;
    COSMStateSummary *_prevStateSummaryProcessed;
    double _prevStateSummaryTimestamp;
    BOOL _inDampeningPeriod;
    BOOL _inRegretAvoidanceOutrank;
    BOOL _inCellPrivateNetworkActiveOutrank;
    NSMutableDictionary *_predicatesByKey;
    NSMutableDictionary *_defaultPredicatesByKey;
}

@property (nonatomic) BOOL systemForeground;
@property (nonatomic) unsigned int activationIdentifier;
@property (readonly, nonatomic) NSPredicate *armedEligiblePred;
@property (readonly, nonatomic) NSPredicate *captivityFrictionEligiblePred;
@property (readonly, nonatomic) NSPredicate *cellEligiblePred;
@property (readonly, nonatomic) NSPredicate *cellStatusOutrankExitEligiblePred;
@property (readonly, nonatomic) NSPredicate *deviceEligiblePred;
@property (readonly, nonatomic) NSPredicate *forcedOutrankEligiblePred;
@property (readonly, nonatomic) NSPredicate *userInitiatedFrictionEligiblePred;
@property (readonly, nonatomic) NSPredicate *wifiAmbientFrictionEligiblePred;
@property (readonly, nonatomic) NSPredicate *wifiEligiblePred;

- (id)getState:(BOOL)a0;
- (void)restoreDefaults;
- (id)internalStateDictionary;
- (void)_bringStateToIdle;
- (id)_currentState;
- (void)completeInitialization;
- (BOOL)idleExitAction:(id)a0;
- (BOOL)idleEntryAction:(id)a0;
- (void)dealloc;
- (void)_postUpwards:(unsigned long long)a0;
- (void)setConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)_states;
- (id)initWithQueue:(id)a0;
- (void)administrativeDisable;
- (void)administrativeEnable;
- (BOOL)armedEntryAction:(id)a0;
- (BOOL)armedExitAction:(id)a0;
- (id)armedToOutrankRegretAvoidancePred;
- (unsigned long long)currentQualifier;
- (unsigned int)evaluateState:(id)a0;
- (BOOL)outrankEntryAction:(id)a0;
- (BOOL)outrankExitAction:(id)a0;
- (void)populateDefaultPredicates;
- (void)valdateExitState:(id)a0 originally:(id)a1;

@end
