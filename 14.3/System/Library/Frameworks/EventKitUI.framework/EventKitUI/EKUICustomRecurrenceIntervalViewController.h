@class NSString, UIPickerView;

@interface EKUICustomRecurrenceIntervalViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate> {
    UIPickerView *_pickerView;
}

@property (copy) id /* block */ changeBlock;
@property (nonatomic) long long frequency;
@property (nonatomic) long long interval;
@property (nonatomic) BOOL maximumInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (id)initWithSelectedInterval:(long long)a0 frequency:(long long)a1 changeBlock:(id /* block */)a2;
- (void)viewDidLoad;
- (id)pickerView;

@end
