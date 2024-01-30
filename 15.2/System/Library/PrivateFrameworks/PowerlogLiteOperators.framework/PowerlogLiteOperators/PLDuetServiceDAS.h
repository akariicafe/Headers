@class PLXPCListenerOperatorComposition, PLService;

@interface PLDuetServiceDAS : NSObject

@property (weak) PLService *duetService;
@property (retain) PLXPCListenerOperatorComposition *dasActivityEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasInfoEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasPredictionEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasBudgetEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasDataBudgetEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasEnergyReportEventListener;

+ (id)entryEventNoneDefinitionsDASActivity;
+ (id)entryEventNoneDefinitionsDASActivityDropCount;
+ (id)entryEventNoneDefinitionsDASInfo;
+ (id)entryEventForwardDefinitionsDASPrediction;
+ (id)entryEventForwardDefinitionsDASApplicationPrediction;
+ (id)entryEventForwardDefinitionsDASEnergyBudgetAvailable;
+ (id)entryEventForwardDefinitionsDASDataBudgetAvailable;
+ (id)entryEventBackwardDefinitionsDASEnergyBudgetReport;

- (void)stopService;
- (void).cxx_destruct;
- (id)init;
- (void)didReceiveDASActivityEventWithPayload:(id)a0;
- (void)didReceiveDASInfoEventWithPayload:(id)a0;
- (void)didReceiveDASPredictionEventWithPayload:(id)a0;
- (void)didReceiveDASBudgetEventWithPayload:(id)a0;
- (void)didReceiveDASDataBudgetEventWithPayload:(id)a0;
- (void)didReceiveDASReportEventWithPayload:(id)a0;
- (void)initOperatorDependanciesDAS:(id)a0;

@end
