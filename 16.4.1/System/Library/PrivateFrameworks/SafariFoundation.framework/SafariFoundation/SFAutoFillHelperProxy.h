@class NSString, NSXPCConnection;

@interface SFAutoFillHelperProxy : NSObject <SFAutoFillHelperProtocol> {
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)getAutomaticStrongPasswordForAppWithPasswordRules:(id)a0 confirmPasswordRules:(id)a1 overrideApplicationIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)_getAutomaticStrongPasswordForAppWithPasswordRules:(id)a0 confirmPasswordRules:(id)a1 overrideApplicationIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)getAutomaticStrongPasswordForAppWithPasswordRules:(id)a0 confirmPasswordRules:(id)a1 completion:(id /* block */)a2;
- (void)getRemoteAutoFillAvailabilityWithCompletionHandler:(id /* block */)a0;

@end
