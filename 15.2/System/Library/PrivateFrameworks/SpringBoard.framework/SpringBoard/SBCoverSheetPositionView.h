@class UIView;

@interface SBCoverSheetPositionView : SBFTouchPassThroughView

@property (nonatomic) double progress;
@property (readonly, nonatomic) UIView *contentView;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })positionContentForTouchAtLocation:(struct CGPoint { double x0; double x1; })a0 withTransformMode:(long long)a1 forPresentationValue:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })positionContentForTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_simulatedTouchLocationForProgress;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_progressForTouchLocation:(struct CGPoint { double x0; double x1; })a0;
- (double)_progressFromContenViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_createContentView;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformForLocation:(struct CGPoint { double x0; double x1; })a0 transformMode:(long long)a1;

@end
