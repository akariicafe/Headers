@class PLXPCListenerOperatorComposition, PLXPCResponderOperatorComposition;

@interface PPTCollectionOperator : PLOperator

@property (retain) PLXPCListenerOperatorComposition *metricListener;
@property (retain) PLXPCResponderOperatorComposition *allowlistResponder;

- (void).cxx_destruct;
- (id)init;
- (void)startCollection;
- (void)initOperatorDependancies;

@end
