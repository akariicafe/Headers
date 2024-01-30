@class UILabel, UIDatePicker;
@protocol HKOnboardingCompactDatePickerViewDelegate;

@interface HKOnboardingCompactDatePickerView : UIView

@property (retain, nonatomic) UIDatePicker *datePicker;
@property (weak, nonatomic) id<HKOnboardingCompactDatePickerViewDelegate> delegate;
@property (retain, nonatomic) UILabel *initialTextLabel;

- (void)setBackgroundColor:(id)a0;
- (void)setCurrentDate:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 initialText:(id)a1 defaultDate:(id)a2 maxYears:(long long)a3;
- (void)setInitialText:(id)a0 alignment:(long long)a1;
- (void)_showDatePicker;
- (void)_datePickerDidBeginEditing:(id)a0;
- (void)_datePickerValueChanged:(id)a0;
- (void)_setInitialLabelBGColor;
- (void)_setUpDatePicker:(id)a0 maxYears:(long long)a1;
- (void)_setUpInitialLabel:(id)a0;

@end
