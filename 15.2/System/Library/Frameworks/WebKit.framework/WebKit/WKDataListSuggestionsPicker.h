@class NSString;

@interface WKDataListSuggestionsPicker : WKDataListSuggestionsControl <UIPickerViewDataSource, UIPickerViewDelegate> {
    struct RetainPtr<WKDataListSuggestionsPickerView> { void *m_ptr; } _pickerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateWithInformation:(void *)a0;
- (id)initWithInformation:(void *)a0 inView:(id)a1;
- (void)showSuggestionsDropdown:(void *)a0 activationType:(unsigned char)a1;
- (void)invalidate;
- (id).cxx_construct;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;

@end
