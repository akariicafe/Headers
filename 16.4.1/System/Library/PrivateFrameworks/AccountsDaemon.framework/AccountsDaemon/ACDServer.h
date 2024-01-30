@class ACDAccountNotifier, ACDAuthenticationDialogManager, ACDAccessPluginManager, ACDDatabaseBackupActivity, ACRemoteDeviceProxy, NSString, NSMutableDictionary, ACDDataclassOwnersManager, ACDAuthenticationPluginManager, NSXPCListener, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, ACDClientProviderProtocol, ACDDatabaseProtocol;

@interface ACDServer : NSObject <ACDAccountStoreDelegate, NSXPCConnectionDelegate, NSXPCListenerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertyLock;
    NSMutableArray *_accountStoreClients;
    NSMutableArray *_oauthSignerClients;
    NSMutableArray *_authenticationDialogManagerClients;
    NSMutableDictionary *_clientsByConnection;
    unsigned int _clientCountMaximum;
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

- (id)createClientForConnection:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)createDatabaseConnection;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (id)_newOAuthSignerForClient:(id)a0;
- (void)credentialsDidChangeForAccount:(id)a0;
- (id)initWithAccountStoreListener:(id)a0 oauthSignerListener:(id)a1 authenticationDialogListener:(id)a2;
- (void)shutdown;
- (void)_beginObservingLanguageChangeNotfication;
- (void)_endObservingLanguageChangeNotification;
- (BOOL)_shouldNotifyClient:(id)a0 ofChangesForAccountType:(id)a1;
- (void)accountStore:(id)a0 didSaveAccount:(id)a1 changeType:(int)a2;
- (void)dealloc;
- (void)_handleLanguageChangedDarwinNotification;
- (id)clientForConnection:(id)a0;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (void)_beginObservingIDSProxyNotifications;
- (id)_newDaemonAccountStoreFilterForClient:(id)a0;
- (id)_keyForConnection:(id)a0;

@end
