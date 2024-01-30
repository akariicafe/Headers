@interface WFCoercionAction : WFAction

- (void)runAsynchronouslyWithInput:(id)a0;
- (id)outputContentClasses;
- (BOOL)shouldBeSuggestedAfterAction:(id)a0 inWorkflow:(id)a1;
- (Class)coercionItemClass;

@end
