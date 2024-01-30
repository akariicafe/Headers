@class WKWebView;
@protocol WBSWebExtensionsControllerSelectorForwarderDelegate;

@interface WBSWebExtensionsControllerSelectorForwarder : NSObject {
    id<WBSWebExtensionsControllerSelectorForwarderDelegate> _delegate;
    WKWebView *_webView;
}

- (void)openOptionsPageForExtensionIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteDatabaseForStorageOfType:(long long)a0 forExtensionWithUniqueIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)connectFromPortWithID:(id)a0 fromExtensionWithID:(id)a1 toApplicationWithID:(id)a2;
- (void)connectFromPortWithIDFromWebPage:(id)a0 toExtensionWithID:(id)a1 connectInfo:(id)a2 rawSenderInfo:(id)a3;
- (void)goForwardInTab:(id)a0 extensionIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteValuesForKeys:(id)a0 fromStorageOfType:(long long)a1 forExtensionWithUniqueIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)createTabWithProperties:(id)a0 extensionIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)getStorageSizeForAllKeysInStorageOfType:(long long)a0 forExtensionWithUniqueIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)toggleReaderModeForTab:(id)a0 extensionIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)getStorageSizeForKeys:(id)a0 inStorageOfType:(long long)a1 forExtensionWithUniqueIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)sendMessage:(id)a0 fromExtensionWithID:(id)a1 toExtensionWithID:(id)a2 rawSenderInfo:(id)a3;
- (void)insertCSSWithDetails:(id)a0 fromExtensionWithID:(id)a1 toTabWithID:(id)a2 callingAPIName:(id)a3 completionHandler:(id /* block */)a4;
- (void)captureVisibleTabInWindow:(id)a0 format:(id)a1 quality:(id)a2 extensionIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (void)getValuesForAllKeysFromStorageOfType:(long long)a0 forExtensionWithUniqueIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)openPopupForWindow:(id)a0 extensionIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)queryTabs:(id)a0 forExtensionWithID:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendMessage:(id)a0 fromExtensionWithID:(id)a1 toTabWithID:(double)a2 withOptions:(id)a3 rawSenderInfo:(id)a4 responseCallback:(id /* block */)a5;
- (void)sendMessage:(id)a0 fromExtensionWithID:(id)a1 toTabWithID:(double)a2 withOptions:(id)a3 rawSenderInfo:(id)a4;
- (void)updateTab:(id)a0 properties:(id)a1 extensionIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)getInformationForTab:(id)a0 extensionIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeCSSWithDetails:(id)a0 fromExtensionWithID:(id)a1 toTabWithID:(id)a2 callingAPIName:(id)a3 completionHandler:(id /* block */)a4;
- (void)setZoomForTab:(id)a0 zoomFactor:(id)a1 extensionIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)addListenerForExtensionWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (void)sendMessageFromWebPage:(id)a0 toExtensionWithID:(id)a1 options:(id)a2 rawSenderInfo:(id)a3 replyHandler:(id /* block */)a4;
- (id)initWithWebView:(id)a0 delegate:(id)a1;
- (void)goBackInTab:(id)a0 extensionIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)detectLanguageForTab:(id)a0 extensionIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)getValuesForKeys:(id)a0 fromStorageOfType:(long long)a1 forExtensionWithUniqueIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)sendMessage:(id)a0 fromExtensionWithID:(id)a1 toExtensionWithID:(id)a2 rawSenderInfo:(id)a3 replyHandler:(id /* block */)a4;
- (void)connectFromPortWithID:(id)a0 fromExtensionWithID:(id)a1 toTabWithID:(double)a2 connectInfo:(id)a3 rawSenderInfo:(id)a4;
- (void)getInformationForWindow:(id)a0 getInfo:(id)a1 extensionIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)removeWindow:(id)a0 extensionIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)executeScriptWithDetails:(id)a0 fromExtensionWithID:(id)a1 toTabWithID:(id)a2 callingAPIName:(id)a3 completionHandler:(id /* block */)a4;
- (void)connectFromPortWithID:(id)a0 fromExtensionWithID:(id)a1 toExtensionWithID:(id)a2 connectInfo:(id)a3 rawSenderInfo:(id)a4;
- (void)reloadTab:(id)a0 reloadFromOrigin:(BOOL)a1 extensionIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)createWindowWithCreateData:(id)a0 extensionIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)updateWindow:(id)a0 withInfo:(id)a1 extensionIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)removeListenerForExtensionWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (void)getZoomForTab:(id)a0 extensionIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setKeyedData:(id)a0 inStorageOfType:(long long)a1 forExtensionWithUniqueIdentifier:(id)a2 completionHandler:(id /* block */)a3;

@end
