@class NSString, NSDictionary, NSUUID, WKWebProcessPlugInBrowserContextController, WBSWebExtensionAPIEventObjC;

@interface WBSWebExtensionAPIPortObjC : WBSWebExtensionAPIObject <WBSTranslateToJSValue> {
    NSUUID *_identifier;
    WKWebProcessPlugInBrowserContextController *_browserContextController;
    WBSWebExtensionAPIEventObjC *_onDisconnect;
    WBSWebExtensionAPIEventObjC *_onMessage;
    BOOL _isDisconnected;
}

@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onDisconnect;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onMessage;
@property (readonly, nonatomic) NSDictionary *sender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disconnect;
- (void).cxx_destruct;
- (void)dealloc;
- (struct OpaqueJSValue { } *)translateToJSValueWithJSContext:(struct OpaqueJSContext { } *)a0;
- (BOOL)isPropertyAllowed:(id)a0;
- (id)_messageReceiver;
- (void)_initWithBrowserContextController:(id)a0 extensionIdentifier:(id)a1 runtime:(id)a2 isForMainWorld:(BOOL)a3 targetExtensionID:(id)a4 connectInfo:(id)a5 rawSenderInfo:(id)a6;
- (void)_initWithBrowserContextController:(id)a0 extensionIdentifier:(id)a1 runtime:(id)a2 isForMainWorld:(BOOL)a3 targetTabID:(double)a4 connectInfo:(id)a5 rawSenderInfo:(id)a6;
- (void)_initWithBrowserContextController:(id)a0 extensionIdentifier:(id)a1 runtime:(id)a2 isForMainWorld:(BOOL)a3 portIdentifier:(id)a4 connectInfo:(id)a5 sender:(id)a6;
- (void)_initWithBrowserContextController:(id)a0 extensionIdentifier:(id)a1 runtime:(id)a2 applicationIdentifier:(id)a3;
- (void)disconnectionRequestReceived;
- (void)postMessage:(id)a0 outExceptionString:(id *)a1;

@end
