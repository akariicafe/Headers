@class NSString, CNDatePickerContainerView, UIDatePicker, UIViewController;

@interface CNPropertyDateEditingCell : CNPropertySimpleEditingCell <UITextFieldDelegate, CNPickerControllerDelegate>

@property (retain, nonatomic) UIDatePicker *datePicker;
@property (retain, nonatomic) CNDatePickerContainerView *datePickerContainerView;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (readonly, nonatomic) BOOL shouldEditDatesTextually;
@property (retain, nonatomic) NSString *currentCalendarIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)picker:(id)a0 didPickItem:(id)a1;
- (void)pickerDidCancel:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)dateChanged:(id)a0;
- (void)updateValueWithPropertyItem:(id)a0;
- (void)labelButtonClicked:(id)a0;
- (void)localeUpdated:(id)a0;
- (void)applyCalendarAndDate;
- (BOOL)_shouldUseYearlessPickerForDateComponents:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)regainFocus;
- (void)textFieldDidEndEditing:(id)a0 reason:(long long)a1;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;

@end
