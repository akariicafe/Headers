@class UILabel, UIStepper;
@protocol AXUISettingsEditableTableCellWithStepperDelegate;

@interface AXUISettingsEditableTableCellWithStepper : AXUISettingsEditableTextCell

@property (retain, nonatomic) UIStepper *stepper;
@property (retain, nonatomic) UILabel *secondsLabel;
@property (weak, nonatomic) id<AXUISettingsEditableTableCellWithStepperDelegate> delegate;
@property (readonly, nonatomic) BOOL shouldResizeTextFieldOnUpdate;
@property (nonatomic) BOOL testingUseNoPreferencesDelegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)a0;
- (void)initializeView;
- (void)_textFieldChanged:(id)a0;
- (void)_stepperChanged:(id)a0;
- (void)_updateAccessibilityLabelForTextField;
- (void)didMoveToSuperview;
- (long long)_axStepperKeyboardType;
- (double)_axStepperMinimumValue;
- (double)_axStepperMaximumValue;
- (double)_axStepperValue;
- (double)_axStepperStepValue;
- (void)_updateSecondsLabelForDelegate:(id)a0;
- (void)_axStepperSetValue:(double)a0;
- (id)_axStepperStringValue;
- (void)_updateSecondsLabel;
- (void)updateWithValue:(double)a0 shouldUpdateTextField:(BOOL)a1;
- (id)_axStepperUnitString;
- (void)layoutSubviews;
- (id)_stepperValueFormatString;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
