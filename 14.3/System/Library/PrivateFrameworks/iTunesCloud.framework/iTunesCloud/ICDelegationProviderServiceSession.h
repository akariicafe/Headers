@class NSString, NSArray, ICRequestContext, ICUserIdentityStore, ICDelegationServiceConnection, NSMutableDictionary, NSObject, ICDelegationProviderServiceProtocolHandler, ICDelegationProviderNetService;
@protocol ICDelegationProviderServiceSessionDelegate, OS_dispatch_queue;

@interface ICDelegationProviderServiceSession : NSObject <ICDelegationServiceConnectionDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    ICDelegationServiceConnection *_connection;
    id<ICDelegationProviderServiceSessionDelegate> _delegate;
    ICDelegationProviderServiceProtocolHandler *_protocolHandler;
    NSMutableDictionary *_sessionIDToStreamContext;
    long long _state;
}

@property (weak, nonatomic) id<ICDelegationProviderServiceSessionDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *delegationAccountUUIDs;
@property (readonly, nonatomic) ICDelegationProviderNetService *netService;
@property (readonly, copy, nonatomic) ICRequestContext *requestContext;
@property (readonly, copy, nonatomic) NSArray *userIdentities;
@property (readonly, nonatomic) ICUserIdentityStore *userIdentityStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)delegationServiceConnectionDidClose:(id)a0;
- (void)delegationServiceConnection:(id)a0 didEncouterError:(id)a1;
- (void).cxx_destruct;
- (void)_finishWithError:(id)a0;
- (void)stop;
- (void)_startDelegation;
- (void)_handleStartDelegationResponse:(id)a0;
- (void)start;
- (id)initWithUserIdentities:(id)a0 userIdentityStore:(id)a1 requestContext:(id)a2 netService:(id)a3 delegationAccountUUIDs:(id)a4;

@end
