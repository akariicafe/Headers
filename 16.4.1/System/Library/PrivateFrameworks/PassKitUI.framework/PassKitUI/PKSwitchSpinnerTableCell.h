@class UISwitch, UIActivityIndicatorView;
@protocol PKSwitchSpinnerTableCellDelegate;

@interface PKSwitchSpinnerTableCell : PSTableCell {
    UIActivityIndicatorView *_spinner;
    UISwitch *_switch;
    BOOL _showSpinner;
    id<PKSwitchSpinnerTableCellDelegate> _delegate;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canReload;
- (void)_updateSubviews;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_switchToggled:(id)a0;
- (void)setShowSpinner:(BOOL)a0;
- (void)setSwitchIsOn:(BOOL)a0;

@end
