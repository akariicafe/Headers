@class OBLinkTrayButton, CNPhotoPickerVariantsManager, OBBoldTrayButton, CNPhotoPickerVariantListController, NSLayoutConstraint;
@protocol AVTAvatarRecord, CNSharingProfileOnboardingPosePickerControllerDelegate;

@interface CNSharingProfileOnboardingPosePickerController : OBWelcomeController <CNPhotoPickerVariantListControllerDelegate>

@property (retain, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager;
@property (retain, nonatomic) CNPhotoPickerVariantListController *variantListController;
@property (retain, nonatomic) OBLinkTrayButton *setupLaterButton;
@property (retain, nonatomic) OBBoldTrayButton *backButton;
@property (retain, nonatomic) OBBoldTrayButton *nextButton;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (weak, nonatomic) id<CNSharingProfileOnboardingPosePickerControllerDelegate> delegate;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)didTapContinue:(id)a0;
- (void)didTapBack:(id)a0;
- (void)didTapSetupLater:(id)a0;
- (id)initWithAvatarRecord:(id)a0 variantsManager:(id)a1;
- (void)photoPickerVariantListController:(id)a0 didSelectProviderItem:(id)a1;
- (void)photoPickerVariantListControllerDidCancel:(id)a0;

@end
