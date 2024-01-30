@class NSObject, ICDelegationConsumerService;
@protocol OS_dispatch_queue;

@interface ICUserCredentialProvider : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    long long _delegationDiscoveryCount;
    ICDelegationConsumerService *_delegationConsumerService;
}

@property (class, readonly) ICUserCredentialProvider *sharedProvider;

- (void)performCredentialRequests:(id)a0 withResponseHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_handleDelegationAccountUUIDsForSession:(id)a0;
- (void)_handleIdentityProperties:(id)a0 forIdentity:(id)a1 loadingError:(id)a2 credentialRequest:(id)a3 session:(id)a4;
- (void)_handleCredentialRequestIdentityPropertiesForSession:(id)a0;
- (void)_handleRequestIndependentPropertiesForSession:(id)a0;
- (void)performCredentialRequest:(id)a0 withResponseHandler:(id /* block */)a1;
- (void)_handlePendingDelegationRequestsForSession:(id)a0;

@end
