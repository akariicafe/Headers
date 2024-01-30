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

- (void)removeTokenForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (void)setToken:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)setIdentityProperties:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)openWithCompletionHandler:(id /* block */)a0;
- (void)removeDelegationUUIDs:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeAllTokensWithCompletionHandler:(id /* block */)a0;
- (void)addDelegationUUIDs:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeIdentityPropertiesForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeTokensExpiringBeforeDate:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)recreateWithCompletionHandler:(id /* block */)a0;
- (void)invalidate;
- (void)dealloc;
- (void)delegateAccountStoreDidChange;
- (id)initWithAccountStoreOptions:(id)a0;
- (id)_onceWithCompletionHandler:(id /* block */)a0;
- (void)_getXPCConnectionWithCompletion:(id /* block */)a0;

@end
