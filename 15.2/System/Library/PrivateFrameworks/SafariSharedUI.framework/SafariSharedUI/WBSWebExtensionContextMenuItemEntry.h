@class WBSWebExtensionContextMenuItemInfo, NSMutableOrderedSet, NSObject;
@protocol NSCopying;

@interface WBSWebExtensionContextMenuItemEntry : NSObject

@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (retain, nonatomic) WBSWebExtensionContextMenuItemInfo *info;
@property (weak, nonatomic) WBSWebExtensionContextMenuItemEntry *parentEntry;
@property (readonly, nonatomic) NSMutableOrderedSet *children;

- (id)initWithIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)performWithSelfAndChildren:(id /* block */)a0;

@end
