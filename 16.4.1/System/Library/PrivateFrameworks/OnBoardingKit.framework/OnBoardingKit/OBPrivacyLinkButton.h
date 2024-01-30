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
@property (retain, nonatomic) NSString *displayLanguage;

- (BOOL)_isButtonAboveCaptionText;
- (id)initWithCaption:(id)a0 buttonText:(id)a1 image:(id)a2 imageSize:(struct CGSize { double x0; double x1; })a3 useLargeIcon:(BOOL)a4 displayLanguage:(id)a5;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeForButtonText;
- (id)labelText;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_updateButtonColorWithColor:(id)a0;
- (id)viewForLastBaselineLayout;
- (void)tintColorDidChange;
- (id)titleForState:(unsigned long long)a0;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)_font;
- (void).cxx_destruct;

@end
