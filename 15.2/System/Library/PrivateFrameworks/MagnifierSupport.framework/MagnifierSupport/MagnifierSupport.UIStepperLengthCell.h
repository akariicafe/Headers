@interface MagnifierSupport.UIStepperLengthCell : UITableViewCell {
    void /* unknown type, empty encoding */ _distanceStepper;
    void /* unknown type, empty encoding */ _lengthMeasure;
    void /* unknown type, empty encoding */ _valueChangedHandler;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)initWithCoder:(id)a0;
- (id)initWithReuseIdentifier:(id)a0;
- (void)distanceStepperValueChanged:(id)a0;

@end
