@interface WFSelectContactsAction : WFAction

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;
- (void)outputContacts:(id)a0 completionHandler:(id /* block */)a1;

@end
