@class IconSettingsButton, PSSpecifier;

@interface SafariVisualPickerSettingsTableCell : PSTableCell {
    IconSettingsButton *_leadingButton;
    IconSettingsButton *_trailingButton;
    PSSpecifier *_specifier;
}

+ (id)visualPickerSpecifierWithLeadingButton:(id)a0 trailingButton:(id)a1 preferenceDomain:(id)a2 preferenceKey:(id)a3;

- (void)buttonTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;

@end
