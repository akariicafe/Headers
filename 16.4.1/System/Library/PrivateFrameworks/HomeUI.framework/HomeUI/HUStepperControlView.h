@class NSArray, UIStepper, NSFormatter, UILabel, NSString;
@protocol HUControlViewDelegate;

@interface HUStepperControlView : UIView <HUControlView>

@property (readonly, nonatomic) UIStepper *stepper;
@property (readonly, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;
@property (nonatomic) double stepValue;
@property (retain, nonatomic) NSFormatter *valueFormatter;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<HUControlViewDelegate> delegate;
@property (retain, nonatomic) id value;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic) BOOL canBeHighlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;
+ (Class)valueClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_stepperValueChanged:(id)a0;
- (id)_defaultValueFormatter;
- (void)_stepperTouchDown:(id)a0;
- (void)_stepperTouchUp:(id)a0;
- (void)_updateValueLabel;

@end
