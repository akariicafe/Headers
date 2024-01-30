@class NEFilterManager, NSString, NSXPCConnection, NEDNSSettingsManager, NSXPCListenerEndpoint, NEDNSProxyManager, NSMutableArray, NSXPCListener, NEVPNManager;
@protocol NEConfigurationCommandHandling;

@interface NEProviderAppConfigurationClient : NEUtilConfigurationClient <NSXPCListenerDelegate>

@property (readonly) NSXPCListener *listener;
@property (retain) NEVPNManager *currentManager;
@property (retain) NEFilterManager *filterManager;
@property (retain) NEDNSProxyManager *dnsProxyManager;
@property (retain) NEDNSSettingsManager *dnsSettingsManager;
@property (retain) NSMutableArray *createdManagers;
@property (retain) NSMutableArray *currentManagers;
@property (retain) NSString *targetAppBundleID;
@property BOOL isServerMode;
@property (retain) NSXPCConnection *connection;
@property (retain) id<NEConfigurationCommandHandling> remoteObject;
@property (readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnabled:(BOOL)a0;
- (BOOL)enabled;
- (id)dnsProxyConfiguration;
- (id)dnsSettingsBundle;
- (BOOL)setPasswordWithParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)unsetPasswordWithParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)setSharedSecretWithParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)unsetSharedSecretWithParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)setProviderTypeWithParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)onDemandEnabled;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)onDemandRules;
- (void).cxx_destruct;
- (id)filterConfiguration;
- (BOOL)isAlwaysOn;
- (void)handleConfigChanged:(id)a0;
- (void)handleCommand:(int)a0 forConfigWithName:(id)a1 withParameters:(id)a2 completionHandler:(id /* block */)a3;
- (id)protocolForParameters:(id)a0;
- (int)setKeychainItemData:(id)a0 withName:(id)a1 persistentReference:(id *)a2;
- (int)deleteKeychainItemWithPersistentReference:(id)a0;
- (void)loadAllWithCompletionHandler:(id /* block */)a0;
- (BOOL)createConfigurationWithParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)setProtocolWithParameters:(id)a0 errorStr:(id *)a1;
- (id)initForServerMode;
- (void)setOnDemandRules:(id)a0;
- (void)setOnDemandEnabled:(BOOL)a0;
- (void)loadConfigurationWithName:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithClientName:(id)a0;

@end
