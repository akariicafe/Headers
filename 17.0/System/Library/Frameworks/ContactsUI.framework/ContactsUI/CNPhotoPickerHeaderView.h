@class UIView, CNPhotoPickerHeaderViewTextField, NSArray, NSString, CNPhotoPickerProviderItem, CAShapeLayer, UIButton, CNVisualIdentity, CNVisualIdentityAvatarViewController, UIGestureRecognizer;
@protocol CNPhotoPickerHeaderViewDelegate;

@interface CNPhotoPickerHeaderView : UIView <UITextFieldDelegate, UIDropInteractionDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) CNVisualIdentity *visualIdentity;
@property (retain, nonatomic) NSArray *subviewsConstraints;
@property (retain, nonatomic) CNVisualIdentityAvatarViewController *avatarViewController;
@property (retain, nonatomic) UIButton *clearAvatarImageButton;
@property (retain, nonatomic) UIView *clearAvatarImageButtonBackground;
@property (retain, nonatomic) CAShapeLayer *clearAvatarImageButtonClippingLayer;
@property (retain, nonatomic) CNPhotoPickerHeaderViewTextField *identityNameTextField;
@property (retain, nonatomic) UIButton *clearIdentityNameButton;
@property (retain, nonatomic) UIGestureRecognizer *tapGestureRecognizer;
@property (weak, nonatomic) id<CNPhotoPickerHeaderViewDelegate> delegate;
@property (retain, nonatomic) CNPhotoPickerProviderItem *placeholderProviderItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void)updateConstraints;
- (void)textFieldDidEndEditing:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)didMoveToWindow;
- (void)didTapClearAvatarImageButton;
- (void)didTapClearIdentityNameButton;
- (void)didTapHeaderView;
- (id)initWithVisualIdentity:(id)a0;
- (id)initWithVisualIdentity:(id)a0 avatarViewController:(id)a1;
- (void)setClearAvatarImageButtonHidden:(BOOL)a0;
- (void)setupClearAvatarImageButton;
- (void)setupDragAndDrop;
- (void)setupHeaderViewWithPhotoView:(id)a0;
- (void)setupIdentityNameClearButtonIfNecessary;
- (void)setupIdentityNameTextFieldAndClearButton;
- (struct CGSize { double x0; double x1; })sizeOfPrimaryAvatar;
- (void)updateIdentityNameTextFieldMaxWidth;
- (void)updateIdentityNameTextFieldPlaceholderWithText:(id)a0;
- (void)updateIdentityNameTextFieldWithIdentity:(id)a0;
- (void)updateImageViewWithIdentity:(id)a0;
- (void)updatePhotoViewWithUpdatedIdentity:(id)a0;

@end
