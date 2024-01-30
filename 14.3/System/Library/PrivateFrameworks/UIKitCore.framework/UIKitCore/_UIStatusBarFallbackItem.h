@class _UIStatusBarStringView;

@interface _UIStatusBarFallbackItem : _UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarStringView *label;

- (void).cxx_destruct;
- (void)_create_label;
- (id)viewForIdentifier:(id)a0;
- (BOOL)canEnableDisplayItem:(id)a0 fromData:(id)a1;

@end
