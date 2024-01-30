@class _UIStatusBarStringView;

@interface _UIStatusBarBuildVersionItem : _UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarStringView *buildVersionView;

- (BOOL)needsUpdate;
- (void).cxx_destruct;
- (void)_create_buildVersionView;
- (id)viewForIdentifier:(id)a0;
- (BOOL)canEnableDisplayItem:(id)a0 fromData:(id)a1;

@end
