@class NSString, NSNumberFormatter, UIPopoverController, UIPickerView;

@interface SafariSavedCreditCardExpirationDateTableCell : PSTableCell <UIPickerViewDataSource, UIPickerViewDelegate, UIPopoverControllerDelegate> {
    UIPickerView *_pickerView;
    UIPopoverController *_popoverController;
    NSNumberFormatter *_monthNumberFormatter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (id)inputView;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (id)pickerView:(id)a0 attributedTitleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (id)_pickerView;
- (void)setValue:(id)a0;
- (void)_updateDetailTextLabel;
- (id)_pickerTitleFont;
- (id)_monthNumberFormatter;

@end
