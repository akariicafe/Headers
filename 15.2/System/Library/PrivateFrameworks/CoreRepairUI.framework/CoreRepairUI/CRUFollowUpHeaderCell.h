@class UILabel, NSArray;

@interface CRUFollowUpHeaderCell : PSTableCell {
    UILabel *_followTitle;
    UILabel *_followSubtitle;
    NSArray *_constraints;
}

+ (long long)cellStyle;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (id)createFollowUpTitle;
- (id)createFollowUpSubtitle;

@end
