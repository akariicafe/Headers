@class NSURL, NSMutableDictionary;

@interface RMEnrollmentController : NSObject {
    NSMutableDictionary *_connectionByServiceName;
}

@property (class, readonly) NSURL *userDefaultsEnrollmentURL;

@property (nonatomic, getter=isSynchronous) BOOL synchronous;

+ (id)synchronousEnrollmentController;

- (id)_daemonConnection;
- (id)_agentConnection;
- (id)init;
- (void).cxx_destruct;
- (id)_daemonProxyWithErrorHandler:(id /* block */)a0;
- (void)enrollDeviceChannelWithURI:(id)a0 completionHandler:(id /* block */)a1;
- (void)deviceChannelEnrollmentExistsWithCompletionHandler:(id /* block */)a0;
- (id)_agentProxyWithErrorHandler:(id /* block */)a0;
- (void)managementChannelWithAccountIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)_webAuthenticationURL:(id)a0 withUserIdentifierQuery:(id)a1;
- (void)_discoverWebAuthenticationURLForDomain:(id)a0 port:(id)a1 completionHandler:(id /* block */)a2;
- (void)_webAuthenticationURLFromWellKnownURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)enrollUserChannelWithURI:(id)a0 authenticationCredential:(id)a1 withDataSeparation:(BOOL)a2 passcodeData:(id)a3 completionHandler:(id /* block */)a4;
- (void)discoverWebAuthenticationURLForUserIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
