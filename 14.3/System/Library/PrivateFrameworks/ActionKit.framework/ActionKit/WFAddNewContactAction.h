@interface WFAddNewContactAction : WFAction

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;
+ (void)contactFromParameters:(id)a0 completionHandler:(id /* block */)a1;

- (void)runAsynchronouslyWithInput:(id)a0;
- (void)runWithoutUI;

@end
