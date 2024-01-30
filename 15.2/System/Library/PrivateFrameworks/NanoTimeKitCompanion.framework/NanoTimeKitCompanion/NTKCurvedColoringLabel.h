@class CLKUICurvedLabel, UIView;

@interface NTKCurvedColoringLabel : NTKColoringLabel {
    CLKUICurvedLabel *_curvedLabel;
}

@property (nonatomic) double circleRadius;
@property (nonatomic) BOOL interior;
@property (nonatomic) double centerAngle;
@property (nonatomic) double maxAngularWidth;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } textBoundingRect;
@property (nonatomic) unsigned long long imagePlacement;
@property (nonatomic) double imagePadding;
@property (weak, nonatomic) UIView *imageView;

- (void)setFont:(id)a0;
- (void)layoutSubviews;
- (id)attributedText;
- (double)maxWidth;
- (void)setNumberOfLines:(long long)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAlpha:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTracking:(double)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)color;
- (double)alpha;
- (void)setText:(id)a0;
- (void)setAttributedText:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)text;
- (long long)numberOfLines;
- (void)setTextColor:(id)a0;
- (id)font;
- (void)setColor:(id)a0;
- (double)_lastLineBaseline;
- (void)setMaxWidth:(double)a0;
- (double)_firstLineBaseline;
- (id)textColor;
- (void)sizeToFit;
- (void)invalidateCachedSize;
- (void)setUsesTextProviderTintColoring:(BOOL)a0;
- (void)_setAnimationAlpha:(double)a0;
- (id)textProviderFont;
- (void)setTextProviderFont:(id)a0;
- (void)_setUpSnapshot;
- (BOOL)isTextTruncated;
- (void)setImageView:(id)a0 placement:(unsigned long long)a1 padding:(double)a2;
- (void)getTextCenter:(struct CGPoint { double x0; double x1; } *)a0 startAngle:(double *)a1 endAngle:(double *)a2;

@end
