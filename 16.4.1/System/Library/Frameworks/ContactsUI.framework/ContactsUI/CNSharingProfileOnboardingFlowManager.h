@class CNSharingProfileOnboardingVariantViewController, CNAvatarEditingManager, NSString, UINavigationController, CNSharingProfileAvatarItemProviderConfiguration, CNPhotoPickerVariantsManager, CNContact, CNPhotoPickerProviderItem, CNSharingProfileOnboardingPhotoSelectionResult, CNSharingProfileLogger, CNSharingProfileOnboardingPhotoSelectionViewController, CNSharingProfileOnboardingPosePickerController;
@protocol CNSharingProfileOnboardingFlowManagerDelegate, AVTAvatarRecord, CNSharingProfileOnboardingAudienceController;

@interface CNSharingProfileOnboardingFlowManager : NSObject <CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate, CNSharingProfileOnboardingAudienceControllerDelegate, CNPhotoPickerVariantListControllerDelegate, CNSharingProfileOnboardingVariantViewControllerDelegate, CNAvatarEditingManagerDelegate, CNSharingProfileOnboardingPosePickerControllerDelegate>

@property (nonatomic) BOOL shouldAnimateNavTransitions;
@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) CNSharingProfileAvatarItemProviderConfiguration *avatarItemProviderConfiguration;
@property (nonatomic) BOOL didPersistToMeCard;
@property (retain, nonatomic) CNSharingProfileOnboardingPhotoSelectionViewController *photoSelectionController;
@property (retain, nonatomic) CNSharingProfileOnboardingPosePickerController *posePickerController;
@property (retain, nonatomic) CNSharingProfileOnboardingVariantViewController *variantController;
@property (retain, nonatomic) id<CNSharingProfileOnboardingAudienceController> audienceViewController;
@property (retain, nonatomic) CNSharingProfileOnboardingPhotoSelectionResult *photoSelectionResult;
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager;
@property (retain, nonatomic) CNPhotoPickerProviderItem *selectedVariantItem;
@property (retain, nonatomic) CNAvatarEditingManager *avatarEditingManager;
@property (retain, nonatomic) CNSharingProfileLogger *logger;
@property (weak, nonatomic) id<CNSharingProfileOnboardingFlowManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (void)audienceController:(id)a0 didFinishWithContact:(id)a1 sharingAudience:(unsigned long long)a2;
- (void)audienceControllerDidTapSetupLater:(id)a0;
- (void)avatarEditingManager:(id)a0 didFinishWithProviderItem:(id)a1;
- (unsigned long long)imageTypeForAvatarType:(long long)a0;
- (id)initWithNavigationController:(id)a0 contact:(id)a1 avatarRecord:(id)a2 avatarItemProviderConfiguration:(id)a3;
- (id)initWithNavigationController:(id)a0 contact:(id)a1 avatarRecord:(id)a2 avatarItemProviderConfiguration:(id)a3 logger:(id)a4;
- (void)notifyDelegateOfSetupLaterSelected;
- (void)onboardingVariantControllerDidTapBack:(id)a0;
- (void)onboardingVariantControllerDidTapContinue:(id)a0;
- (void)onboardingVariantControllerDidTapPose:(id)a0;
- (void)onboardingVariantControllerDidTapSetupLater:(id)a0;
- (void)photoSelectionViewControllerDidFinishWithResult:(id)a0;
- (void)photoSelectionViewControllerDidTapSetupLater:(id)a0;
- (void)posePickerController:(id)a0 didFinishWithProviderItem:(id)a1;
- (void)posePickerControllerDidSelectBack:(id)a0;
- (void)posePickerControllerDidSelectSetupLater:(id)a0;
- (id)prepareVariantsControllerForResult:(id)a0;
- (void)presentAnimojiPoseCapture;
- (void)presentMeCardAlertForResult:(id)a0;
- (void)presentMeCardPersistanceAlertWithCompletionBlock:(id /* block */)a0;
- (void)presentNameAndAudienceControllerForContact:(id)a0;
- (id)providerItemForPhotoResult:(id)a0;
- (void)saveCurrentInfoToMeCard;
- (void)startFlow;

@end
