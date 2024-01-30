@class _UIStatusBarActivityIndicator;

@interface _UIStatusBarActivityItem : _UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarActivityIndicator *activityIndicator;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } activityIndicatorAlignmentRectInsets;

- (id)viewForIdentifier:(id)a0;
- (void)_create_activityIndicator;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)dependentEntryKeys;
- (void).cxx_destruct;
- (BOOL)_enableForType:(long long)a0;

@end
