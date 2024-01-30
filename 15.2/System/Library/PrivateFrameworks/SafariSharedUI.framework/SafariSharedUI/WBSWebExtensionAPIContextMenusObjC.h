@class WBSWebExtensionAPIEventObjC, NSMutableDictionary;

@interface WBSWebExtensionAPIContextMenusObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIEventObjC *_onClicked;
    NSMutableDictionary *_callbacks;
}

@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onClicked;
@property (readonly, nonatomic) double actionMenuTopLevelLimit;

+ (id)contextMenusWithExtensionIdentifier:(id)a0 runtime:(id)a1;

- (void).cxx_destruct;
- (void)initWithExtensionIdentifier:(id)a0 runtime:(id)a1 isForMainWorld:(BOOL)a2;
- (void)executeContextMenuItemWithInfo:(id)a0 tabInfo:(id)a1;
- (id)createWithDetails:(struct OpaqueJSValue { } *)a0 browserContextController:(id)a1 context:(struct OpaqueJSContext { } *)a2 completionHandler:(id)a3 outExceptionString:(id *)a4;
- (void)updateItemWithIdentifier:(id)a0 details:(struct OpaqueJSValue { } *)a1 browserContextController:(id)a2 context:(struct OpaqueJSContext { } *)a3 completionHandler:(id)a4 outExceptionString:(id *)a5;
- (void)removeItemWithIdentifier:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)removeAllWithBrowserContextController:(id)a0 completionHandler:(id)a1;

@end
