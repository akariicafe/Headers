@class UIImageView;

@interface UIMovieScrubberTrackOverlayView : UIView {
    double _value;
    double _minimumValue;
    double _maximumValue;
    double _startValue;
    double _endValue;
    UIImageView *_leftFillView;
    UIImageView *_rightFillView;
    unsigned int _editingHandle;
    unsigned char _editing : 1;
    unsigned char _zoomed : 1;
}

- (void)layoutSubviews;
- (void)setValue:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setMaximumValue:(double)a0;
- (void)setMinimumValue:(double)a0;
- (void).cxx_destruct;
- (void)animateFillFramesAway;
- (void)setEndValue:(double)a0;
- (void)setIsZoomed:(BOOL)a0;
- (void)setStartValue:(double)a0;
- (void)_clampValueAndLayout;
- (void)setEditing:(BOOL)a0;
- (void)_updateLeftFill;
- (void)setEditingHandle:(int)a0;
- (void)_updateRightFill;

@end
