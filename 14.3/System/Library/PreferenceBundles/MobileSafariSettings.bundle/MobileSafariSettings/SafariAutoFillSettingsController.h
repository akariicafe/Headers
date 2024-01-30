@class CNContactStore, NSString, UIPopoverController, NSIndexPath, CNContactPickerViewController;

@interface SafariAutoFillSettingsController : SafariSettingsListController <CNContactPickerDelegate, DevicePINControllerDelegate, UIPopoverControllerDelegate> {
    id /* block */ _passcodeEntryCompletionHandler;
    id /* block */ _promptCompletionHandler;
    id /* block */ _passcodeSetupCompletionHandler;
    UIPopoverController *_autoFillContactController;
    NSIndexPath *_autoFillContactIndex;
    BOOL _isMeCardSet;
    CNContactStore *_contactStore;
    CNContactPickerViewController *_meCardPicker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willResignActive;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (id)specifiers;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (void)didAcceptSetPIN;
- (void)didAcceptEnteredPIN;
- (id)myInfo:(id)a0;
- (void)didCancelEnteringPIN;
- (void)_contactStoreChanged:(id)a0;
- (void)updateUseContactInfoSpecifiers;
- (id)_formDataController;
- (id)meCardName;
- (void)_enablingAutoFillWithoutPasscodePromptEndedWithResult:(long long)a0;
- (void)_showPasscodeSetupSheetWithCompletionHandler:(id /* block */)a0;
- (void)_promptForEnablingAutoFillWithoutPasscodeWithTitle:(id)a0 message:(id)a1 allowAnyway:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_setShouldAutoFill:(BOOL)a0 specifier:(id)a1 message:(id)a2 setter:(id /* block */)a3;
- (void)_setupMeCardPicker;
- (void)showMeCardPicker;
- (void)presentPopoverContactListInTable:(id)a0 index:(id)a1 specifier:(id)a2;
- (void)_dismissMeCardPicker;
- (id)useContactInfo:(id)a0;
- (id)shouldAutoFillCreditCards:(id)a0;
- (void)setShouldAutoFillCreditCards:(id)a0 specifier:(id)a1;
- (void)setUseContactInfo:(id)a0 forSpecifier:(id)a1;

@end
