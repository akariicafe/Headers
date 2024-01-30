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

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (id)_pickerView;
- (void)setValue:(id)a0;
- (id)pickerView:(id)a0 attributedTitleForRow:(long long)a1 forComponent:(long long)a2;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (id)inputView;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)_updateDetailTextLabel;
- (id)_pickerTitleFont;
- (id)_monthNumberFormatter;

@end
