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

- (id)initWithAccount:(id)a0 store:(id)a1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateFonts;
- (id)initWithAccount:(id)a0 store:(id)a1 familyEligibilityResponse:(id)a2;
- (double)_heightForText:(id)a0 constrainedToWidth:(double)a1;
- (id)_createDescriptionLabelForText:(id)a0;
- (void)_getStartedButtonWasTapped:(id)a0;

@end
