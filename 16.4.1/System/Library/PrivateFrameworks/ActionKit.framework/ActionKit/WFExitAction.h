@interface WFExitAction : WFAction

- (BOOL)legacyBehaviorIgnoresOutputFromAction:(id)a0 inWorkflow:(id)a1;
- (void)runWithInput:(id)a0 error:(id *)a1;

@end
