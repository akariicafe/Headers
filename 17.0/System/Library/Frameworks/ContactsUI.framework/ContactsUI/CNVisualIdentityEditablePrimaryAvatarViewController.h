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

- (void)endEditing;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)beginEditing;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textViewDidEndEditing:(id)a0;
- (void)adjustFontSizeToFitWidthForText:(id)a0;
- (BOOL)exceedsMaxCharacterCount:(long long)a0 containsEmoji:(BOOL)a1;
- (BOOL)hasValidInputTypeForText:(id)a0;
- (id)initWithProviderItem:(id)a0 variantsManager:(id)a1;
- (id)initWithVariantsManager:(id)a0;
- (BOOL)isEmojiProviderItemType;
- (BOOL)isMonogramProviderItemType;
- (void)layoutPrimaryAvatar;
- (double)maxTextFieldSize;
- (void)populateViewWithTextEditableProviderItem:(id)a0 imageType:(unsigned long long)a1;
- (BOOL)primaryAvatarShouldDisplay;
- (void)setUpFirstResponderForProviderItem:(id)a0;
- (void)setupImageContainerView;
- (void)setupTextField;
- (void)trimTextFieldTextIfNeeded:(id)a0;
- (void)trimTextFieldTextIfNeeded:(id)a0 containsEmoji:(BOOL)a1;
- (void)updateContainerViewMask;
- (void)updatePrimaryAvatarForVisualIdentity:(id)a0;
- (void)updateTextFieldFontSize:(double)a0;
- (void)updateViewWithProviderItem:(id)a0;
- (void)updateWithProviderItem:(id)a0;
- (id)updatedProviderItem;
- (id)updatedProviderItemWithText:(id)a0;
- (id)viewForPrimaryAvatar;

@end
