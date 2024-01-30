@class NSArray, OBBoldTrayButton, UISwitch, UITableView, CNPhotoPickerViewController, UIView, NSString, CNContact, OBLinkTrayButton, CNMeCardSharingHeaderViewController, CNMeCardSharingEnabledDataSource, CNContactStore, CNContactImage, CNMeCardSharingAvatarViewController, CNMeCardSharingAudienceDataSource, CNMutableContact, CNMeCardSharingPickerLayoutAttributes;
@protocol CNMeCardSharingPickerViewControllerDelegate, CNMeCardSharingAvatarProvider;

@interface CNMeCardSharingPickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, CNMeCardSharingAvatarViewControllerDelegate, CNMeCardSharingEnabledDelegate, CNPhotoPickerViewControllerDelegate>

@property (nonatomic) unsigned long long meCardSharingStatus;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) BOOL shouldSetMeContact;
@property (retain, nonatomic) CNMutableContact *draftContact;
@property (retain, nonatomic) CNContactImage *draftContactImage;
@property (nonatomic) BOOL sharingEnabled;
@property (retain, nonatomic) CNMeCardSharingHeaderViewController *headerViewController;
@property (retain, nonatomic) id<CNMeCardSharingAvatarProvider> avatarProvider;
@property (retain, nonatomic) CNMeCardSharingAvatarViewController *avatarViewController;
@property (retain, nonatomic) CNMeCardSharingEnabledDataSource *enabledDataSource;
@property (retain, nonatomic) CNMeCardSharingAudienceDataSource *sharingAudienceDataSource;
@property (retain, nonatomic) CNMeCardSharingPickerLayoutAttributes *layoutAttributes;
@property (retain, nonatomic) CNPhotoPickerViewController *photoPicker;
@property (retain, nonatomic) NSArray *sectionDataSources;
@property (retain, nonatomic) UIView *buttonTray;
@property (retain, nonatomic) OBBoldTrayButton *confirmButton;
@property (retain, nonatomic) OBLinkTrayButton *laterButton;
@property (retain, nonatomic) UISwitch *shareSwitch;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) unsigned long long mode;
@property (weak, nonatomic) id<CNMeCardSharingPickerViewControllerDelegate> delegate;
@property (readonly, nonatomic) NSString *sharedName;
@property (readonly, nonatomic) unsigned long long selectedNameFormat;
@property (readonly, nonatomic) unsigned long long selectedSharingAudience;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithContact:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)avatarViewControllerWasTapped:(id)a0;
- (void)didTapDoneButton:(id)a0;
- (void)didTapSetUpLaterButton:(id)a0;
- (id)initWithContactStore:(id)a0 contact:(id)a1 nameProvider:(id)a2 sharingEnabled:(BOOL)a3 selectedNameFormat:(unsigned long long)a4 selectedSharingAudience:(unsigned long long)a5 mode:(unsigned long long)a6;
- (void)photoPicker:(id)a0 didUpdatePhotoForContact:(id)a1 withContactImage:(id)a2;
- (void)photoPickerDidCancel:(id)a0;
- (void)saveDraftContact;
- (void)sharingEnabledDataSource:(id)a0 didChangeEnabledState:(BOOL)a1;

@end
