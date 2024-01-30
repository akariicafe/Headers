@class _UIStatusBarStringView;

@interface _UIStatusBarFallbackItem : _UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarStringView *label;

- (id)viewForIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)canEnableDisplayItem:(id)a0 fromData:(id)a1;
- (void)_create_label;

@end
