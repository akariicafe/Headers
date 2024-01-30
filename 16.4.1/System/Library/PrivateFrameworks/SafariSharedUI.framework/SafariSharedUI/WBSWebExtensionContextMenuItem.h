@class NSArray, WBSWebExtensionContextMenuItemInfo, WBSWebExtensionContextMenuContext;

@interface WBSWebExtensionContextMenuItem : NSObject

@property (readonly, nonatomic) WBSWebExtensionContextMenuItemInfo *info;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) WBSWebExtensionContextMenuContext *context;

+ (id)itemWithInfo:(id)a0 children:(id)a1 context:(id)a2;

- (void).cxx_destruct;

@end
