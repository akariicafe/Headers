@class EKDayAllDayView, EKDayView, UIView;

@interface EKDayViewWithGutters : UIView {
    EKDayAllDayView *_leftAllDayView;
    EKDayAllDayView *_rightAllDayView;
    long long _targetSizeClass;
}

@property (readonly, nonatomic) UIView *leftGutter;
@property (readonly, nonatomic) UIView *rightGutter;
@property (retain, nonatomic) EKDayView *dayView;
@property (nonatomic) double gutterWidth;
@property (nonatomic) double allDayHeight;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dayView:(id)a1 sizeClass:(long long)a2;
- (id)_createAllDayView;

@end
