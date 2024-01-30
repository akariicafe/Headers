@class NSString;

@interface AXUISettingsNumericalPickerViewController : AXUISettingsSetupCapableListController <AXUISettingsEditableTableCellWithStepperDelegate> {
    double _cachedNumericalValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)maximumValue;
- (id)localizedTitle;
- (double)minimumValue;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)localizedFooterText;
- (double)valueForSpecifier:(id)a0;
- (double)maximumValueForSpecifier:(id)a0;
- (double)minimumValueForSpecifier:(id)a0;
- (void)specifier:(id)a0 setValue:(double)a1;
- (double)stepValueForSpecifier:(id)a0;
- (id)stringValueForSpecifier:(id)a0;
- (BOOL)shouldDisablePreferenceEntirely;
- (id)_delayPickerFooterSpecifier;
- (id)_delayPickerSpecifier;
- (id)delayEnabled:(id)a0;
- (id)localizedPickerFooterText;
- (id)localizedTextForValue:(double)a0;
- (BOOL)numericalPreferenceEnabled;
- (double)numericalPreferenceValue;
- (void)setDelayEnabled:(id)a0 specifier:(id)a1;
- (void)setNumericalPreferenceEnabledFromUser:(BOOL)a0;
- (void)setNumericalPreferenceValueFromUser:(double)a0;
- (BOOL)shouldSaveOnExit;
- (double)stepAmount;
- (BOOL)userCanDisableNumericalPreference;

@end
