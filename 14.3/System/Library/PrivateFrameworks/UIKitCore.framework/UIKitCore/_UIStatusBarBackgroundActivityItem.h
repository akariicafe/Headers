@class _UIStatusBarIdentifier, _UIStatusBarPillView, _UIStatusBarActivityIconView;

@interface _UIStatusBarBackgroundActivityItem : _UIStatusBarIndicatorItem

@property (class, readonly) _UIStatusBarIdentifier *backgroundDisplayIdentifier;

@property (retain, nonatomic) _UIStatusBarPillView *backgroundView;
@property (retain, nonatomic) _UIStatusBarActivityIconView *iconView;

+ (double)_fontSizeAdjustmentForActivityType:(long long)a0;
+ (double)_verticalOffsetForActivityType:(long long)a0;
+ (BOOL)_identifierContainsItemImage:(id)a0;

- (id)imageNameForUpdate:(id)a0;
- (id)indicatorEntryKey;
- (id)createDisplayItemForIdentifier:(id)a0;
- (id)imageView;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)a0;
- (void)_create_backgroundView;
- (void)applyStyleAttributes:(id)a0 toDisplayItem:(id)a1;
- (id)_textLabelForActivityType:(long long)a0;
- (id)_backgroundActivityViewForIdentifier:(id)a0;
- (id)_backgroundColorForActivityType:(long long)a0;
- (id)_visualEffectForActivityType:(long long)a0 traitCollection:(id)a1;
- (void)_create_iconView;
- (BOOL)_shouldPulseForActivityType:(long long)a0 traitCollection:(id)a1;
- (id)_imageNameForActivityType:(long long)a0;
- (BOOL)_shouldRingForActivityType:(long long)a0 traitCollection:(id)a1;
- (id)_systemImageNameForActivityType:(long long)a0;
- (id)imageForUpdate:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)viewForIdentifier:(id)a0;
- (id)systemImageNameForUpdate:(id)a0;

@end
