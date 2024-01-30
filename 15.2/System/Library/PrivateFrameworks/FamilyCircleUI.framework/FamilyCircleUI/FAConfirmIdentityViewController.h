@class UIView, NSString, AAUIProfilePictureStore, UIImage, NSValue, UIButton, ACAccount, UIImagePickerController, UILabel, UIScrollView;
@protocol FAConfirmIdentityViewControllerDelegate;

@interface FAConfirmIdentityViewController : UIViewController <UIImagePickerControllerDelegate, UIActionSheetDelegate, UINavigationControllerDelegate> {
    ACAccount *_appleAccount;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIView *_profilePhotoView;
    UILabel *_nameLabel;
    UILabel *_emailLabel;
    UIButton *_continueButton;
    UIButton *_useDifferentIDButton;
    AAUIProfilePictureStore *_profilePictureStore;
    UIImage *_newProfilePicture;
    NSValue *_newProfilePictureCropRect;
    UIImagePickerController *_imagePicker;
}

@property (weak, nonatomic) id<FAConfirmIdentityViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)instructions;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)pageTitle;
- (void)_updateFonts;
- (id)initWithAppleAccount:(id)a0 grandSlamSigner:(id)a1;
- (BOOL)shouldShowInviteeInstructions;
- (void)_photoWasTapped:(id)a0;
- (void)_addPhotoButtonWasTapped:(id)a0;
- (id)titleForContinuebutton;
- (void)continueButtonWasTapped:(id)a0;
- (void)_useDifferentIDButtonWasTapped:(id)a0;
- (double)_heightForText:(id)a0 width:(double)a1;
- (void)_showImagePickerForAvailableSources;
- (void)_updateViewsInPhotoArea:(id)a0;

@end
