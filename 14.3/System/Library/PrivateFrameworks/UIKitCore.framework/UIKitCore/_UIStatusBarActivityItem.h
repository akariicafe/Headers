@class _UIStatusBarActivityIndicator;

@interface _UIStatusBarActivityItem : _UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarActivityIndicator *activityIndicator;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } activityIndicatorAlignmentRectInsets;

- (void)_create_activityIndicator;
- (void).cxx_destruct;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)viewForIdentifier:(id)a0;
- (BOOL)_enableForType:(long long)a0;
- (id)dependentEntryKeys;

@end
