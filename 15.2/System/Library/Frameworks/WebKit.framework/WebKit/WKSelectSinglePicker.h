@class NSString, WKContentView;

@interface WKSelectSinglePicker : UIPickerView <WKFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {
    WKContentView *_view;
    long long _selectedIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0;
- (id)pickerView:(id)a0 attributedTitleForRow:(long long)a1 forComponent:(long long)a2;
- (id)controlView;
- (void)selectRow:(long long)a0 inComponent:(long long)a1 extendingSelection:(BOOL)a2;
- (void)dealloc;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;

@end
