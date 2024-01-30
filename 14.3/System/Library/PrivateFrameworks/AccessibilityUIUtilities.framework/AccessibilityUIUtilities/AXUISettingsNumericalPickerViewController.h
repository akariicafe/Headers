@class NSString;

@interface AXUISettingsNumericalPickerViewController : AXUISettingsSetupCapableListController <AXUISettingsEditableTableCellWithStepperDelegate> {
    double _cachedNumericalValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)localizedTitle;
- (double)maximumValue;
- (double)minimumValue;
- (BOOL)userCanDisableNumericalPreference;
- (BOOL)shouldDisablePreferenceEntirely;
- (id)localizedFooterText;
- (void)setDelayEnabled:(id)a0 specifier:(id)a1;
- (id)delayEnabled:(id)a0;
- (BOOL)numericalPreferenceEnabled;
- (id)localizedPickerFooterText;
- (id)_delayPickerSpecifier;
- (BOOL)shouldSaveOnExit;
- (double)stepAmount;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setNumericalPreferenceEnabledFromUser:(BOOL)a0;
- (id)_delayPickerFooterSpecifier;
- (void)setNumericalPreferenceValueFromUser:(double)a0;
- (double)numericalPreferenceValue;
- (id)stringValueForSpecifier:(id)a0;
- (double)valueForSpecifier:(id)a0;
- (id)localizedTextForValue:(double)a0;
- (void)specifier:(id)a0 setValue:(double)a1;
- (double)stepValueForSpecifier:(id)a0;
- (double)minimumValueForSpecifier:(id)a0;
- (double)maximumValueForSpecifier:(id)a0;
- (id)specifiers;
- (void)viewDidLoad;

@end
