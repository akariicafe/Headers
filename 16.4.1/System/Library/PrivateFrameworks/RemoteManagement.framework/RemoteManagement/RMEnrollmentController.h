@class NSURL, NSMutableDictionary;

@interface RMEnrollmentController : NSObject {
    NSMutableDictionary *_connectionByServiceName;
}

@property (class, readonly) NSURL *userDefaultsEnrollmentURL;

@property (nonatomic, getter=isSynchronous) BOOL synchronous;
@property (readonly, nonatomic) long long enrollmentType;
@property (readonly, nonatomic) long long scope;

+ (id)synchronousEnrollmentControllerForManagementEnrollmentType:(long long)a0 scope:(long long)a1;

- (id)_daemonConnection;
- (id)_daemonProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_agentConnection;
- (id)_agentProxyWithErrorHandler:(id /* block */)a0;
- (void)_discoverEnrollmentURLForDomain:(id)a0 port:(id)a1 completionHandler:(id /* block */)a2;
- (void)_enrollmentURLFromWellKnownURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)_scopedProxyWithErrorHandler:(id /* block */)a0;
- (void)_unenrollIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)deviceChannelEnrollmentExistsWithCompletionHandler:(id /* block */)a0;
- (void)discoverEnrollmentURLForUserIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)enrollDeviceChannelWithURI:(id)a0 completionHandler:(id /* block */)a1;
- (void)enrollUserChannelWithAccountIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)enrollViaMDMWithEnrollmentType:(long long)a0 uri:(id)a1 accountIdentifier:(id)a2 personaIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithEnrollmentType:(long long)a0 scope:(long long)a1;
- (void)managementChannelWithAccountIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)managementChannelWithEnrollmentURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)syncWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)unenrollDeviceChannelWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)unenrollUserChannelWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)unenrollViaMDMWithEnrollmentType:(long long)a0 identifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateWithIdentifier:(id)a0 pushMessage:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateWithIdentifier:(id)a0 tokensResponse:(id)a1 completionHandler:(id /* block */)a2;

@end
