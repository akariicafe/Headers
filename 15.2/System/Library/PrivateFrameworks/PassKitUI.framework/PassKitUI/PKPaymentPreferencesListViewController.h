@class NSArray, NSString, PKPaymentPreferenceOptionListItem, PKContactFormatValidator, PKPaymentPreferenceContactSectionController;

@interface PKPaymentPreferencesListViewController : PKDynamicCollectionViewController <PKPaymentPreferenceSectionControllerDelegate, PKPaymentPreferenceContactSectionControllerDelegate, PKAddressEditorViewControllerDelegate, CNContactPickerDelegate, PKAddressSearcherViewControllerDelegate> {
    id /* block */ _handler;
    PKContactFormatValidator *_contactFormatValidator;
    PKPaymentPreferenceContactSectionController *_editingContactSectionController;
    PKPaymentPreferenceOptionListItem *_editingItem;
}

@property (retain, nonatomic) NSArray *preferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_keyboardWillHide:(id)a0;
- (void)_keyboardDidShow:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1 forSectionController:(id)a2;
- (BOOL)collectionViewIsEditingForSectionController:(id)a0;
- (id)initWithPreferences:(id)a0 title:(id)a1 style:(long long)a2 handler:(id /* block */)a3 contactFormatValidator:(id)a4;
- (void)addressSearcherViewController:(id)a0 selectedContact:(id)a1;
- (void)addressSearcherViewControllerDidCancel:(id)a0;
- (void)addressEditorViewController:(id)a0 selectedContact:(id)a1;
- (void)addressEditorViewControllerDidCancel:(id)a0;
- (void)showAddressPickerForPreference:(id)a0 inSectionController:(id)a1;
- (void)startInlineEditingForContactItem:(id)a0 inSectionController:(id)a1;
- (void)showContactsPickerForPreference:(id)a0 inSectionController:(id)a1;
- (void)showAddressEditorForContactItem:(id)a0 inSectionController:(id)a1;
- (void)presentMeCardAlertControllerWithContact:(id)a0 contactKey:(id)a1 handler:(id /* block */)a2;
- (void)_reloadEditedSection:(id)a0;
- (void)_updateNavigationBarButtons;
- (void)_endCurrentInlineEditing;
- (id)_requiredKeysForContactPreference:(id)a0;
- (void)_updateContactAtIndex:(unsigned long long)a0 withCell:(id)a1;
- (void)_handleSelectedContact:(id)a0;

@end
