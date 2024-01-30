@interface MagnifierSupport.UIStepperLengthCell : UITableViewCell {
    void /* unknown type, empty encoding */ _distanceStepper;
    void /* unknown type, empty encoding */ _lengthMeasure;
    void /* unknown type, empty encoding */ _valueChangedHandler;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (void)distanceStepperValueChanged:(id)a0;

@end
