@class NSString, PRXPickerContentView;

@interface PRXPickerContentViewController : PRXCardContentViewController <UIPickerViewDataSource, UIPickerViewDelegate>

@property (readonly, nonatomic) PRXPickerContentView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)contentViewClass;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;

@end
