@class UIColor;

@interface CEKWheelScrubberRoundedCornerOverlayView : UICollectionReusableView

@property (readonly, nonatomic) UIColor *cornerColor;
@property (readonly, nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long corners;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setCorners:(unsigned long long)a0;

@end
