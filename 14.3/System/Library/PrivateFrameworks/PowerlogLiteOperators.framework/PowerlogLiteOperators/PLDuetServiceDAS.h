@class PLXPCListenerOperatorComposition, PLService;

@interface PLDuetServiceDAS : NSObject

@property (weak) PLService *duetService;
@property (retain) PLXPCListenerOperatorComposition *dasActivityEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasInfoEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasPredictionEventListener;

+ (id)entryEventNoneDefinitionsDASActivity;
+ (id)entryEventNoneDefinitionsDASActivityDropCount;
+ (id)entryEventNoneDefinitionsDASInfo;
+ (id)entryEventForwardDefinitionsDASPrediction;
+ (id)entryEventForwardDefinitionsDASApplicationPrediction;

- (id)init;
- (void).cxx_destruct;
- (void)stopService;
- (void)didReceiveDASActivityEventWithPayload:(id)a0;
- (void)didReceiveDASInfoEventWithPayload:(id)a0;
- (void)didReceiveDASPredictionEventWithPayload:(id)a0;
- (void)initOperatorDependanciesDAS:(id)a0;

@end
