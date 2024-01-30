@interface WFInterchangeActionProvider : WFActionProvider

- (void)updateCache:(id /* block */)a0;
- (id)availableActionIdentifiers;
- (void)createActionsForRequests:(id)a0;
- (id)actionWithInterchangeAction:(id)a0 serializedParameters:(id)a1;
- (void)deleteCache;

@end
