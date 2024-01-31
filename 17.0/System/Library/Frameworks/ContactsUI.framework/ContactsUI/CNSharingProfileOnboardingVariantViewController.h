@class CNPhotoPickerProviderItem, CNPhotoPickerVariantsManager, NSString, OBLinkTrayButton, CNPhotoPickerVariantListController, OBBoldTrayButton, NSLayoutConstraint;
@protocol CNSharingProfileOnboardingVariantViewControllerDelegate;

@interface CNSharingProfileOnboardingVariantViewController : OBWelcomeController <CNPhotoPickerVariantListControllerDelegate>

@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager;
@property (retain, nonatomic) CNPhotoPickerProviderItem *item;
@property (retain, nonatomic) NSString *variantName;
@property (retain, nonatomic) CNPhotoPickerVariantListController *variantListController;
@property (retain, nonatomic) OBLinkTrayButton *setupLaterButton;
@property (retain, nonatomic) OBBoldTrayButton *backButton;
@property (retain, nonatomic) OBBoldTrayButton *continueButton;
@property (retain, nonatomic) OBLinkTrayButton *poseButton;
@property (retain, nonatomic) NSLayoutConstraint *heightLayoutConstraint;
@property (weak, nonatomic) id<CNSharingProfileOnboardingVariantViewControllerDelegate> onboardingDelegate;
@property (nonatomic) BOOL shouldShowPoseButton;
@property (retain, nonatomic) CNPhotoPickerProviderItem *selectedItem;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)didTapContinue:(id)a0;
- (id)initWithVariantsManager:(id)a0 originalItem:(id)a1 selectedVariantIdentifier:(id)a2;
- (void)didTapBack:(id)a0;
- (void)didTapPose:(id)a0;
- (void)didTapSetupLater:(id)a0;
- (void)photoPickerVariantListController:(id)a0 didSelectProviderItem:(id)a1;
- (void)photoPickerVariantListControllerDidCancel:(id)a0;
- (void)updateOriginalItem:(id)a0;

@end
