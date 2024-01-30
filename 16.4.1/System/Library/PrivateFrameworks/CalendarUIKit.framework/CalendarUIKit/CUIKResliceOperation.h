@interface CUIKResliceOperation : CUIKSaveOperation

- (BOOL)_executeWithUndoDelegate:(id)a0 error:(id *)a1;
- (Class)_inverseOperationClass;
- (id)_objectsForInverse;

@end
