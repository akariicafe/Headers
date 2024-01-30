@interface CKHeartAcknowledgmentGlyphView : CKSimpleAcknowledgementGlyphView

- (struct CGPoint { double x0; double x1; })glyphOffset;
- (void)animateWithBeginTime:(double)a0 completionDelay:(double)a1 completion:(id /* block */)a2;
- (long long)acknowledgmentType;

@end
