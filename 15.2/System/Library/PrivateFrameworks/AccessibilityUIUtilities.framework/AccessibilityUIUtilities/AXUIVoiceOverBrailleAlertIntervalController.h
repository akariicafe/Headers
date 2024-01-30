@interface AXUIVoiceOverBrailleAlertIntervalController : AXUISettingsNumericalPickerViewController

- (double)minimumValue;
- (id)localizedTitle;
- (double)maximumValue;
- (BOOL)userCanDisableNumericalPreference;
- (id)localizedFooterText;
- (BOOL)numericalPreferenceEnabled;
- (void)setNumericalPreferenceEnabledFromUser:(BOOL)a0;
- (void)setNumericalPreferenceValueFromUser:(double)a0;
- (double)stepAmount;
- (double)numericalPreferenceValue;
- (long long)keyboardTypeForSpecifier:(id)a0;

@end
