@class UIView, NSString, OBLinkTrayButton, UIImageView, UIButton, UITextField, CNMutableContact, OBBoldTrayButton, UILabel, CNSharingProfileAudienceDataSource;
@protocol CNSharingProfileOnboardingAudienceControllerDelegate;

@interface CNSharingProfileOnboardingAudienceCatalystViewController : OBWelcomeFullCenterContentController <UITextFieldDelegate, CNSharingProfileOnboardingAudienceController>

@property (retain, nonatomic) UIView *customContentView;
@property (retain, nonatomic) OBLinkTrayButton *setupLaterButton;
@property (retain, nonatomic) OBBoldTrayButton *backButton;
@property (retain, nonatomic) OBBoldTrayButton *confirmButton;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UITextField *givenNameField;
@property (retain, nonatomic) UITextField *familyNameField;
@property (retain, nonatomic) UILabel *audienceLabel;
@property (retain, nonatomic) UIButton *audiencePickerButton;
@property (retain, nonatomic) UILabel *audienceDescriptionLabel;
@property (retain, nonatomic) CNMutableContact *contact;
@property (retain, nonatomic) CNSharingProfileAudienceDataSource *sharingAudienceDataSource;
@property (nonatomic) long long nameOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNSharingProfileOnboardingAudienceControllerDelegate> delegate;

+ (id)descriptorForRequiredKeys;
+ (id)headerText;

- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)createContentView;
- (void)updateConfirmButtonEnabledState;
- (void)createNameLabel;
- (id)confirmButtonTitle;
- (void)createAudienceDescriptionLabel;
- (void)createAudienceLabel;
- (void)createAudiencePickerButton;
- (void)createAvatarView;
- (void)createNameTextFields;
- (void)didSelectSharingAudience:(unsigned long long)a0;
- (void)familyNameDidChange:(id)a0;
- (void)givenNameDidChange:(id)a0;
- (void)handleBackTapped:(id)a0;
- (void)handleConfirmButtonTapped:(id)a0;
- (void)handleSetupLaterTapped:(id)a0;
- (id)initWithContact:(id)a0 selectedSharingAudience:(unsigned long long)a1;
- (void)layoutContentView;
- (void)updateMenuForAudiencePicker;

@end
