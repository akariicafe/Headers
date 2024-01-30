@class _UIStatusBarStringView;

@interface _UIStatusBarBuildVersionItem : _UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarStringView *buildVersionView;

- (BOOL)needsUpdate;
- (id)viewForIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_create_buildVersionView;
- (BOOL)canEnableDisplayItem:(id)a0 fromData:(id)a1;

@end
