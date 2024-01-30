@class ACDAccountNotifier, ACDAuthenticationDialogManager, ACDAccessPluginManager, ACDDatabaseBackupActivity, ACRemoteDeviceProxy, NSString, NSMutableDictionary, ACDDataclassOwnersManager, ACDAuthenticationPluginManager, NSXPCListener, NSMutableArray, NSObject;
@protocol ACDClientProviderProtocol, OS_dispatch_semaphore, OS_dispatch_queue, ACDDatabaseProtocol;

@interface ACDServer : NSObject <ACDAccountStoreDelegate, NSXPCListenerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertyLock;
    NSMutableArray *_accountStoreClients;
    NSMutableArray *_oauthSignerClients;
    NSMutableArray *_authenticationDialogManagerClients;
    NSMutableDictionary *_clientsByConnection;
    unsigned int _clientCountMaximum;
    NSObject<OS_dispatch_queue> *_deferredConnectionResumeQueue;
    NSObject<OS_dispatch_semaphore> *_deferredConnectionResumeQueueSemaphore;
    NSObject<OS_dispatch_queue> *_performMigrationQueue;
}

@property (retain, nonatomic) ACDAuthenticationPluginManager *authenticationPluginManager;
@property (retain, nonatomic) ACDAccessPluginManager *accessPluginManager;
@property (retain, nonatomic) ACDDataclassOwnersManager *dataclassOwnersManager;
@property (retain, nonatomic) ACDAuthenticationDialogManager *authenticationDialogManager;
@property (retain, nonatomic) ACDAccountNotifier *accountNotifier;
@property (retain, nonatomic) ACRemoteDeviceProxy *remoteDeviceProxy;
@property (retain, nonatomic) id<ACDClientProviderProtocol> clientProvider;
@property (retain, nonatomic) id<ACDDatabaseProtocol> database;
@property (retain, nonatomic) ACDDatabaseBackupActivity *databaseBackupActivity;
@property (readonly, nonatomic) NSXPCListener *accountStoreListener;
@property (readonly, nonatomic) NSXPCListener *oauthSignerListener;
@property (readonly, nonatomic) NSXPCListener *authenticationDialogListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shutdown;
- (id)init;
- (void).cxx_destruct;
- (id)_keyForConnection:(id)a0;
- (void)dealloc;
- (void)_signalDeferredConnectionResumeQueueSemaphore;
- (id)createClientForConnection:(id)a0;
- (void)_handleLanguageChangedDarwinNotification;
- (id)_newDaemonAccountStoreFilterForClient:(id)a0;
- (void)_beginObservingLanguageChangeNotfication;
- (void)_beginObservingMigrationDidFinishDarwinNotifications;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithAccountStoreListener:(id)a0 oauthSignerListener:(id)a1 authenticationDialogListener:(id)a2;
- (void)_beginObservingIDSProxyNotifications;
- (BOOL)_shouldNotifyClient:(id)a0 ofChangesForAccountType:(id)a1;
- (void)_endObservingMigrationDidFinishDarwinNotifications;
- (void)start;
- (id)createDatabaseConnection;
- (id)_newOAuthSignerForClient:(id)a0;
- (id)clientForConnection:(id)a0;
- (void)_endObservingLanguageChangeNotification;
- (void)accountStore:(id)a0 didSaveAccount:(id)a1 changeType:(int)a2;
- (void)credentialsDidChangeForAccount:(id)a0;

@end
