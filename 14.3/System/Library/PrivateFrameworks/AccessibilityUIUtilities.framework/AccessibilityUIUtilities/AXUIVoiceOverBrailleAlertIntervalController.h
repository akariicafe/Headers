@interface AXUIVoiceOverBrailleAlertIntervalController : AXUISettingsNumericalPickerViewController

- (id)localizedTitle;
- (double)maximumValue;
- (double)minimumValue;
- (id)localizedFooterText;
- (double)stepAmount;
- (void)setNumericalPreferenceValueFromUser:(double)a0;
- (double)numericalPreferenceValue;
- (long long)keyboardTypeForSpecifier:(id)a0;

@end
