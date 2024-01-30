@interface CUIKUnrevertOperation : CUIKRevertOperation

- (BOOL)_executeWithUndoDelegate:(id)a0 error:(id *)a1;
- (Class)_inverseOperationClass;

@end
