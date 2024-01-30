@class WBSWebExtensionAPIEventObjC;

@interface WBSWebExtensionAPIRuntimeObjC : WBSWebExtensionAPIRuntimeBase {
    WBSWebExtensionAPIEventObjC *_onConnect;
    WBSWebExtensionAPIEventObjC *_onConnectExternal;
    WBSWebExtensionAPIEventObjC *_onMessage;
    WBSWebExtensionAPIEventObjC *_onMessageExternal;
    WBSWebExtensionAPIEventObjC *_onStartup;
    WBSWebExtensionAPIEventObjC *_onInstalled;
}

- (void).cxx_destruct;

@end
