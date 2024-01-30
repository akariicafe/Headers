@class NSString, NSDictionary, NSArray, HKOrganDonationAddressCell, UIPickerView;

@interface HKOrganDonationAddressEntryItem : HKSimpleDataEntryItem <UIPickerViewDelegate, UIPickerViewDataSource, HKSimpleDataEntryCellDelegate> {
    HKOrganDonationAddressCell *_cell;
    NSString *_address1;
    NSString *_address2;
    NSString *_city;
    NSString *_state;
    NSString *_zipcode;
    UIPickerView *_statePicker;
    NSDictionary *_statesDict;
    NSArray *_sortedStateKeys;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cell;
- (void).cxx_destruct;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)updateCellDisplay;
- (void)textFieldDidChangeValue:(id)a0 forCell:(id)a1;
- (id)initWithRegistrant:(id)a0;
- (id)formattedKeyAndValue;

@end
