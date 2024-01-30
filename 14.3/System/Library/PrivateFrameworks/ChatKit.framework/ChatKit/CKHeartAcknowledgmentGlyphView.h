@interface CKHeartAcknowledgmentGlyphView : CKSimpleAcknowledgementGlyphView

- (long long)acknowledgmentType;
- (void)animateWithBeginTime:(double)a0 completionDelay:(double)a1 completion:(id /* block */)a2;
- (struct CGPoint { double x0; double x1; })glyphOffset;

@end
