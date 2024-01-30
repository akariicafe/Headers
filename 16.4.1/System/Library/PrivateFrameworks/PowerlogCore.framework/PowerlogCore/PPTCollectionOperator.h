@class PLXPCListenerOperatorComposition, PLXPCResponderOperatorComposition;

@interface PPTCollectionOperator : PLOperator

@property (retain) PLXPCListenerOperatorComposition *metricListener;
@property (retain) PLXPCResponderOperatorComposition *allowlistResponder;

- (void)initOperatorDependancies;
- (void)startCollection;
- (id)init;
- (void).cxx_destruct;

@end
