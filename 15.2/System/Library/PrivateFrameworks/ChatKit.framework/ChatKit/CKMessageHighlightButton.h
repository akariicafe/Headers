@class UIVisualEffectView, CAShapeLayer, UIView, UIImageView, UIButton;
@protocol CKMessageHighlightButtonDelegate;

@interface CKMessageHighlightButton : UIView

@property (readonly, nonatomic) UIButton *button;
@property (readonly, nonatomic) BOOL didUpdate;
@property (readonly, nonatomic) UIView *backgroundColorView;
@property (readonly, nonatomic) UIView *backgroundColorViewForCrossFade;
@property (readonly, nonatomic) UIVisualEffectView *blurEffectView;
@property (readonly, nonatomic) CAShapeLayer *blurEffectMaskLayer;
@property (readonly, nonatomic) UIImageView *glyphView;
@property (readonly, nonatomic) UIImageView *glyphViewForCrossFade;
@property (weak, nonatomic) id<CKMessageHighlightButtonDelegate> delegate;
@property (readonly, nonatomic) BOOL isHighlighted;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })buttonSize;
- (void)buttonWasPressed:(id)a0;
- (void)performSelectedAnimation:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })replyButtonFrame;
- (struct CGSize { double x0; double x1; })buttonSizeWithInsets;
- (struct CGSize { double x0; double x1; })transcriptHighlightSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })balloonViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateTranscriptHighlightFrameRelativeToBalloonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateFrameRelativeToBalloonViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 transcriptHighlightFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)performUnselectedDismissAnimationWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)performFadeoutAnimationWithDuration:(double)a0 completion:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateFrameRelativeToBalloonViewFrame;
- (void)performHideAnimationWithDuration:(double)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)performShowAnimation:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (char)transcriptOrientation;
- (id)initWithInitialState:(BOOL)a0;

@end
