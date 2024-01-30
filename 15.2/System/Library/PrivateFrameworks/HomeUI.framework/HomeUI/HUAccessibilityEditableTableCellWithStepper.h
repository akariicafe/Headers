@class NSString, NSNumber;
@protocol HUStepperCellDelegate;

@interface HUAccessibilityEditableTableCellWithStepper : AXUISettingsEditableTableCellWithStepper <AXUISettingsEditableTableCellWithStepperDelegate, UITextFieldDelegate, HUStepperCellProtocol, HUDisableableCellProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUStepperCellDelegate> stepperCellDelegate;
@property (copy, nonatomic) NSNumber *minimumValue;
@property (copy, nonatomic) NSNumber *maximumValue;
@property (copy, nonatomic) NSNumber *stepValue;
@property (copy, nonatomic) NSNumber *stepperValue;
@property (nonatomic, getter=isDisabled) BOOL disabled;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_update;
- (id)stringValueForSpecifier:(id)a0;
- (double)valueForSpecifier:(id)a0;
- (void)specifier:(id)a0 setValue:(double)a1;
- (double)stepValueForSpecifier:(id)a0;
- (double)minimumValueForSpecifier:(id)a0;
- (double)maximumValueForSpecifier:(id)a0;
- (id)textFieldValue:(id)a0;

@end
