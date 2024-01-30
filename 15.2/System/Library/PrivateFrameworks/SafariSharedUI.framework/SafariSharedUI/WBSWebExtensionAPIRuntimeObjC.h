@class NSString, WBSWebExtensionAPIEventObjC, JSValue;

@interface WBSWebExtensionAPIRuntimeObjC : WBSWebExtensionAPIObject <WBSJSCallbackHandlerErrorReporter> {
    WBSWebExtensionAPIEventObjC *_onConnect;
    WBSWebExtensionAPIEventObjC *_onMessage;
    WBSWebExtensionAPIEventObjC *_onMessageExternal;
    WBSWebExtensionAPIEventObjC *_onStartup;
    WBSWebExtensionAPIEventObjC *_onInstalled;
    JSValue *_lastError;
    BOOL _lastErrorAccessed;
    BOOL _processingUserGesture;
}

@property (readonly, nonatomic) void *cpp;
@property (nonatomic, getter=isProcessingUserGesture) BOOL processingUserGesture;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onMessage;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onMessageExternal;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onConnect;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onStartup;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onInstalled;
@property (readonly, nonatomic) const struct OpaqueJSValue { } *lastError;
@property (readonly, nonatomic) NSString *runtimeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)runtimeWithExtensionIdentifier:(id)a0 isForMainWorld:(BOOL)a1;

- (void).cxx_destruct;
- (void)reportErrorForCallbackHandler:(id)a0 withMessage:(id)a1 context:(struct OpaqueJSContext { } *)a2;
- (BOOL)isPropertyAllowed:(id)a0;
- (id)getURLWithResourcePath:(id)a0;
- (id)getManifest;
- (void)sendMessageToExtensionWithID:(id)a0 message:(id)a1 options:(id)a2 frame:(id)a3 completionHandler:(id)a4 outExceptionString:(id *)a5;
- (struct Ref<SafariShared::WBSWebExtensionAPIPort, WTF::RawPtrTraits<SafariShared::WBSWebExtensionAPIPort>> { struct WBSWebExtensionAPIPort *x0; })connectToExtensionWithID:(id)a0 connectInfo:(id)a1 frame:(id)a2;
- (void)getBackgroundPageWithBrowserContextController:(id)a0 completionHandler:(id)a1;
- (void)setUninstallURL:(id)a0 completionHandler:(id)a1;
- (void)openOptionsPageWithBrowserContextController:(id)a0 completionHandler:(id)a1;
- (void)reloadExtensionWithBrowserContextController:(id)a0;
- (void)getPlatformInfoWithCompletionHandler:(id)a0;
- (void)sendNativeMessageWithApplicationID:(id)a0 message:(id)a1 browserContextController:(id)a2 completionHandler:(id)a3;
- (struct Ref<SafariShared::WBSWebExtensionAPIPort, WTF::RawPtrTraits<SafariShared::WBSWebExtensionAPIPort>> { struct WBSWebExtensionAPIPort *x0; })connectNativeWithApplicationID:(id)a0 browserContextController:(id)a1;
- (id)rawSenderInfoForFrame:(id)a0;

@end
