@protocol TSKSelectionDispatchReceiver;

@interface TSKSelectionDispatcher : NSObject

@property (weak, nonatomic) id<TSKSelectionDispatchReceiver> selectionDispatchReceiver;

- (void).cxx_destruct;
- (void)dispatchSelectionPath:(id)a0 withFlags:(unsigned long long)a1;
- (id)newRootSelectionTransformerForSelectionPath:(id)a0;
- (void)beginTransformingCurrentSelectionPaths;
- (void)transformCurrentSelectionPathsUsingOperationTransformer:(id)a0;
- (void)endTransformingCurrentSelectionPaths;

@end
