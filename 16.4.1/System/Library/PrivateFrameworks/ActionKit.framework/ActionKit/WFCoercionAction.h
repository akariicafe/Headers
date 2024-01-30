@interface WFCoercionAction : WFAction

- (Class)coercionItemClass;
- (id)outputContentClasses;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)shouldBeSuggestedAfterAction:(id)a0 inWorkflow:(id)a1;

@end
