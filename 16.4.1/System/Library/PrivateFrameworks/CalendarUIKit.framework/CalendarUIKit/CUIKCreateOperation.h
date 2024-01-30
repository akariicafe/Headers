@class NSArray;

@interface CUIKCreateOperation : CUIKUserOperation

@property (retain, nonatomic) NSArray *precomputedInverseObjects;

- (void).cxx_destruct;
- (id)_actionName;
- (BOOL)_executeWithUndoDelegate:(id)a0 error:(id *)a1;
- (Class)_inverseOperationClass;
- (long long)_inverseOperationSpan;
- (id)_objectsForInverse;
- (void)_precomputeInverseObjects;

@end
