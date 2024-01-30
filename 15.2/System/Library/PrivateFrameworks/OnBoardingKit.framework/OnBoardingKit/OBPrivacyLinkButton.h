@class UITextView, NSString, UIImageView, UILabel, UIView;

@interface OBPrivacyLinkButton : UIButton

@property (readonly) UIImageView *iconView;
@property (readonly) UITextView *textView;
@property (readonly) UILabel *buttonLabel;
@property (readonly) UIView *containerView;
@property (readonly) NSString *captionText;
@property (readonly) NSString *buttonText;
@property BOOL largeIcon;
@property (nonatomic) BOOL underlineLinks;
@property struct CGSize { double width; double height; } contentSize;

- (id)_font;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (id)viewForLastBaselineLayout;
- (void)setHighlighted:(BOOL)a0;
- (id)labelText;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_isButtonAboveCaptionText;
- (void)_updateButtonColorWithColor:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeForButtonText;
- (id)initWithCaption:(id)a0 buttonText:(id)a1 image:(id)a2 imageSize:(struct CGSize { double x0; double x1; })a3 useLargeIcon:(BOOL)a4;
- (id)titleForState:(unsigned long long)a0;
- (void)tintColorDidChange;

@end
