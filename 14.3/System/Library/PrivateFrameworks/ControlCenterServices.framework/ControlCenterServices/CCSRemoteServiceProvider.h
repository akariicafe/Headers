@class CCSModuleRepository, NSString, NSXPCListener, NSHashTable, CCSModuleSettingsProvider;

@interface CCSRemoteServiceProvider : NSObject <NSXPCListenerDelegate, CCSRemoteServiceServerProtocol> {
    CCSModuleRepository *_moduleRepository;
    CCSModuleSettingsProvider *_settingsProvider;
    NSXPCListener *_listener;
    NSHashTable *_presentationEndpoints;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initialize;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)_init;
- (void)resume;
- (void)invalidate;
- (void)registerEndpoint:(id)a0;
- (void)setVisibility:(BOOL)a0 forModuleWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)getEnabledStateOfModuleWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)enumerateEndpointsUsingBlock:(id /* block */)a0;
- (void)requestAvailableModuleIdentifiersWithCompletionHandler:(id /* block */)a0;
- (void)requestEnableModuleWithIdentifier:(id)a0 force:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)requestDisableModuleWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)presentModuleWithIdentifier:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;

@end
