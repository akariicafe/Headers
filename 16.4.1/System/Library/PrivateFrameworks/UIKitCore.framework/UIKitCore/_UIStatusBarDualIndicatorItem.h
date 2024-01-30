@class NSLayoutConstraint, _UIStatusBarImageView, _UIStatusBarDisplayableContainerView;

@interface _UIStatusBarDualIndicatorItem : _UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarDisplayableContainerView *iconsView;
@property (retain, nonatomic) _UIStatusBarImageView *iconView;
@property (retain, nonatomic) _UIStatusBarImageView *secondaryIconView;
@property (retain, nonatomic) NSLayoutConstraint *itemSpacingConstraint;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double additionRemovalScale;
@property (nonatomic) double additionRemovalDuration;

- (id)viewForIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)dependentEntryKeys;
- (id)systemImageNameForUpdate:(id)a0;
- (id)createDisplayItemForIdentifier:(id)a0;
- (id)indicatorEntryKey;
- (void)_create_iconsView;
- (void).cxx_destruct;
- (void)_create_iconView;
- (void)_create_secondaryIconView;
- (id)additionRemovalAnimationForSubItem:(id)a0 image:(id)a1 update:(id)a2 displayItem:(id)a3;
- (id)imageForUpdate:(id)a0 secondary:(BOOL)a1;
- (id)secondaryIndicatorEntryKey;
- (id)secondarySystemImageNameForUpdate:(id)a0;

@end
