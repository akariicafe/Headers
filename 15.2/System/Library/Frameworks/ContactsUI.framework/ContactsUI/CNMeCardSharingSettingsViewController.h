@class NSArray, UISwitch, CNMeCardSharingContactAvatarProvider, CNSharingProfileLogger, UITableView, CNMeCardSharingSettingsHeaderViewController, CNPhotoPickerViewController, NSString, CNContact, UITextField, CNSharingProfileMeCardUpdater, CNMeCardSharingEnabledDataSource, CNContactStore, CNContactImage, CNMeCardSharingAudienceDataSource, CNMutableContact, CNMeCardSharingSettingsNameDataSource, CNMeCardSharingPickerLayoutAttributes;
@protocol CNMeCardSharingNameProvider, CNMeCardSharingSettingsViewControllerDelegate, CNMeCardSharingAvatarProvider;

@interface CNMeCardSharingSettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, CNMeCardSharingSettingsHeaderViewControllerDelegate, CNMeCardSharingEnabledDelegate, CNPhotoPickerViewControllerDelegate>

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNMutableContact *editingContact;
@property (retain, nonatomic) CNContactImage *editingContactImage;
@property (retain, nonatomic) NSString *editingGivenName;
@property (retain, nonatomic) NSString *editingFamilyName;
@property (retain, nonatomic) CNSharingProfileMeCardUpdater *meCardUpdater;
@property (readonly, nonatomic) CNMeCardSharingPickerLayoutAttributes *layoutAttributes;
@property (retain, nonatomic) CNMeCardSharingSettingsHeaderViewController *headerViewController;
@property (readonly, nonatomic) id<CNMeCardSharingAvatarProvider> avatarProvider;
@property (readonly, nonatomic) id<CNMeCardSharingNameProvider> nameProvider;
@property (readonly, nonatomic) CNMeCardSharingSettingsNameDataSource *nameDataSource;
@property (readonly, nonatomic) CNMeCardSharingEnabledDataSource *enabledDataSource;
@property (readonly, nonatomic) CNMeCardSharingAudienceDataSource *sharingAudienceDataSource;
@property (retain, nonatomic) CNPhotoPickerViewController *photoPicker;
@property (retain, nonatomic) NSArray *sectionDataSources;
@property (retain, nonatomic) UISwitch *shareSwitch;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) long long nameOrder;
@property (retain, nonatomic) UITextField *givenNameField;
@property (retain, nonatomic) UITextField *familyNameField;
@property (retain, nonatomic) CNMeCardSharingContactAvatarProvider *editingContactAvatarProvider;
@property (nonatomic) BOOL shouldSetAsMeContact;
@property (readonly, nonatomic) CNSharingProfileLogger *logger;
@property (nonatomic) double keyboardHeight;
@property (weak, nonatomic) id<CNMeCardSharingSettingsViewControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL sharingEnabled;
@property (readonly, nonatomic) unsigned long long selectedSharingAudience;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)initWithContactStore:(id)a0 contact:(id)a1 avatarProvider:(id)a2 nameProvider:(id)a3 sharingEnabled:(BOOL)a4 selectedSharingAudience:(unsigned long long)a5;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)contentSizeCategoryDidChange:(id)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)updateContact:(id)a0 withImagePropertiesFromContact:(id)a1;
- (void)dealloc;
- (void)photoPickerDidCancel:(id)a0;
- (void)sharingSettingsHeaderWasTapped:(id)a0;
- (void)photoPicker:(id)a0 didUpdatePhotoForContact:(id)a1 withContactImage:(id)a2;
- (void)givenNameDidChange:(id)a0;
- (void)sharingEnabledDataSource:(id)a0 didChangeEnabledState:(BOOL)a1;
- (void)updateVisibilityOfAudienceSection;
- (void)presentErrorAlertForEmptyPhotoIfNeededWithCompletion:(id /* block */)a0;
- (void)familyNameDidChange:(id)a0;
- (void)notifyDelegateOfChangesWithDidSaveToMeCard:(BOOL)a0;
- (void)adjustInsetsForKeyboardOverlap:(double)a0;
- (id)textFieldForIndex:(long long)a0;
- (void)processSelectionForTableView:(id)a0 indexPath:(id)a1;
- (void)promptForSavingToMeCard;
- (void)saveDraftContact;
- (void)presentPhotoPickerControllerForContact:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
