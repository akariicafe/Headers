@class _UIStatusBarIdentifier, _UIStatusBarPillView, _UIStatusBarDisplayableContainerView;

@interface _UIStatusBarPillBackgroundActivityItem : _UIStatusBarBackgroundActivityItem

@property (class, readonly) _UIStatusBarIdentifier *pillCombinedDisplayIdentifier;

@property (retain, nonatomic) _UIStatusBarPillView *combinedView;
@property (retain, nonatomic) _UIStatusBarDisplayableContainerView *iconsView;
@property (nonatomic) struct CGSize { double width; double height; } pillSize;

+ (BOOL)_identifierContainsItemImage:(id)a0;
+ (BOOL)shouldKeepIconVisibleForActivityType:(long long)a0;
+ (BOOL)_identifierContainsSecondaryItemImage:(id)a0;

- (id)_backgroundColorForActivityType:(long long)a0;
- (BOOL)_shouldBounceWhenTransitioningFromType:(long long)a0 toType:(long long)a1;
- (BOOL)shouldUpdateIndicatorForIdentifier:(id)a0;
- (id)_textLabelForActivityType:(long long)a0;
- (id)viewForIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (void)_create_combinedView;
- (id)createDisplayItemForIdentifier:(id)a0;
- (void)_create_iconsView;
- (id)_backgroundActivityViewForIdentifier:(id)a0;
- (void).cxx_destruct;

@end
