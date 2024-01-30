@interface WFDropboxAccessResource : WFAccountAccessResource

- (Class)accountClass;
- (id)initWithDefinition:(id)a0;
- (id)associatedAppIdentifier;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;

@end
