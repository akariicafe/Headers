@interface WFShareAction : WFAction

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)usesExtensionItems;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1 isContentManaged:(BOOL)a2;

@end
