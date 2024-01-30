@class NSArray, NSString, HUTriggerDurationPickerValue, UIPickerView, NSNumber;
@protocol HUTriggerDurationPickerDelegate;

@interface HUTriggerDurationPickerCell : UITableViewCell <UIPickerViewDataSource, UIPickerViewDelegate>

@property (readonly, nonatomic) UIPickerView *pickerView;
@property (retain, nonatomic) NSArray *durationOptions;
@property (retain, nonatomic) HUTriggerDurationPickerValue *currentDurationValue;
@property (retain, nonatomic) NSNumber *currentDuration;
@property (weak, nonatomic) id<HUTriggerDurationPickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_defaultDurationOptions;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)_updateDurationOptions;
- (id)pickerDurationValue;

@end
