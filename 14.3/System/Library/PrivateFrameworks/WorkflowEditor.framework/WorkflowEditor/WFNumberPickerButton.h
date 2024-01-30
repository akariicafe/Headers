@class NSSet, WFVariableInputCoordinator, NSString, UIView, UIPickerView;
@protocol WFVariableProvider, WFVariableUIDelegate;

@interface WFNumberPickerButton : WFBackgroundFadingButton <UIPickerViewDataSource, UIPickerViewDelegate, WFInputViewMutable>

@property (readonly, nonatomic) UIPickerView *pickerView;
@property (retain, nonatomic) WFVariableInputCoordinator *variableCoordinator;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } allowedRange;
@property (nonatomic) unsigned long long currentValue;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) id /* block */ variableBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *inputView;
@property (retain, nonatomic) UIView *inputAccessoryView;

- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateVariableBlock;

@end
