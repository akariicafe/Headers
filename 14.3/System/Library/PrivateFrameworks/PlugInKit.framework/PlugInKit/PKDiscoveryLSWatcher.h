@class PKDiscoveryDriver, NSString;

@interface PKDiscoveryLSWatcher : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (weak) PKDiscoveryDriver *wdriver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)pluginsDidInstall:(id)a0;
- (void)update;
- (void)stopUpdates;
- (id)initWithDriver:(id)a0;
- (void)updateWithUninstalledProxies:(id)a0;
- (void)pluginsDidUninstall:(id)a0;

@end
