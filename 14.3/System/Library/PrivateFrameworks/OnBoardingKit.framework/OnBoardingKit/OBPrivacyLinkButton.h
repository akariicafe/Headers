@class UITextView, NSString, UIImageView, UILabel, UIView;

@interface OBPrivacyLinkButton : UIButton

@property (readonly) UIImageView *iconView;
@property (readonly) UITextView *textView;
@property (readonly) UILabel *buttonLabel;
@property (readonly) UIView *containerView;
@property (readonly) NSString *captionText;
@property (readonly) NSString *buttonText;
@property BOOL largeIcon;
@property struct CGSize { double width; double height; } contentSize;

- (id)viewForLastBaselineLayout;
- (id)_font;
- (void)tintColorDidChange;
- (id)titleForState:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (BOOL)_isButtonAboveCaptionText;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeForButtonText;
- (id)labelText;
- (id)buttonColor;
- (void)layoutSubviews;
- (id)initWithCaption:(id)a0 buttonText:(id)a1 image:(id)a2 imageSize:(struct CGSize { double x0; double x1; })a3 useLargeIcon:(BOOL)a4;
- (void)_updateButtonColorWithColor:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;

@end
