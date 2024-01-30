@class UIFont, NSString, UITextView, CAGradientLayer, NSParagraphStyle;

@interface SFDialogTextView : UIView {
    NSString *_title;
    NSString *_message;
    UIFont *_titleFont;
    UIFont *_messageFont;
    UIFont *_messageFontWithTitle;
    NSParagraphStyle *_titleParagraphStyle;
    UITextView *_textView;
    double _preferredMaxLayoutWidth;
    CAGradientLayer *_topGradient;
    CAGradientLayer *_bottomGradient;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;

- (void)_updateText;
- (id)initWithCoder:(id)a0;
- (void)setMessage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setPreferredMaxLayoutWidth:(double)a0;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)flashScrollIndicators;
- (void)_updateFontStyling;
- (void)_updateTextContainerInset;

@end
