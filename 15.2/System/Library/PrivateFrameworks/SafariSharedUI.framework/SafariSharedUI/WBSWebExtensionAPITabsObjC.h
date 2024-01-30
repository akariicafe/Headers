@class WBSWebExtensionAPIEventObjC;

@interface WBSWebExtensionAPITabsObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIEventObjC *_onActivated;
    WBSWebExtensionAPIEventObjC *_onAttached;
    WBSWebExtensionAPIEventObjC *_onCreated;
    WBSWebExtensionAPIEventObjC *_onDetached;
    WBSWebExtensionAPIEventObjC *_onHighlighted;
    WBSWebExtensionAPIEventObjC *_onMoved;
    WBSWebExtensionAPIEventObjC *_onRemoved;
    WBSWebExtensionAPIEventObjC *_onReplaced;
    WBSWebExtensionAPIEventObjC *_onUpdated;
}

@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onActivated;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onAttached;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onCreated;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onDetached;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onHighlighted;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onMoved;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onRemoved;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onReplaced;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onUpdated;
@property (readonly, nonatomic) double tabIdentifierNone;

+ (id)tabsWithExtensionIdentifier:(id)a0 runtime:(id)a1;

- (void).cxx_destruct;
- (BOOL)isPropertyAllowed:(id)a0;
- (void)createTabWithProperties:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)getTabWithID:(double)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)getCurrentTabWithBrowserContextController:(id)a0 completionHandler:(id)a1;
- (void)getSelectedTabInWindow:(double)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)duplicateTab:(double)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)goBackInTab:(double)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)goForwardInTab:(double)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)queryTabs:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)reloadTab:(double)a0 reloadProperties:(id)a1 browserContextController:(id)a2 completionHandler:(id)a3 outExceptionString:(id *)a4;
- (void)closeTabsWithIDs:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)updateTab:(double)a0 updateProperties:(id)a1 browserContextController:(id)a2 completionHandler:(id)a3 outExceptionString:(id *)a4;
- (void)captureVisibleTabInWindow:(double)a0 options:(id)a1 browserContextController:(id)a2 completionHandler:(id)a3 outExceptionString:(id *)a4;
- (void)detectLanguageInTab:(double)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)executeScriptInTab:(double)a0 details:(id)a1 browserContextController:(id)a2 completionHandler:(id)a3 outExceptionString:(id *)a4;
- (void)insertCSSInTab:(double)a0 details:(id)a1 browserContextController:(id)a2 completionHandler:(id)a3 outExceptionString:(id *)a4;
- (void)removeCSSInTab:(double)a0 details:(id)a1 browserContextController:(id)a2 completionHandler:(id)a3 outExceptionString:(id *)a4;
- (void)getZoomForTab:(double)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)setZoomForTab:(double)a0 zoomFactor:(double)a1 browserContextController:(id)a2 completionHandler:(id)a3 outExceptionString:(id *)a4;
- (void)sendMessageToTab:(double)a0 message:(id)a1 options:(id)a2 browserContextController:(id)a3 frame:(id)a4 completionHandler:(id)a5 outExceptionString:(id *)a6;
- (struct Ref<SafariShared::WBSWebExtensionAPIPort, WTF::RawPtrTraits<SafariShared::WBSWebExtensionAPIPort>> { struct WBSWebExtensionAPIPort *x0; })connectToTab:(double)a0 connectInfo:(id)a1 frame:(id)a2;
- (void)discardTab:(double)a0 browserContextController:(id)a1 completionHandler:(id)a2;
- (void)highlightTabs:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2;
- (BOOL)_isProgrammaticInjectionDetailsDictionaryValid:(id)a0 callerName:(id)a1 outExceptionString:(id *)a2;
- (id)_validatedQueryInfoDictionary:(id)a0 outExceptionString:(id *)a1;
- (BOOL)_getBypassCacheFromReloadPropertiesDictionary:(id)a0 outExceptionString:(id *)a1;

@end
