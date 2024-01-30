@class _UIStatusBarIdentifier, _UIStatusBarPillView;

@interface _UIStatusBarPillBackgroundActivityItem : _UIStatusBarBackgroundActivityItem

@property (class, readonly) _UIStatusBarIdentifier *pillCombinedDisplayIdentifier;

@property (nonatomic) long long previousType;
@property (retain, nonatomic) _UIStatusBarPillView *combinedView;
@property (nonatomic) struct CGSize { double width; double height; } pillSize;

+ (BOOL)shouldKeepIconVisibleForActivityType:(long long)a0;
+ (BOOL)_identifierContainsItemImage:(id)a0;

- (id)createDisplayItemForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)_textLabelForActivityType:(long long)a0;
- (id)_backgroundActivityViewForIdentifier:(id)a0;
- (id)_backgroundColorForActivityType:(long long)a0;
- (BOOL)_shouldBounceWhenTransitioningFromType:(long long)a0 toType:(long long)a1;
- (void)_create_combinedView;
- (void)updatedDisplayItemsWithData:(id)a0;
- (BOOL)shouldUpdateIndicatorForIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)viewForIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 statusBar:(id)a1;

@end
