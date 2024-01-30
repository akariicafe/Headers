@class CKAcknowledgmentGlyphImageView;

@interface CKExclamationAcknowledgmentGlyphView : CKAcknowledgmentGlyphView

@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *leftExclamationGlyph;
@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *rightExclamationGlyph;

- (double)animationDuration;
- (void)setGlyphColor:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (long long)acknowledgmentType;
- (void)animateWithBeginTime:(double)a0 completionDelay:(double)a1 completion:(id /* block */)a2;
- (struct CGPoint { double x0; double x1; })glyphOffset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(char)a1;

@end
