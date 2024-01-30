@class NSString;

@interface AXUISettingsNumericalPickerViewController : AXUISettingsSetupCapableListController <AXUISettingsEditableTableCellWithStepperDelegate> {
    double _cachedNumericalValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (double)minimumValue;
- (id)localizedTitle;
- (double)maximumValue;
- (BOOL)userCanDisableNumericalPreference;
- (BOOL)shouldDisablePreferenceEntirely;
- (id)localizedFooterText;
- (void)setDelayEnabled:(id)a0 specifier:(id)a1;
- (id)delayEnabled:(id)a0;
- (BOOL)numericalPreferenceEnabled;
- (id)localizedPickerFooterText;
- (id)_delayPickerSpecifier;
- (void)setNumericalPreferenceEnabledFromUser:(BOOL)a0;
- (BOOL)shouldSaveOnExit;
- (id)_delayPickerFooterSpecifier;
- (void)setNumericalPreferenceValueFromUser:(double)a0;
- (double)stepAmount;
- (double)numericalPreferenceValue;
- (id)stringValueForSpecifier:(id)a0;
- (double)valueForSpecifier:(id)a0;
- (id)localizedTextForValue:(double)a0;
- (void)specifier:(id)a0 setValue:(double)a1;
- (double)stepValueForSpecifier:(id)a0;
- (double)minimumValueForSpecifier:(id)a0;
- (double)maximumValueForSpecifier:(id)a0;

@end
