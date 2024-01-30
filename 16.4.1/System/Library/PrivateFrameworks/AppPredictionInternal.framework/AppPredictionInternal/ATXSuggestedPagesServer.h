@class NSString, NSXPCListener, _ATXInternalUninstallNotification;

@interface ATXSuggestedPagesServer : NSObject <NSXPCListenerDelegate, ATXSuggestedPagesInterface> {
    NSXPCListener *_listener;
    _ATXInternalUninstallNotification *_uninstallNotification;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)prewarmCachedSuggestedPages;
- (id)init;
- (long long)_fetchPageTypeForModeUUID:(id)a0;
- (void).cxx_destruct;
- (void)suggestedPagesWithFilter:(id)a0 layoutOptions:(id)a1 completionHandler:(id /* block */)a2;

@end
