@class NSXPCConnection, NSString, ICRequestContext, ICUserIdentityStore, NSNetServiceBrowser, NSOperationQueue, NSMutableDictionary, NSMutableSet, NSObject, NSXPCListener, NSMapTable;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICDelegationProviderService : NSObject <ICSDelegationProviderServiceXPC, ICDelegationProviderServiceSessionDelegate, NSNetServiceBrowserDelegate, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMapTable *_activeServiceSessions;
    NSMutableSet *_connections;
    NSMapTable *_connectionToAssertions;
    NSMutableSet *_assertions;
    NSObject<OS_dispatch_source> *_assertionTimeoutSource;
    NSMutableSet *_discoveredServices;
    ICUserIdentityStore *_identityStore;
    BOOL _isNetServiceBrowserSearching;
    BOOL _isSystemService;
    NSXPCListener *_listener;
    NSNetServiceBrowser *_netServiceBrowser;
    NSObject<OS_dispatch_queue> *_netServiceBrowserQueue;
    NSOperationQueue *_identityStoreOperationQueue;
    NSMutableDictionary *_supportedDelegationAccountUUIDToUserIdentity;
    NSXPCConnection *_xpcConnection;
}

@property (class, readonly, nonatomic) ICDelegationProviderService *sharedService;

@property (readonly, copy, nonatomic) ICRequestContext *requestContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)systemServiceWithRequestContext:(id)a0;

- (void)_removeConnection:(id)a0;
- (void)_registerNotificationsForDelegationNetService:(id)a0;
- (void)_addConnection:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)removeAssertion:(id)a0;
- (id)_xpcConnection;
- (void)_userIdentityStoreDidChangeNotification:(id)a0;
- (id)_init;
- (void)_updateDelegationForDiscoveredServices;
- (void)startSystemXPCService;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (void)delegationProviderServiceRemoveAssertion:(id)a0;
- (void)dealloc;
- (void)_updateBrowsingStatus;
- (void)_netServiceDelegationAccountUUIDsDidChangeNotification:(id)a0;
- (void)_updateSupportedDelegationAccountUUIDs;
- (void)addAssertion:(id)a0;
- (void)delegationProviderServiceAddAssertion:(id)a0;
- (void)delegationProviderServiceSession:(id)a0 didFinishWithError:(id)a1;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void).cxx_destruct;
- (void)_updateAssertionTimeouts;
- (void)_unregisterNotificationsForDelegationNetService:(id)a0;

@end
