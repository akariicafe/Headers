@class CALayer;

@interface CKThumbsDownAcknowledgmentGlyphView : CKSimpleAcknowledgementGlyphView

@property (retain, nonatomic) CALayer *animationLayer;
@property (retain, nonatomic) CALayer *contentLayer;

- (void)setGlyphColor:(id)a0;
- (double)animationDuration;
- (void).cxx_destruct;
- (void)animateWithBeginTime:(double)a0 completionDelay:(double)a1 completion:(id /* block */)a2;
- (long long)acknowledgmentType;

@end
