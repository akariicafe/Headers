@interface WFConditionallyCompiledActionProvider : WFActionProvider

- (id)allActionDefinitionsByIdentifier;
- (id)actionDefinitionsWithIdentifiers:(id)a0;
- (id)availableActionIdentifiers;
- (void)createActionsForRequests:(id)a0;

@end
