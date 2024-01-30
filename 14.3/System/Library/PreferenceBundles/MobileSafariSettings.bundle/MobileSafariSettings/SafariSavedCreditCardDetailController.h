@class NSString, NSDateFormatter, PSTextFieldSpecifier, WBSCreditCardFormatter, NSArray, WBSCreditCardData;

@interface SafariSavedCreditCardDetailController : PSListController <_SFCreditCardCaptureViewControllerDelegate> {
    WBSCreditCardData *_creditCardData;
    WBSCreditCardFormatter *_creditCardFormatter;
    NSDateFormatter *_expirationDateFormatter;
    PSTextFieldSpecifier *_cardholderSpecifier;
    PSTextFieldSpecifier *_numberSpecifier;
    PSTextFieldSpecifier *_expirationDateSpecifier;
    PSTextFieldSpecifier *_descriptionSpecifier;
    NSArray *_deleteButtonSpecifiers;
    NSArray *_useCameraSpecifiers;
    BOOL _hasDefaultDescription;
    BOOL _editing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSpecifier:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldSelectResponderOnAppearance;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_edit:(id)a0;
- (void)creditCardCaptureViewControllerDidCancel:(id)a0;
- (void)creditCardCaptureViewController:(id)a0 didCaptureCreditCard:(id)a1;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)tableView:(id)a0 shouldShowMenuForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)_cancelEditing:(id)a0;
- (void)_willHideUIMenuController:(id)a0;
- (id)_specifierWithName:(id)a0;
- (void)_updateDoneButtonForCardNumberString:(id)a0;
- (void)_setValue:(id)a0 forSpecifier:(id)a1;
- (id)_valueOfSpecifier:(id)a0;
- (void)_updateSpecifiersFromCreditCardData:(id)a0;
- (void)_setEditing:(BOOL)a0;
- (void)_updateSpecifiers;
- (id)_useCameraSpecifiers;
- (void)_updateRightBarButtonItem;
- (void)_deleteCreditCard:(id)a0;
- (void)_useCamera:(id)a0;
- (void)_endEditing:(id)a0;
- (id)_deleteButtonSpecifiers;
- (void)_removeCreditCardDataAndPopViewController;
- (BOOL)_isActionACopyMethod:(SEL)a0;
- (BOOL)_isSpecifierACreditCardInfoField:(id)a0;
- (BOOL)_isThereDefaultCreditCardInfoAtIndexPath:(id)a0;
- (void)safari_copyCreditCardholderName:(id)a0;
- (void)safari_copyCreditCardNumber:(id)a0;
- (void)safari_copyCreditCardExpirationDate:(id)a0;
- (void)safari_copyCreditCardName:(id)a0;

@end
