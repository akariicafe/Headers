@interface _LSDRebuildClient : _LSDClient <_LSDRebuildServiceProtocol>

- (id)initWithXPCConnection:(id)a0;
- (void)noteMigratorRunningWithReply:(id /* block */)a0;
- (void)performRebuildRegistration:(id)a0 reply:(id /* block */)a1;

@end
