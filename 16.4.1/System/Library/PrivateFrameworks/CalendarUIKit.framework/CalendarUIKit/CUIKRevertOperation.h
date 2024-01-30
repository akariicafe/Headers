@class EKChangeTracker;

@interface CUIKRevertOperation : CUIKUserOperation

@property (retain) EKChangeTracker *originalChangeTracker;

+ (id)operationForContext:(id)a0;

- (void).cxx_destruct;
- (id)_actionName;
- (BOOL)_executeWithUndoDelegate:(id)a0 error:(id *)a1;
- (id)_inverseOperation;
- (Class)_inverseOperationClass;

@end
