@class UILabel;

@interface EKCurrentTimeMarkerView : UIView

@property (retain, nonatomic) UILabel *currentTimeLabel;
@property (nonatomic) BOOL showsThumb;
@property (nonatomic) BOOL showsLine;
@property (readonly, nonatomic) double markerWidth;
@property (readonly, nonatomic) double markerMidHeight;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentTimeFrame;

+ (id)timeMarkerFontForSizeClass:(long long)a0;
+ (double)_spacingAdjustmentFontSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sizeClass:(long long)a1;
- (void).cxx_destruct;
- (void)_updateTimeWithForce:(BOOL)a0;
- (void)invalidateFonts;
- (void)_updateTimeLabelColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_lineFrame;
- (void)updateTime;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
