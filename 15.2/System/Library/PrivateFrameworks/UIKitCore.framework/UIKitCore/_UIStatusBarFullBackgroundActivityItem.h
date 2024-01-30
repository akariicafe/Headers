@class _UIStatusBarIdentifier, _UIStatusBarStringView;

@interface _UIStatusBarFullBackgroundActivityItem : _UIStatusBarBackgroundActivityItem

@property (class, readonly) _UIStatusBarIdentifier *detailDisplayIdentifier;

@property (retain, nonatomic) _UIStatusBarStringView *detailStringView;

- (id)viewForIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (void)_create_backgroundView;
- (void)_create_detailStringView;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)a0;

@end
