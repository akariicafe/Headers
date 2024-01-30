@class UIImageView, UILabel;

@interface PSBadgedTableCell : PSTableCell {
    UIImageView *_badgeImageView;
    UILabel *_badgeNumberLabel;
    long long _badgeInt;
}

+ (double)badgePadding;
+ (id)badgeNumberLabelTextColor;
+ (id)reuseIdentifierForClassAndType:(long long)a0;
+ (id)unreadBubbleImage;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)resetLocale;
- (BOOL)_shouldUseRoundStyle;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)badgeWithInteger:(long long)a0;
- (void).cxx_destruct;

@end
