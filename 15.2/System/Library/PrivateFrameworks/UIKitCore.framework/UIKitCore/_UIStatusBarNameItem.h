@class NSString, _UIStatusBarStringView;

@interface _UIStatusBarNameItem : _UIStatusBarItem

@property (readonly, nonatomic) NSString *nameEntryKey;
@property (retain, nonatomic) _UIStatusBarStringView *nameView;

- (id)viewForIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)dependentEntryKeys;
- (void).cxx_destruct;
- (void)_create_nameView;

@end
