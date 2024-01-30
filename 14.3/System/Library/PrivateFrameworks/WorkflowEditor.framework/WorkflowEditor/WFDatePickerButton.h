@class NSSet, WFVariableInputCoordinator, NSString, NSDate, UIDatePicker, UIView;
@protocol WFVariableProvider, WFVariableUIDelegate;

@interface WFDatePickerButton : UIButton <WFInputViewMutable>

@property (readonly, nonatomic) UIDatePicker *datePicker;
@property (retain, nonatomic) WFVariableInputCoordinator *variableCoordinator;
@property (retain, nonatomic) NSDate *currentDate;
@property (retain, nonatomic) NSDate *minimumDate;
@property (retain, nonatomic) NSDate *maximumDate;
@property (nonatomic) long long datePickerMode;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) id /* block */ variableBlock;
@property (retain, nonatomic) UIView *inputView;
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)datePickerValueChanged;

@end
