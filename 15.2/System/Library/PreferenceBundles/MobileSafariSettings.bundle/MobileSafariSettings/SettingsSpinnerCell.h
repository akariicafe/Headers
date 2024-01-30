@class UILabel, UIActivityIndicatorView;

@interface SettingsSpinnerCell : PSTableCell {
    UIActivityIndicatorView *_spinner;
    UILabel *_spinnerLabel;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
