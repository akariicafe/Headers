@class CNAvatarEditingManager, NSString, CNMeCardSharingOnboardingHeaderViewController, CNPhotoPickerViewController, CNPhotoPickerVariantsManager, CNSharingProfileLogger, CNContact, CNContactStore, UITextField, CNMutableContact, CNMeCardSharingPickerLayoutAttributes, CNMeCardSharingOnboardingAvatarCarouselViewController;
@protocol CNMeCardSharingNameProvider, AVTAvatarRecord, CNMeCardSharingOnboardingEditViewControllerDelegate;

@interface CNMeCardSharingOnboardingEditViewController : CNMeCardSharingOnboardingViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate, CNPhotoPickerViewControllerDelegate, CNAvatarEditingManagerDelegate, CNPhotoPickerVariantListControllerDelegate>

@property (nonatomic) BOOL delegateDoesRespondToOnboardingResultSelector;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) CNContact *contact;
@property (retain, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) CNMeCardSharingPickerLayoutAttributes *layoutAttributes;
@property (nonatomic) long long nameOrder;
@property (retain, nonatomic) UITextField *givenNameField;
@property (retain, nonatomic) UITextField *familyNameField;
@property (nonatomic) BOOL shouldSetAsMeContact;
@property (retain, nonatomic) CNMutableContact *editingContact;
@property (retain, nonatomic) CNMutableContact *avatarCarouselEditingContact;
@property (retain, nonatomic) NSString *editingGivenName;
@property (retain, nonatomic) NSString *editingFamilyName;
@property (retain, nonatomic) id<CNMeCardSharingNameProvider> nameProvider;
@property (retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselViewController *avatarCarouselViewController;
@property (retain, nonatomic) CNMeCardSharingOnboardingHeaderViewController *headerViewController;
@property (retain, nonatomic) CNPhotoPickerViewController *photoPickerViewController;
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager;
@property (retain, nonatomic) CNAvatarEditingManager *posePicker;
@property (readonly, nonatomic) CNSharingProfileLogger *logger;
@property (weak, nonatomic) id<CNMeCardSharingOnboardingEditViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)headerText;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)avatarEditingManager:(id)a0 didFinishWithProviderItem:(id)a1;
- (void)dealloc;
- (void)textFieldDidEndEditing:(id)a0;
- (id)confirmButtonTitle;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)handleConfirmButtonTapped;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateContact:(id)a0 withImagePropertiesFromContact:(id)a1;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)givenNameDidChange:(id)a0;
- (void)photoPickerDidCancel:(id)a0;
- (void)photoPicker:(id)a0 didUpdatePhotoForContact:(id)a1 withContactImage:(id)a2;
- (void)presentErrorAlertForEmptyPhotoIfNeededWithCompletion:(id /* block */)a0;
- (void)familyNameDidChange:(id)a0;
- (void)adjustInsetsForKeyboardOverlap:(double)a0;
- (id)textFieldForIndex:(long long)a0;
- (void)promptForSavingToMeCard;
- (void)saveDraftContact;
- (void)photoPickerVariantListController:(id)a0 didSelectProviderItem:(id)a1;
- (void)photoPickerVariantListControllerDidCancel:(id)a0;
- (void)finishOnboardingWithDidSaveToMeContact:(BOOL)a0;
- (void)avatarCarouselViewControllerDidTapPhotoPickerCell:(id)a0;
- (void)finishOnboardingWithProviderItem:(id)a0;
- (void)avatarCarouselViewControllerDidUpdateCenterMostItem:(id)a0;
- (void)updateAvatarCarouselContactName;
- (id)initWithContactStore:(id)a0 contact:(id)a1 nameProvider:(id)a2 avatarRecord:(id)a3;
- (long long)contactImageSourceForType:(unsigned long long)a0;
- (void)notifyDelegateWithContactImage:(id)a0 didSaveToMeContact:(BOOL)a1;
- (void)showAvatarPosePickerFromItem:(id)a0;
- (void)presentPhotoPickerVariantListForItem:(id)a0 FromViewController:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)viewDidLoad;

@end
