@class UIImageView, UILabel;

@interface PSBadgedTableCell : PSTableCell {
    UIImageView *_badgeImageView;
    UILabel *_badgeNumberLabel;
    long long _badgeInt;
}

+ (id)unreadBubbleImage;
+ (double)badgePadding;
+ (id)badgeNumberLabelTextColor;
+ (id)reuseIdentifierForClassAndType:(long long)a0;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)resetLocale;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)_shouldUseRoundStyle;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)badgeWithInteger:(long long)a0;
- (void)dealloc;

@end
