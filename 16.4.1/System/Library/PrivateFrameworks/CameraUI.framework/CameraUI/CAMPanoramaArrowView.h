@class UIImageView, CAShapeLayer, UIView;

@interface CAMPanoramaArrowView : UIView {
    UIImageView *_arrowHead;
    UIView *_arrowTail;
    CAShapeLayer *_arrowTailPiecesLayer;
    struct CGPath { } *_currentTailPiecesPath;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _arrowTailRect;
    double _currentNormalizedSpeed;
    double _tailBiggestDelta;
    double _tailBigDelta;
    double _tailMediumDelta;
    double _tailSmallDelta;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)reset;
- (struct CGPath { } *)_newTailPiecesPathOfWidth:(double *)a0;
- (void)_updateTailWithAnimationDuration:(double)a0;
- (void)animateWithNormalizedSpeed:(double)a0 duration:(double)a1;

@end
