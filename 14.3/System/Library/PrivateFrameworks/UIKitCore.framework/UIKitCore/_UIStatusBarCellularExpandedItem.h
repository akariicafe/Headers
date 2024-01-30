@class _UIStatusBarIdentifier, _UIStatusBarBadgeView;

@interface _UIStatusBarCellularExpandedItem : _UIStatusBarCellularItem

@property (class, readonly) _UIStatusBarIdentifier *badgeDisplayIdentifier;

@property (retain, nonatomic) _UIStatusBarBadgeView *badgeView;

+ (id)groupWithHighPriority:(long long)a0 lowPriority:(long long)a1 typeClass:(Class)a2 allowDualNetwork:(BOOL)a3;

- (void).cxx_destruct;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)viewForIdentifier:(id)a0;
- (void)_create_badgeView;

@end
