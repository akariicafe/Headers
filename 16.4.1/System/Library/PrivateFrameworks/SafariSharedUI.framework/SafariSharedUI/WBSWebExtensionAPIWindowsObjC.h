@class WBSWebExtensionAPIWindowsEventObjC;

@interface WBSWebExtensionAPIWindowsObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIWindowsEventObjC *_onCreated;
    WBSWebExtensionAPIWindowsEventObjC *_onRemoved;
    WBSWebExtensionAPIWindowsEventObjC *_onFocusChanged;
}

- (void).cxx_destruct;

@end
