@class PLXPCListenerOperatorComposition, PLService;

@interface PLDuetServiceDAS : NSObject

@property (weak) PLService *duetService;
@property (retain) PLXPCListenerOperatorComposition *dasActivityEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasActivityLifecycleEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasInfoEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasPredictionEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasBudgetEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasDataBudgetEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasEnergyReportEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasPoliciesBlockingCriteriaEventListener;

+ (id)entryEventBackwardDefinitionsDASEnergyBudgetReport;
+ (id)entryEventForwardDefinitionsDASApplicationPrediction;
+ (id)entryEventForwardDefinitionsDASDataBudgetAvailable;
+ (id)entryEventForwardDefinitionsDASEnergyBudgetAvailable;
+ (id)entryEventForwardDefinitionsDASPrediction;
+ (id)entryEventNoneDefinitionsDASActivity;
+ (id)entryEventNoneDefinitionsDASActivityDropCount;
+ (id)entryEventNoneDefinitionsDASActivityLifecycle;
+ (id)entryEventNoneDefinitionsDASInfo;
+ (id)entryEventNoneDefinitionsDASPoliciesBlockingCriteria;

- (id)init;
- (void).cxx_destruct;
- (void)stopService;
- (long long)fileProtectionTypeStringToEnum:(id)a0;
- (void)didReceiveDASActivityEventWithPayload:(id)a0;
- (void)didReceiveDASActivityLifecycleEventWithPayload:(id)a0;
- (void)didReceiveDASBudgetEventWithPayload:(id)a0;
- (void)didReceiveDASDataBudgetEventWithPayload:(id)a0;
- (void)didReceiveDASInfoEventWithPayload:(id)a0;
- (void)didReceiveDASPoliciesBlockingCriteriaEventWithPayload:(id)a0;
- (void)didReceiveDASPredictionEventWithPayload:(id)a0;
- (void)didReceiveDASReportEventWithPayload:(id)a0;
- (void)initOperatorDependanciesDAS:(id)a0;

@end
