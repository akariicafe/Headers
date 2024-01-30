@class CALayer;

@interface CKThumbsDownAcknowledgmentGlyphView : CKSimpleAcknowledgementGlyphView

@property (retain, nonatomic) CALayer *animationLayer;
@property (retain, nonatomic) CALayer *contentLayer;

- (double)animationDuration;
- (void).cxx_destruct;
- (long long)acknowledgmentType;
- (void)animateWithBeginTime:(double)a0 completionDelay:(double)a1 completion:(id /* block */)a2;
- (void)setGlyphColor:(id)a0;

@end
