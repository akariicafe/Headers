@class _UIStatusBarIdentifier;

@interface _UIStatusBarSpacerItem : _UIStatusBarItem

@property (class, readonly) _UIStatusBarIdentifier *randomDisplayIdentifier;

- (id)createDisplayItemForIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (BOOL)canEnableDisplayItem:(id)a0 fromData:(id)a1;

@end
