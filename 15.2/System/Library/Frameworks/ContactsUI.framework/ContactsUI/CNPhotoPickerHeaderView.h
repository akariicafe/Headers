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
- (void)layoutSubviews;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (void).cxx_destruct;
- (void)updateConstraints;
- (BOOL)resignFirstResponder;
- (id)initWithVisualIdentity:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)setupDragAndDrop;
- (struct CGSize { double x0; double x1; })sizeOfPrimaryAvatar;
- (void)setupHeaderViewWithPhotoView:(id)a0;
- (id)initWithVisualIdentity:(id)a0 avatarViewController:(id)a1;
- (void)setupIdentityNameTextFieldAndClearButton;
- (void)updateIdentityNameTextFieldMaxWidth;
- (void)setupIdentityNameClearButtonIfNecessary;
- (void)updatePhotoViewWithUpdatedIdentity:(id)a0;
- (void)updateImageViewWithIdentity:(id)a0;
- (void)didTapHeaderView;
- (void)updateIdentityNameTextFieldWithIdentity:(id)a0;
- (void)setClearAvatarImageButtonHidden:(BOOL)a0;
- (void)setupClearAvatarImageButton;
- (void)didTapClearAvatarImageButton;
- (void)didTapClearIdentityNameButton;
- (void)updateIdentityNameTextFieldPlaceholderWithText:(id)a0;
- (void)didMoveToWindow;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;

@end
