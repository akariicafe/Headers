@class UISwitch, UIActivityIndicatorView;
@protocol PKSwitchSpinnerTableCellDelegate;

@interface PKSwitchSpinnerTableCell : PSTableCell {
    UIActivityIndicatorView *_spinner;
    UISwitch *_switch;
    BOOL _showSpinner;
    id<PKSwitchSpinnerTableCellDelegate> _delegate;
}

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canReload;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)_updateSubviews;
- (void)setShowSpinner:(BOOL)a0;
- (void)_switchToggled:(id)a0;
- (void)setSwitchIsOn:(BOOL)a0;

@end
