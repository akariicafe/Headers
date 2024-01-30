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

- (void)setNumberOfLines:(long long)a0;
- (void)setAttributedText:(id)a0;
- (id)attributedText;
- (id)font;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)maxWidth;
- (void).cxx_destruct;
- (void)sizeToFit;
- (void)setTextColor:(id)a0;
- (id)textColor;
- (long long)numberOfLines;
- (id)text;
- (void)setFont:(id)a0;
- (double)alpha;
- (void)setTracking:(double)a0;
- (id)color;
- (void)layoutSubviews;
- (void)setColor:(id)a0;
- (void)setAlpha:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_lastLineBaseline;
- (double)_firstLineBaseline;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setText:(id)a0;
- (void)setMaxWidth:(double)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)invalidateCachedSize;
- (void)setTextProviderFont:(id)a0;
- (void)setUsesTextProviderTintColoring:(BOOL)a0;
- (void)_setAnimationAlpha:(double)a0;
- (void)_setUpSnapshot;
- (id)textProviderFont;
- (BOOL)isTextTruncated;
- (void)setImageView:(id)a0 placement:(unsigned long long)a1 padding:(double)a2;
- (void)getTextCenter:(struct CGPoint { double x0; double x1; } *)a0 startAngle:(double *)a1 endAngle:(double *)a2;

@end
