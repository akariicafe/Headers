@interface AXUIVoiceOverBrailleAlertIntervalController : AXUISettingsNumericalPickerViewController

- (double)maximumValue;
- (id)localizedTitle;
- (double)minimumValue;
- (id)localizedFooterText;
- (long long)keyboardTypeForSpecifier:(id)a0;
- (BOOL)numericalPreferenceEnabled;
- (double)numericalPreferenceValue;
- (void)setNumericalPreferenceEnabledFromUser:(BOOL)a0;
- (void)setNumericalPreferenceValueFromUser:(double)a0;
- (double)stepAmount;
- (BOOL)userCanDisableNumericalPreference;

@end
