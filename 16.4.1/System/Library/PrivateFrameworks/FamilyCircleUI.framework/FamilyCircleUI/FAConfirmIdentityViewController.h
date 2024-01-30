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

- (void)_updateFonts;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (id)instructions;
- (id)pageTitle;
- (id)initWithAppleAccount:(id)a0 grandSlamSigner:(id)a1;
- (void)_useDifferentIDButtonWasTapped:(id)a0;
- (void)_addPhotoButtonWasTapped:(id)a0;
- (double)_heightForText:(id)a0 width:(double)a1;
- (void)_photoWasTapped:(id)a0;
- (void)_showImagePickerForAvailableSources;
- (void)_updateViewsInPhotoArea:(id)a0;
- (void)continueButtonWasTapped:(id)a0;
- (BOOL)shouldShowInviteeInstructions;
- (id)titleForContinuebutton;

@end
