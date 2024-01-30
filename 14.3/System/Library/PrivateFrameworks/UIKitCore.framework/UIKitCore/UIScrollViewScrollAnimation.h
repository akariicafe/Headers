@class CABasicAnimation;

@interface UIScrollViewScrollAnimation : UIAnimation {
    struct CGPoint { double x; double y; } _originalOffset;
    struct CGPoint { double x; double y; } _targetOffset;
    BOOL _targetOffsetValidAtStart;
    double _accuracy;
    BOOL _adjustsForContentOffsetDelta;
    CABasicAnimation *_customAnimation;
    BOOL _forDiscreteScroll;
    BOOL _beingReplacedForDiscreteScroll;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)setProgress:(float)a0;
- (float)progressForFraction:(float)a0;
- (void)adjustForContentOffsetDelta:(struct CGPoint { double x0; double x1; })a0;

@end
