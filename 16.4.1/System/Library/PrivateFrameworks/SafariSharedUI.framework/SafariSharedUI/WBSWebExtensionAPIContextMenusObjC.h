@class WBSWebExtensionAPIEventObjC, NSMutableDictionary;

@interface WBSWebExtensionAPIContextMenusObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIEventObjC *_onClicked;
    NSMutableDictionary *_callbacks;
}

- (void).cxx_destruct;
- (void)initWithExtensionIdentifier:(id)a0 runtime:(id)a1 isForMainWorld:(BOOL)a2;

@end
