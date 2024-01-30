@interface WFExitAction : WFAction

- (void)runWithInput:(id)a0 error:(id *)a1;
- (BOOL)legacyBehaviorIgnoresOutputFromAction:(id)a0 inWorkflow:(id)a1;

@end
