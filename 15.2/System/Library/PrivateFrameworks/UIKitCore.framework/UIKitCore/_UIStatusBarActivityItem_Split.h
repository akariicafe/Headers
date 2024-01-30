@class _UIStatusBarIdentifier, _UIStatusBarActivityView, _UIStatusBarActivityIndicator;

@interface _UIStatusBarActivityItem_Split : _UIStatusBarActivityItem_SyncOnly

@property (class, readonly) _UIStatusBarIdentifier *pillDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *syncStartDisplayIdentifier;

@property (retain, nonatomic) _UIStatusBarActivityView *activityView;
@property (retain, nonatomic) _UIStatusBarActivityIndicator *syncStartView;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })activityIndicatorAlignmentRectInsets;
- (id)viewForIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_create_activityView;
- (void)_create_syncStartView;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)a0;

@end
