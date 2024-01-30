@class WKWebView, WBSExtensionsController;

@interface WBSSafariExtensionStateObserver : NSObject {
    WKWebView *_webView;
    WBSExtensionsController *_extensionsController;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_addIDsForExtension:(id)a0 toSet:(id)a1;
- (void)_addNamesForExtension:(id)a0 toMap:(id)a1;
- (void)_handleExtensionEnabledStateDidChange:(id)a0;
- (void)_handleExtensionWasAdded:(id)a0;
- (void)_handleExtensionWasRemoved:(id)a0;
- (BOOL)_shouldObserveExtension:(id)a0;
- (void)_startObservingExtensionNotifications;
- (void)_stopObservingExtensionNotifications;
- (BOOL)_teardownObserverIfNecessary;
- (id)initWithWebView:(id)a0 extensionsController:(id)a1;
- (void)startObservingExtensionStateChanges;
- (void)stopObservingExtensionStateChanges;

@end
