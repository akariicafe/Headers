@interface WFAccountAccessResourceUserInterface : WFEmbeddableActionUserInterface <WFAccountAccessResourceUserInterfaceProtocol>

- (void)authorizeWithAccountClassName:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithUserInterfaceType:(id)a0 attribution:(id)a1;

@end
