@class WBSWebExtensionAPIStorageAreaObjC, WBSWebExtensionAPIEventObjC;

@interface WBSWebExtensionAPIStorageObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIStorageAreaObjC *_local;
    WBSWebExtensionAPIStorageAreaObjC *_sync;
    WBSWebExtensionAPIStorageAreaObjC *_session;
    WBSWebExtensionAPIEventObjC *_onChanged;
}

- (void).cxx_destruct;

@end
