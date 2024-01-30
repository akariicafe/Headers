@class NSString, UIPickerView;
@protocol EKRecurrenceOrdinalPickerViewControllerDelegate;

@interface EKRecurrenceOrdinalPickerViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate>

@property (readonly, nonatomic) UIPickerView *pickerView;
@property id<EKRecurrenceOrdinalPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_leftColumn;
- (id)_rightColumn;
- (void)loadView;
- (int)dayMask;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (int)ordinalValue;
- (void)updateRecurrenceRuleBuilder:(id)a0;
- (void)updateFromRecurrenceRule:(id)a0;
- (void)viewDidLoad;

@end
