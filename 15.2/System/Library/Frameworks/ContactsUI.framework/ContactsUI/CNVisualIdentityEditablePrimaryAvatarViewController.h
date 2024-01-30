@class UIFont, UIView, NSString, CNPhotoPickerVariantsManager, CNPhotoPickerProviderItem, UIImageView, CAShapeLayer, CNVisualIdentityEditablePrimaryAvatarTextField;
@protocol CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate;

@interface CNVisualIdentityEditablePrimaryAvatarViewController : UIViewController <UITextViewDelegate, CNVisualIdentityPrimaryAvatarProvider>

@property (retain, nonatomic) UIImageView *imageContainerView;
@property (retain, nonatomic) CNVisualIdentityEditablePrimaryAvatarTextField *textField;
@property (retain, nonatomic) UIFont *originalFont;
@property (retain, nonatomic) CAShapeLayer *clippingLayer;
@property (retain, nonatomic) UIView *imageContentView;
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager;
@property (retain, nonatomic) CNPhotoPickerProviderItem *providerItem;
@property (weak, nonatomic) id<CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate> delegate;
@property (nonatomic) double desiredFontSize;
@property (readonly, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)endEditing;
- (void)viewDidLayoutSubviews;
- (void)setupTextField;
- (id)viewForPrimaryAvatar;
- (void)updatePrimaryAvatarForVisualIdentity:(id)a0;
- (BOOL)primaryAvatarShouldDisplay;
- (id)initWithVariantsManager:(id)a0;
- (void)updateWithProviderItem:(id)a0;
- (void)updateViewWithProviderItem:(id)a0;
- (void)populateViewWithTextEditableProviderItem:(id)a0 imageType:(unsigned long long)a1;
- (void)setupImageContainerView;
- (void)updateTextFieldFontSize:(double)a0;
- (BOOL)isMonogramProviderItemType;
- (void)updateContainerViewMask;
- (void)adjustFontSizeToFitWidthForText:(id)a0;
- (void)trimTextFieldTextIfNeeded:(id)a0;
- (BOOL)hasValidInputTypeForText:(id)a0;
- (void)trimTextFieldTextIfNeeded:(id)a0 containsEmoji:(BOOL)a1;
- (BOOL)exceedsMaxCharacterCount:(long long)a0 containsEmoji:(BOOL)a1;
- (double)maxTextFieldSize;
- (void)centerTextFieldInContainerView;
- (void)beginEditing;
- (void).cxx_destruct;
- (void)layoutPrimaryAvatar;
- (id)initWithProviderItem:(id)a0 variantsManager:(id)a1;
- (void)setupViewWithProviderItem:(id)a0;
- (id)updatedProviderItem;
- (BOOL)isEmojiProviderItemType;
- (id)updatedProviderItemWithText:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;

@end
