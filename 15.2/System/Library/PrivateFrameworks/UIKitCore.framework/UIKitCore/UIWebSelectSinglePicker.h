@class NSString, DOMHTMLSelectElement, NSArray;
@protocol UIWebSelectedItemPrivate;

@interface UIWebSelectSinglePicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {
    DOMHTMLSelectElement *_selectNode;
    NSArray *_optionItems;
    id<UIWebSelectedItemPrivate> _selectedOptionItem;
    long long _selectedIndex;
    id<UIWebSelectedItemPrivate> _optionToSelectWhenDone;
    long long _indexToSelectWhenDone;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pickerView:(id)a0 attributedTitleForRow:(long long)a1 forComponent:(long long)a2;
- (id)controlView;
- (void)dealloc;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id)initWithDOMHTMLSelectElement:(id)a0 allItems:(id)a1;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;

@end
