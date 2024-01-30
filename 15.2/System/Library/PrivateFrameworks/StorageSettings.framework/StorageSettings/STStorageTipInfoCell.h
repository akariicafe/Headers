@class UILabel, NSMutableArray;

@interface STStorageTipInfoCell : PSTableCell {
    NSMutableArray *_constraints;
    UILabel *_infoLabel;
}

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;

@end
