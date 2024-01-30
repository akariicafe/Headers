@class _UIStatusBarStringView;

@interface _UIStatusBarNavigationItem : _UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarStringView *nameView;

- (id)viewForIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)dependentEntryKeys;
- (void).cxx_destruct;
- (void)_create_nameView;
- (id)createDisplayItemForIdentifier:(id)a0;

@end
