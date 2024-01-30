@class NSString, NSXPCConnection, ICDelegateAccountStoreOptions, NSObject;
@protocol OS_dispatch_queue;

@interface ICDelegateAccountStoreXPCWriter : NSObject <ICDelegateAccountStoreServiceClient, ICDelegateAccountStoreWriter> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICDelegateAccountStoreOptions *_accountStoreOptions;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSXPCConnection *_connection;
    BOOL _hasReceivedConnectionInvalidation;
}

@property (copy, nonatomic) id /* block */ externalChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addDelegationUUIDs:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)openWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_onceWithCompletionHandler:(id /* block */)a0;
- (void)_getXPCConnectionWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)delegateAccountStoreDidChange;
- (void)recreateWithCompletionHandler:(id /* block */)a0;
- (void)removeAllTokensWithCompletionHandler:(id /* block */)a0;
- (void)removeTokenForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeIdentityPropertiesForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeTokensExpiringBeforeDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)setIdentityProperties:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)setToken:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithAccountStoreOptions:(id)a0;
- (void)removeDelegationUUIDs:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)invalidate;

@end
