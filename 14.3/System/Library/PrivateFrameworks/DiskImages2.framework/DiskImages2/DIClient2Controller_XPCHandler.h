@interface DIClient2Controller_XPCHandler : DIBaseXPCHandler

- (id)serviceName;
- (id)remoteObjectInterface;
- (BOOL)connectWithLogsForwarding:(long long)a0 error:(id *)a1;
- (id)newAttachWithParams:(id)a0 error:(id *)a1;
- (BOOL)getPassphraseFromGUIWithOpObj:(id)a0 error:(id *)a1;
- (BOOL)getPassphraseFromKeychainWithOpObj:(id)a0 error:(id *)a1;

@end
