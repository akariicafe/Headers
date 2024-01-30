@class UILabel, NSArray;

@interface BTWarningCell : PSTableCell {
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    NSArray *_constraints;
}

+ (long long)cellStyle;

- (BOOL)becomeFirstResponder;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;

@end
