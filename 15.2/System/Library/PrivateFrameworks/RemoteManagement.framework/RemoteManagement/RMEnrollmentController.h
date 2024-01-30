@class NSURL, NSMutableDictionary;

@interface RMEnrollmentController : NSObject {
    NSMutableDictionary *_connectionByServiceName;
}

@property (class, readonly) NSURL *userDefaultsEnrollmentURL;

@property (nonatomic, getter=isSynchronous) BOOL synchronous;
@property (readonly, nonatomic) long long channelType;

+ (id)synchronousEnrollmentController;
+ (id)synchronousEnrollmentControllerForManagementChannelType:(long long)a0;

- (id)_daemonProxyWithErrorHandler:(id /* block */)a0;
- (id)_agentConnection;
- (id)_daemonConnection;
- (void).cxx_destruct;
- (id)init;
- (id)initWithChannelType:(long long)a0;
- (id)_channelTypeProxyWithErrorHandler:(id /* block */)a0;
- (void)enrollDeviceChannelWithURI:(id)a0 completionHandler:(id /* block */)a1;
- (void)enrollUserChannelWithAccountIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)deviceChannelEnrollmentExistsWithCompletionHandler:(id /* block */)a0;
- (void)syncWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateWithIdentifier:(id)a0 pushMessage:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateWithIdentifier:(id)a0 tokensResponse:(id)a1 completionHandler:(id /* block */)a2;
- (void)managementChannelWithAccountIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)managementChannelWithEnrollmentURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)_agentProxyWithErrorHandler:(id /* block */)a0;
- (void)_discoverEnrollmentURLForDomain:(id)a0 port:(id)a1 completionHandler:(id /* block */)a2;
- (void)_enrollmentURLFromWellKnownURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)unenrollDeviceChannelWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)unenrollUserChannelWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)discoverEnrollmentURLForUserIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
