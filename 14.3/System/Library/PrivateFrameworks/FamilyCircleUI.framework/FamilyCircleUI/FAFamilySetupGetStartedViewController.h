@class UIView, NSString, AAFamilyEligibilityResponse, UIScrollView, FAFamilySharingFeaturesView, UIImageView, UIButton, ACAccount, UILabel, ACAccountStore;
@protocol FAFamilySetupPageDelegate;

@interface FAFamilySetupGetStartedViewController : UIViewController <FAFamilySetupPage> {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAFamilyEligibilityResponse *_familyEligibilityResponse;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UIImageView *_familySharingLogo;
    UILabel *_descriptionLabel;
    UIButton *_getStartedButton;
    FAFamilySharingFeaturesView *_familyFeaturesView;
}

@property (weak, nonatomic) id<FAFamilySetupPageDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateFonts;
- (void).cxx_destruct;
- (void)loadView;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (id)initWithAccount:(id)a0 store:(id)a1;
- (id)initWithAccount:(id)a0 store:(id)a1 familyEligibilityResponse:(id)a2;
- (double)_heightForText:(id)a0 constrainedToWidth:(double)a1;
- (id)_createDescriptionLabelForText:(id)a0;
- (void)_getStartedButtonWasTapped:(id)a0;

@end
