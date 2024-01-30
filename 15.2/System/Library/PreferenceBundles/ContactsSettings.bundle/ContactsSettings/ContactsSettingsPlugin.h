@class CNContactPickerViewController, NSString, PSSystemPolicyForApp, PSSpecifier, NSMutableArray, UIAlertController, UIPopoverController, NSObject;
@protocol OS_dispatch_queue;

@interface ContactsSettingsPlugin : PSListController <PSSystemPolicyForAppDelegate, UIActionSheetDelegate, CNContactPickerDelegate, UIPopoverControllerDelegate> {
    void *_addressBook;
    NSMutableArray *_currentSpecifiers;
    PSSpecifier *_SIMImportSpacerSpecifier;
    PSSpecifier *_SIMImportSpecifier;
    PSSpecifier *_MeCardSpecifier;
    PSSpecifier *_ContactsSortOrderSpecifier;
    PSSpecifier *_PersonNameOrderSpecifier;
    PSSpecifier *_ContactsInMailSpecifier;
    NSMutableArray *_contactStores;
    NSMutableArray *_contactStoreNames;
    long long _contactStoresCount;
    int _meCardLastCheckedSequenceNumber;
    struct __CTServerConnection { } *_ctServerConnection;
    UIAlertController *_loadingContacts;
    struct __CFDictionary { } *_importButtonIndexToStoreID;
    int _importStoreID;
    BOOL _shouldShowSIMImport;
    UIPopoverController *_meCardPopover;
    CNContactPickerViewController *_meCardPicker;
    NSObject<OS_dispatch_queue> *_addressBookQueue;
}

@property (retain, nonatomic) PSSystemPolicyForApp *appPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (void)windowDidRotate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (struct __CTServerConnection { } *)_ctServerConnection;
- (void)dealloc;
- (void)windowWillRotate:(id)a0;
- (BOOL)shouldLoadSpecifiersLazily;
- (void)_rootControllerDidSuspend;
- (void)_dismissMeCardPickerAnimated:(BOOL)a0;
- (BOOL)_importAlreadyInProgress;
- (void)_updateSIMImportVisibility;
- (void)_updateABStoresAndNames;
- (void)_updateSIMImportSpecifier:(BOOL)a0;
- (void)_setDefaultContacts:(id)a0 specifier:(id)a1;
- (void)_stopListeningForSIMPhonebookNotifications;
- (void)_noteImportEnded;
- (void)_erroredDuringSIMPhonebookFetch;
- (id)_simPhonebookEntryAtIndex:(int)a0;
- (void)_noteImportStarted;
- (void)_fetchSIMPhonebook;
- (void)_beginImportToStoreID:(int)a0;
- (void)_reloadMeCardCellIfVisible;
- (void)_showMeCardPopover;
- (void)_synchronizeNanoUserDefault:(id)a0;
- (void)setDefaultContacts:(id)a0 specifier:(id)a1;
- (id)defaultContactsName:(id)a0;
- (id)contactStoreTitlesForSpecifier:(id)a0;
- (void)_phonebookSelected;
- (void)_phonebookAvailable;
- (void)importFromSIM:(id)a0;
- (void)_clearSpecifiers;
- (void)_SIMStatusChanged;
- (id)meCardName:(id)a0;
- (void)showMeCardPicker:(id)a0;
- (id)contactsSortOrder:(id)a0;
- (void)setContactsSortOrder:(id)a0 specifier:(id)a1;
- (id)personNameOrder:(id)a0;
- (void)setPersonNameOrder:(id)a0 specifier:(id)a1;

@end
