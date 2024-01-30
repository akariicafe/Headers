@class NSXPCConnection, NSString, AFMultiUserConnection, NSMutableDictionary, NSOperationQueue, NSObject, NSXPCListener, NSMutableSet;
@protocol OS_dispatch_queue;

@interface ICLibraryAuthServiceClientTokenProvider : NSObject <ICLibraryAuthServiceClientTokenProviderProtocol, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_tokenCache;
    BOOL _isService;
    NSXPCListener *_xpcServiceListener;
    NSMutableSet *_xpcConnections;
    NSXPCConnection *_xpcClientConnection;
    AFMultiUserConnection *_siriConnection;
}

@property (class, readonly, nonatomic) ICLibraryAuthServiceClientTokenProvider *sharedProvider;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_removeConnection:(id)a0;
- (void)stopService;
- (void)getTokenStatusForDSIDs:(id)a0 forcingRefresh:(BOOL)a1 completion:(id /* block */)a2;
- (void)_handleLibraryAuthServiceClientTokenDidChangeDistributedNotification:(id)a0;
- (void)_addConnection:(id)a0;
- (void)_updateTokenCacheEntryForDSID:(id)a0 tokenResult:(id)a1 error:(id)a2;
- (void)_commitCache;
- (BOOL)_updateEntriesForAccountsChanges;
- (void)getTokenResultsForDSIDs:(id)a0 forceRefresh:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_isPrivacyAcknowledgementRequired;
- (void)_refreshTokenForDSID:(id)a0 forExternalRequest:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)_shouldStopBackgroundRefreshForError:(id)a0;
- (void).cxx_destruct;
- (void)getAllTokensForAssistantForcingRefresh:(BOOL)a0 completion:(id /* block */)a1;
- (void)addTokenResult:(id)a0 forDSID:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (void)_updateRefreshTimer;
- (void)getTokenStatusForcingRefresh:(BOOL)a0 completion:(id /* block */)a1;
- (void)startService;
- (void)_loadCache;
- (void)getTokenForcingRefresh:(BOOL)a0 completion:(id /* block */)a1;
- (id)cachedTokenAndResetCache:(BOOL)a0;
- (void)getTokenForDSID:(id)a0 forceRefresh:(BOOL)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)_refreshTokensForDSIDs:(id)a0 forExternalRequest:(BOOL)a1 completion:(id /* block */)a2;
- (void)getTokenResultForDSID:(id)a0 forceRefresh:(BOOL)a1 completion:(id /* block */)a2;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)a0;
- (id)_clientConnection;
- (void)getAllTokenStatusForAssistantForcingRefresh:(BOOL)a0 completion:(id /* block */)a1;

@end
