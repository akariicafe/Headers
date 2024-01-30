@class PKDiscoveryDriver, NSString;
@protocol PKApplicationWorkspaceProxy;

@interface PKDiscoveryLSWatcher : NSObject <PKApplicationWorkspaceObserverProtocol>

@property (weak) PKDiscoveryDriver *wdriver;
@property (retain) id<PKApplicationWorkspaceProxy> workspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithUninstalledProxies:(id)a0;
- (void)update;
- (id)initWithDriver:(id)a0;
- (void)stopUpdates;
- (void)pluginsDidInstall:(id)a0;
- (void)pluginsDidUninstall:(id)a0;
- (void).cxx_destruct;

@end
