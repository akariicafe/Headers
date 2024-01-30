@class NSString, OBLinkTrayButton, CNPhotoPickerViewController, CNSharingProfileLogger, CNSharingProfileAvatarItemProviderConfiguration, CNContact, CNSharingProfilePhotoPickerViewController, CNMutableContact, OBBoldTrayButton;
@protocol CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate, AVTAvatarRecord;

@interface CNSharingProfileOnboardingPhotoSelectionViewController : OBWelcomeController <CNSharingProfilePhotoPickerViewControllerDelegate, CNPhotoPickerViewControllerDelegate>

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) CNSharingProfileAvatarItemProviderConfiguration *avatarItemProviderConfiguration;
@property (retain, nonatomic) CNSharingProfileLogger *logger;
@property (retain, nonatomic) OBLinkTrayButton *setupLaterButton;
@property (retain, nonatomic) OBBoldTrayButton *backButton;
@property (retain, nonatomic) OBBoldTrayButton *confirmButton;
@property (retain, nonatomic) CNSharingProfilePhotoPickerViewController *sharingPhotoPickerViewController;
@property (retain, nonatomic) CNPhotoPickerViewController *photoPickerViewController;
@property (retain, nonatomic) CNMutableContact *photoProviderContact;
@property (nonatomic) id<CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (void)updateForContentSizeCategoryChange;
- (void)didTapDoneButton:(id)a0;
- (void)sharingPhotoPickerDidSelectAddItem:(id)a0;
- (void)didTapBackButton:(id)a0;
- (id)initWithContact:(id)a0 avatarRecord:(id)a1 avatarItemProviderConfiguration:(id)a2;
- (void)didTapSetupLaterButton:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)photoPickerDidCancel:(id)a0;
- (void)photoPicker:(id)a0 didUpdatePhotoForContact:(id)a1 withContactImage:(id)a2;
- (id)contentView;

@end
