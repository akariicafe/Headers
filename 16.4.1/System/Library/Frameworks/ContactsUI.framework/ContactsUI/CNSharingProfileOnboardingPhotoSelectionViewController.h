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

- (id)contentView;
- (void).cxx_destruct;
- (void)loadView;
- (void)didTapBackButton:(id)a0;
- (void)didTapDoneButton:(id)a0;
- (void)didTapSetupLaterButton:(id)a0;
- (id)initWithContact:(id)a0 avatarRecord:(id)a1 avatarItemProviderConfiguration:(id)a2;
- (void)photoPicker:(id)a0 didUpdatePhotoForContact:(id)a1 withContactImage:(id)a2;
- (void)photoPickerDidCancel:(id)a0;
- (void)sharingPhotoPickerDidSelectAddItem:(id)a0;
- (void)updateForContentSizeCategoryChange;

@end
