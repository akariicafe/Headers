@class TPLCDSubImageView, TPLCDTextView, UIView;

@interface TPLCDView : TPLCDBar {
    UIView *_contentView;
    TPLCDTextView *_textView;
    TPLCDTextView *_labelView;
    TPLCDSubImageView *_imageView;
    unsigned char _layoutAsLabelled : 1;
}

@property BOOL verticallyCenterTextViewIfLabelless;

+ (double)defaultTextFontSize;
+ (double)defaultLabelFontSize;

- (void)layoutSubviews;
- (void)setShadowColor:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_labelFrame;
- (id)label;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (id)text;
- (void)didMoveToWindow;
- (id)subImage;
- (void)setLabel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullSizedContentViewFrame;
- (id)initWithDefaultSizeForOrientation:(long long)a0;
- (void)_resetContentViewFrame;
- (double)_textVInset;
- (double)_labelVInset;
- (BOOL)shouldCenterContentView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_text1Frame;
- (BOOL)shouldCenterText;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textFrame;
- (void)setLabel:(id)a0 animate:(BOOL)a1;
- (void)didFinishAnimatingLCDLabelFadeOut:(id)a0 finished:(id)a1 context:(id)a2;
- (void)setContentsAlpha:(double)a0;
- (void)setTextFontSize:(double)a0;
- (void)setLabelFontSize:(double)a0;
- (void)blinkLabel;
- (void)setSubImage:(id)a0;
- (void)setLayoutAsLabelled:(BOOL)a0;
- (void)setSecondLineText:(id)a0;
- (id)secondLineText;

@end
