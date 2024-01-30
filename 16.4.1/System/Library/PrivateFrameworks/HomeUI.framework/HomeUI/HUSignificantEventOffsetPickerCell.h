@class NSArray, NSString, NSDateComponents, UIPickerView;
@protocol HUSignificantEventOffsetPickerDelegate;

@interface HUSignificantEventOffsetPickerCell : UITableViewCell <UIPickerViewDelegate, UIPickerViewDataSource>

@property (readonly, nonatomic) UIPickerView *pickerView;
@property (retain, nonatomic) NSArray *offsetDateComponentOptions;
@property (retain, nonatomic) NSString *significantEvent;
@property (retain, nonatomic) NSDateComponents *currentOffset;
@property (weak, nonatomic) id<HUSignificantEventOffsetPickerDelegate> delegate;
@property (retain, nonatomic) NSDateComponents *selectedOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_defaultOffsetDateComponentOptions;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (id)_titleForOffsetComponents:(id)a0;
- (void)_updateOffsetDateComponentOptions;

@end
