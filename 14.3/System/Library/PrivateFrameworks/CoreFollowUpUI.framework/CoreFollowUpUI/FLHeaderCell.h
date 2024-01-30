@class UILabel, NSArray;

@interface FLHeaderCell : PSTableCell {
    UILabel *_followTitle;
    UILabel *_followSubtitle;
    NSArray *_constraints;
}

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)layoutSubviews;

@end
