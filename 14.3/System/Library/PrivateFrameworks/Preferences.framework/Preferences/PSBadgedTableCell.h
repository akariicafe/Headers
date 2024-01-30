@class UIImageView, UILabel;

@interface PSBadgedTableCell : PSTableCell {
    UIImageView *_badgeImageView;
    UILabel *_badgeNumberLabel;
    long long _badgeInt;
}

+ (double)badgePadding;
+ (id)reuseIdentifierForClassAndType:(long long)a0;
+ (id)unreadBubbleImage;
+ (id)badgeNumberLabelTextColor;

- (void)resetLocale;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)badgeWithInteger:(long long)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)_shouldUseRoundStyle;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
