@class CKAcknowledgmentGlyphImageView;

@interface CKSimpleAcknowledgementGlyphView : CKAcknowledgmentGlyphView

@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *glyph;

- (void)setGlyphColor:(id)a0;
- (void)layoutSubviews;
- (struct CGPoint { double x0; double x1; })glyphOffset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(char)a1;
- (id)glyphImageForType:(long long)a0 color:(char)a1;
- (double)animationDuration;
- (void).cxx_destruct;

@end
