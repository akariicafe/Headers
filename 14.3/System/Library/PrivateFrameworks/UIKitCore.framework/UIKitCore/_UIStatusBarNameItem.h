@class NSString, _UIStatusBarStringView;

@interface _UIStatusBarNameItem : _UIStatusBarItem

@property (readonly, nonatomic) NSString *nameEntryKey;
@property (retain, nonatomic) _UIStatusBarStringView *nameView;

- (void).cxx_destruct;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)viewForIdentifier:(id)a0;
- (void)_create_nameView;
- (id)dependentEntryKeys;

@end
