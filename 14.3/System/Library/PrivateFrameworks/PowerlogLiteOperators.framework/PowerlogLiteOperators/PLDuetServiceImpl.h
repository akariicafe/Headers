@class PLXPCListenerOperatorComposition, PLService, PLXPCResponderOperatorComposition;

@interface PLDuetServiceImpl : NSObject

@property (weak) PLService *duetService;
@property (retain) PLXPCListenerOperatorComposition *eventListener;
@property (retain) PLXPCResponderOperatorComposition *energyResponder;

- (void).cxx_destruct;
- (void)stopService;
- (void)initOperatorDependancies:(id)a0;

@end
