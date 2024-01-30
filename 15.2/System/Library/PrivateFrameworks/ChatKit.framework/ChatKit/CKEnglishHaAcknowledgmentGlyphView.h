@class CKAcknowledgmentGlyphImageView;

@interface CKEnglishHaAcknowledgmentGlyphView : CKAcknowledgmentGlyphView

@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *h1;
@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *a1;
@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *h2;
@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *a2;

- (void)setGlyphColor:(id)a0;
- (void)layoutSubviews;
- (struct CGPoint { double x0; double x1; })glyphOffset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(char)a1;
- (double)animationDuration;
- (void).cxx_destruct;
- (void)animateWithBeginTime:(double)a0 completionDelay:(double)a1 completion:(id /* block */)a2;
- (long long)acknowledgmentType;

@end
