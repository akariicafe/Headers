@class _UIStatusBarStringView;

@interface _UIStatusBarBuildVersionItem : _UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarStringView *buildVersionView;

- (void)_create_buildVersionView;
- (id)viewForIdentifier:(id)a0;
- (BOOL)needsUpdate;
- (BOOL)canEnableDisplayItem:(id)a0 fromData:(id)a1;
- (void).cxx_destruct;

@end
