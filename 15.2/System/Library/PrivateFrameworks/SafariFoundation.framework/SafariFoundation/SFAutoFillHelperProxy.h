@class NSString, NSXPCConnection;

@interface SFAutoFillHelperProxy : NSObject <SFAutoFillHelperProtocol> {
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)getAutomaticStrongPasswordForAppWithPasswordRules:(id)a0 confirmPasswordRules:(id)a1 completion:(id /* block */)a2;
- (void)getRemoteAutoFillAvailabilityWithCompletionHandler:(id /* block */)a0;

@end
