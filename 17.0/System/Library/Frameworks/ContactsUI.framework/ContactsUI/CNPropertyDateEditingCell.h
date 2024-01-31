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

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0 reason:(long long)a1;
- (void)dateChanged:(id)a0;
- (BOOL)_shouldUseYearlessPickerForDateComponents:(id)a0;
- (void)applyCalendarAndDate;
- (void)labelButtonClicked:(id)a0;
- (void)localeUpdated:(id)a0;
- (void)picker:(id)a0 didPickItem:(id)a1;
- (void)pickerDidCancel:(id)a0;
- (void)regainFocus;
- (void)updateValueWithPropertyItem:(id)a0;

@end
