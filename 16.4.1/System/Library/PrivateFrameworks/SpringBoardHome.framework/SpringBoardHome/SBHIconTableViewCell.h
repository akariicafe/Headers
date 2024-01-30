@class _UILegibilitySettings, NSArray, NSString, SBIcon, UILabel, UIView, SBIconView;
@protocol SBIconLabelAccessoryView;

@interface SBHIconTableViewCell : UITableViewCell <SBHLegibility> {
    UIView *_customSelectedBackgroundView;
    long long _labelAccessoryType;
    UIView<SBIconLabelAccessoryView> *_iconLabelAccessoryView;
    NSArray *_iconLabelAccessoryViewConstraints;
}

@property (readonly, nonatomic) UILabel *iconNameLabel;
@property (readonly, nonatomic) UIView *iconViewContainerView;
@property (readonly, nonatomic) UIView *labelContainerView;
@property (copy, nonatomic) NSArray *iconViewContainerViewConstraints;
@property (retain, nonatomic) SBIconView *iconView;
@property (readonly, nonatomic) SBIcon *icon;
@property (readonly, nonatomic) NSString *iconDescription;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultTableViewCellSeparatorInsetsForIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
+ (double)defaultTableViewCellHorizontalMargin;
+ (double)defaultTableViewCellHeightForIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateTitleLabelFont;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_teardownIconLabelAccessoryView;
- (void)_resetContent;
- (void)_resetIconView;
- (BOOL)_setLabelAccessoryType:(long long)a0;
- (void)_updateHighlightBackgroundView;
- (BOOL)_updateIconNameLabelForDisplayName:(id)a0 labelAccessoryType:(long long)a1;
- (void)configureCellForIcon:(id)a0;

@end
