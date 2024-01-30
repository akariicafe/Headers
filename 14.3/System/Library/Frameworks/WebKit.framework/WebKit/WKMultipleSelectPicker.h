@class NSString, WKContentView;

@interface WKMultipleSelectPicker : UIPickerView <WKFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {
    WKContentView *_view;
    long long _textAlignment;
    unsigned long long _singleSelectionIndex;
    BOOL _allowsMultipleSelection;
    double _layoutWidth;
    double _fontSize;
    double _maximumTextWidth;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0;
- (void)dealloc;
- (id)controlView;
- (void)layoutSubviews;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)pickerView:(id)a0 row:(int)a1 column:(int)a2 checked:(BOOL)a3;
- (long long)findItemIndexAt:(int)a0;
- (void)selectRow:(long long)a0 inComponent:(long long)a1 extendingSelection:(BOOL)a2;
- (BOOL)selectFormAccessoryHasCheckedItemAtRow:(long long)a0;

@end
