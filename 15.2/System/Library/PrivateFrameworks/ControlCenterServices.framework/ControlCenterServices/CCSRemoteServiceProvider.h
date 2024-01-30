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

- (void)requestAvailableModuleIdentifiersWithCompletionHandler:(id /* block */)a0;
- (void)requestEnableModuleWithIdentifier:(id)a0 force:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)presentModuleWithIdentifier:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)_init;
- (void)invalidate;
- (void)enumerateEndpointsUsingBlock:(id /* block */)a0;
- (void)requestDisableModuleWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)resume;
- (void)dealloc;
- (void)registerEndpoint:(id)a0;
- (void)setVisibility:(BOOL)a0 forModuleWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)getEnabledStateOfModuleWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
